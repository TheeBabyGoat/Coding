#define LOD 3.5 // controls how blurry the background is
#define _MainTex iChannel0
#define _NoiseTex iChannel1
#define _ShadeDir vec2(-1.0, 1.0)

// iChannel1 is recommended to use the 'RGBA Noise Small' texture (64x64)

float shading(vec2 dir)
{
    float s = dot(normalize(dir), normalize(_ShadeDir));
    s = max(s, 0.0);
    return s;
}

//----------------------------
// Eliemichel's technique
//----------------------------

// uv   - texcoord for looking up the background texture
// p    - a 2d position for noise lookup
// curr - the current output color
// time - scaled time for this layer
vec4 layerEliemichel(vec2 uv, vec2 p, vec4 curr, float time)
{
    vec2 x = vec2(30); // controls the size vs density
    vec2 xuv = x * p;
    vec4 n = texture(_NoiseTex, round(xuv - .3) / x);
    
    vec2 offset = (texture(_NoiseTex, p * .1).rg - .5) * 2.; // expands to [-1, 1]
    vec2 z = xuv * 6.3 + offset; // 6.3 is a magic number
    x = sin(z) - fract(time * (n.b + .1) + n.g) * .5;
    
    if (x.x + x.y - n.r * 3. > .5)
    {
        vec2 dir = cos(z);
        curr = textureLod(_MainTex, uv + dir * .2, 0.0);
        curr += shading(dir) * curr;
    }
    return curr;
}

//----------------------------
// BigWIngs' technique
//----------------------------


vec3 n31(float p)
{
    //  3 out, 1 in... DAVE HOSKINS
    vec3 p3 = fract(vec3(p) * vec3(.1031, .11369, .13787));
    p3 += dot(p3, p3.yzx + 19.19);
    return fract(vec3((p3.x + p3.y) * p3.z, (p3.x + p3.z) * p3.y, (p3.y + p3.z) * p3.x));
}

float sawTooth(float t)
{
    return cos(t + cos(t)) + sin(2. * t) * .2 + sin(4. * t) * .02;
}
float deltaSawTooth(float t)
{
    return 0.4 * cos(2. * t) + 0.08 * cos(4. * t) - (1. - sin(t)) * sin(t + cos(t));
}


vec3 getDrops(vec2 uv, float seed, float t)
{
    
    vec2 o = vec2(0.);
    
    uv.y += t * 0.05;
    
    uv *= vec2(20., 2.5) * 2.;
    vec2 id = floor(uv);
    vec3 n = n31(id.x + (id.y + seed) * 546.3524);
    vec2 bd = fract(uv);
    
    vec2 uv2 = bd;
    
    bd -= .5;
    
    bd.y *= 4.;
    
    bd.x += (n.x - .5) * .6;
    
    t += n.z * 6.28;
    float slide = sawTooth(t);
    
    float ts = 1.5;
    vec2 trailPos = vec2(bd.x * ts, (fract(bd.y * ts * 2. - t * 2.) - .5) * .5);
    
    bd.y += slide * 2.; // make drops slide down
    
    //#ifdef HIGH_QUALITY
    float dropShape = bd.x * bd.x;
    dropShape *= deltaSawTooth(t);
    bd.y += dropShape; // change shape of drop when it is falling
   	//#endif
    
    float d = length(bd); // distance to main drop
    
    float trailMask = smoothstep(-.2, .2, bd.y); // mask out drops that are below the main
    trailMask *= bd.y; // fade dropsize
    float td = length(trailPos * max(.5, trailMask)); // distance to trail drops
    
    float mainDrop = smoothstep(.2, .1, d);
    float dropTrail = 0.0; //smoothstep(.1, .002, td);
    
    dropTrail *= trailMask;
    o = mix(bd * mainDrop, trailPos, dropTrail); // mix main drop and drop trail
    
    return vec3(o, d);
}

vec4 layerBigWIngs(vec2 uv, vec2 p, vec4 curr, float time)
{
    vec3 drop = getDrops(p, 1., time);
    
    if (length(drop.xy) > 0.0)
    {
        vec2 offset = -drop.xy * (1.0 - drop.z);
        curr = texture(_MainTex, uv + offset);
        curr += shading(offset) * curr * 0.5;
    }
    
    return curr;
}


