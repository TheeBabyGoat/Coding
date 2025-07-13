using GTA;
using GTA.Native;
using System;
using System.Threading;

namespace CustomWeatherCycle
{
    public class CustomWeatherCycle : Script
    {
        string[] weatherNames =
        {
            "EXTRASUNNY",
            "CLEAR",
            "CLOUDS",
            "SMOG",
            "FOGGY",
            "OVERCAST",
            "RAIN",
            "THUNDER",
            "CLEARING",
            "NEUTRAL",
            "SNOW",
            "BLIZZARD",
            "SNOWLIGHT",
            "XMAS"
        };

        XMLSettings.SetWeatherTS[] setWeathers;
        Weather setWeatherPersist = Weather.Unknown;

        public CustomWeatherCycle()
        {
            setWeathers = XMLSettings.LoadSettings();

            if (setWeathers != null)
            {
                Interval = 1960; //~2 seconds is 1 minute in gta time
                Tick += CustomWeatherCycle_Tick;
            }
            else
            {
                Interval = 500;
                Tick += Error_Tick;
            }
        }

        private void Error_Tick(object sender, EventArgs e)
        {
            if (Game.IsLoading || Game.IsScreenFadedOut || Game.IsScreenFadingIn) return;

            UI.ShowSubtitle("Error loading custom weather cycle", 5000);
            Tick -= Error_Tick;
        }

        private void CustomWeatherCycle_Tick(object sender, EventArgs e)
        {
            foreach (XMLSettings.SetWeatherTS sw in setWeathers)
            {
                var currentTime = World.CurrentDayTime;

                if (currentTime.Hours == sw.Time.Hours && currentTime.Minutes == sw.Time.Minutes)
                {
                    if (World.NextWeather != sw.Weather && World.Weather != sw.Weather)
                    {
                        setWeatherPersist = Weather.Unknown;

                        //clear last persistent weather
                        var originalWeather = World.Weather;
                        Function.Call(Hash.CLEAR_OVERRIDE_WEATHER);
                        Function.Call(Hash.CLEAR_WEATHER_TYPE_PERSIST);
                        World.Weather = originalWeather;
                        
                        //transition
                        World.TransitionToWeather(sw.Weather, 60); //60 = 10 seconds

                        if (sw.Persistent)
                        {
                            setWeatherPersist = sw.Weather;
                        }
                    }

                    break;
                }

                Yield();
            }

            //set weather persistent after transitioned
            if (setWeatherPersist != Weather.Unknown && World.Weather == setWeatherPersist && World.NextWeather == setWeatherPersist)
            {
                string weatherName = weatherNames[(int)setWeatherPersist];

                Function.Call(Hash.SET_WEATHER_TYPE_PERSIST, weatherName);
                Function.Call(Hash.SET_OVERRIDE_WEATHER, weatherName);

                setWeatherPersist = Weather.Unknown;
            }
        }
    }
}
