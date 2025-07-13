A mod for GTA V that makes it so you can set weathers to start at certain times.

An example of a custom weather cycle is provided in the CustomWeatherCycle.xml file.

To create a new weather at a certain time, just copy the segment of XML from <SetWeather> to </SetWeather>, then make necessary edits.

To remove a weather, delete the segment of XML from <SetWeather> to </SetWeather> of the entry you don't want.

List of available weathers: https://github.com/crosire/scripthookvdotnet/blob/756243de96cd0dfadca65f5fa5612174c1e69bf7/source/scripting/World.cs#L118

Installation:
* Install Script Hook V.
* Install Script Hook V .NET.
* Create a scripts folder in your GTA V directory if it's not already there.
* Copy CustomWeatherCycle.dll and CustomWeatherCycle.xml to within the scripts folder in your GTA V directory.