//----------------------------
// Main
void mainImage(out vec4 ret, vec2 g)
{
    vec2 uv = g / iResolution.xy;
    
    // background
    ret = textureLod(_MainTex, uv, LOD);
    
    // use BigWIngs layer as base drops
    ret = layerBigWIngs(uv, uv * 2.2, ret, iTime * 0.5);
    
    // add Eliemichel layers with fbm (see https://www.shadertoy.com/view/lsl3RH) as detailed drops.
    const mat2 m = mat2(0.80, 0.60, -0.60, 0.80);
    vec2 p = uv;
    
    ret = layerEliemichel(uv, p + vec2(0, iTime * 0.01), ret, iTime * 0.25);
    p = m * p * 2.02;
    
    ret = layerEliemichel(uv, p, ret, iTime * 0.125);
    p = m * p * 1.253;
    
    ret = layerEliemichel(uv, p, ret, iTime * 0.125);
    
}

//----------------------------

//----------------------------

// TAA Pass borrowed from Enscaoe Cube (https://www.shadertoy.com/view/4dSBDt)
// Use Firefox to view it!!

//#define NO_AA
#define NO_YCOCG

ivec2 offsets[8] = ivec2[8]( ivec2(-1,-1), ivec2(-1, 1), 
	ivec2(1, -1), ivec2(1, 1), 
	ivec2(1, 0), ivec2(0, -1), 
	ivec2(0, 1), ivec2(-1, 0));

vec3 RGBToYCoCg(vec3 RGB)
{
#ifndef NO_YCOCG
	float Y = dot(RGB, vec3(  1, 2,  1 )) * 0.25;
	float Co= dot(RGB, vec3(  2, 0, -2 )) * 0.25 + ( 0.5 * 256.0/255.0 );
	float Cg= dot(RGB, vec3( -1, 2, -1 )) * 0.25 + ( 0.5 * 256.0/255.0 );
	return vec3(Y, Co, Cg);
#else
    return RGB;
#endif
}

vec3 YCoCgToRGB(vec3 YCoCg)
{
#ifndef NO_YCOCG
	float Y= YCoCg.x;
	float Co= YCoCg.y - ( 0.5 * 256.0 / 255.0 );
	float Cg= YCoCg.z - ( 0.5 * 256.0 / 255.0 );
	float R= Y + Co-Cg;
	float G= Y + Cg;
	float B= Y - Co-Cg;
	return vec3(R,G,B);
#else
    return YCoCg;
#endif
}


void mainImage(out vec4 fragColor, in vec2 fragCoord)
{
    vec2 q = fragCoord.xy / iResolution.xy;
    vec3 new = RGBToYCoCg(textureLod(iChannel0, q, 0.0).xyz);
    vec3 history = RGBToYCoCg(textureLod(iChannel1, q, 0.0).xyz);
    
    vec3 colorAvg = new;
    vec3 colorVar = new * new;
    
    // Marco Salvi's Implementation (by Chris Wyman)
    for (int i = 0; i < 8; i++)
    {
        vec3 fetch = RGBToYCoCg(texelFetch(iChannel0, ivec2(fragCoord.xy) + offsets[i], 0).xyz);
        colorAvg += fetch;
        colorVar += fetch * fetch;
    }
    colorAvg /= 9.0;
    colorVar /= 9.0;
    float gColorBoxSigma = 0.75;
    vec3 sigma = sqrt(max(vec3(0.0), colorVar - colorAvg * colorAvg));
    vec3 colorMin = colorAvg - gColorBoxSigma * sigma;
    vec3 colorMax = colorAvg + gColorBoxSigma * sigma;
    
    history = clamp(history, colorMin, colorMax);
  
    fragColor = vec4(YCoCgToRGB(mix(new, history, 0.95)), 1.0);
#ifdef NO_AA
    fragColor = vec4(YCoCgToRGB(new), 1.0);
#endif
}

void mainImage(out vec4 fragColor, in vec2 fragCoord)
{
    vec2 q = fragCoord.xy / iResolution.xy;
    
    fragColor = textureLod(iChannel0, q, 0.0);
    return;
}
