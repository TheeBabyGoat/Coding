using GTA;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Xml;
using System.Xml.Serialization;

namespace CustomWeatherCycle
{
    public class XMLSettings
    {
        #region XML classes
        [Serializable]
        public class Settings
        {
            public SetWeather[] SetWeathers;

            public Settings() { }

            public Settings(SetWeather[] setWeathers)
            {
                SetWeathers = setWeathers;
            }
        }

        [Serializable]
        public class SetWeather
        {
            public Weather Weather;
            public string Time;
            public bool Persistent;

            public SetWeather() { }
        }
        #endregion

        internal class SetWeatherTS
        {
            internal Weather Weather;
            internal TimeSpan Time;
            internal bool Persistent;

            internal SetWeatherTS(Weather weather, TimeSpan time, bool persistent)
            {
                Weather = weather;
                Time = time;
                Persistent = persistent;
            }
        }

        private static object ReadXML(Type type, string xmlLoc)
        {
            try
            {
                var serializer = new XmlSerializer(type);

                using (var reader = XmlReader.Create(xmlLoc))
                {
                    if (serializer.CanDeserialize(reader))
                    {
                        return serializer.Deserialize(reader);
                    }
                    else return null;
                }
            }
            catch (Exception)
            {
                return null;
            }
        }

        internal static SetWeatherTS[] LoadSettings()
        {
            var settings = (Settings)ReadXML(typeof(Settings), Path.ChangeExtension(Assembly.GetExecutingAssembly().CodeBase, ".xml"));

            if (settings == null || settings.SetWeathers == null || settings.SetWeathers.Length == 0) return null;

            var setWeathersTS = new List<SetWeatherTS>();

            foreach (SetWeather sw in settings.SetWeathers)
            {
                var ts = new TimeSpan();

                if (!string.IsNullOrWhiteSpace(sw.Time) && TimeSpan.TryParseExact(sw.Time, @"h\:m", null, out ts)
                    && (int)sw.Weather > -1 && (int)sw.Weather < 14)
                {
                    setWeathersTS.Add(new SetWeatherTS(sw.Weather, ts, sw.Persistent));
                }
            }

            if (setWeathersTS.Count == 0)
            {
                return null;
            }

            return setWeathersTS.ToArray();
        }
    }
}
