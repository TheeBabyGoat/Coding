#pragma once


namespace rage
{
	enum ptxCullMode {
		grccmNone,
		grccmFront,	
		grccmBack,
		grccCount
	};

	enum ptxBlendSet {
		grcbsNormal,					// Standard dest*(1-srcAlpha) + src*srcAlpha blend
		grcbsAdd,						// dest + src
		grcbsSubtract,					// src - dest (not that useful, you probably want grcbsReverseSubtract instead)
		grcbsLightmap,					// dest*srcAlpha + src*(1-srcAlpha), same as grcbsNormal but with inverted alpha
		grcbsMatte,						// dest + src*destAlpha, for "additive" HUD cutout
		grcbsOverwrite,					// src only (same as disabling alpha blending)
		grcbsDest,						// dest*(1-destAlpha) + src*destAlpha, for "blend" HUD cutout
		grcbsAlphaAdd,					// dest + src*srcAlpha (not that useful, might as well use grcbsAdd and do the multiply in the shader)
		grcbsReverseSubtract,			// dest - src
		grcbsMin,						// Min(src,dest)
		grcbsMax,						// Max(src,dest)
		grcbsAlphaSubtract, 			// dest - src*srcAlpha (not that useful, might as well use grcbsReverseSubtract and do the multiply in the shader)
		grcbsMultiplySrcDest,			// multiply dest*src
		grcbsCompositeAlpha,			// dest*(1-srcAlpha) + src
		grcbsCompositeAlphaSubtract,	// dest*(1-srcAlpha) - src
		grcbsCount
	};

	struct ptxRenderState
	{
		int m_cullMode;
		int m_blendSet;
		int m_lightingMode;
		bool m_depthWrite;
		bool m_depthTest;
		bool m_alphaBlend;
		char pad[5];
	};
}