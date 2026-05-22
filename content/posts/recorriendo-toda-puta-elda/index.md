+++
title = "Walking Every F&!*ing Street in Elda"
date = "2024-07-08"
description = "Together with my dear friend Abel, I'm walking every street in our town. Why would anyone want to walk every single street in their town? No idea."

[taxonomies]
tags = ["misc", "project"]

[extra]
author = { name = "Pau", social= "http://twitter.com/"}
+++

Together with my dear friend [Abel](https://abeldonate.com/), I'm walking every street in our town. Why would anyone want to walk every single street in their town? No idea. The thing is, every time we meet up, we talk about our lives while trying to figure out the route that maximizes the number of streets walked per step taken. Afterwards, we make a [**map**](https://github.com/abeldonate/walking-trackmap/blob/main/resultingmap.html) to keep track of our progress. 

<iframe src="https://raw.githack.com/abeldonate/walking-trackmap/main/resultingmap.html" width="100%" height="500" style="border: 1px solid #ccc; border-radius: 4px; margin: 1em 0;"></iframe>


## The Rules

The _rules of the game_ are simple. We always meet at the same spot, and we start walking. Every street, avenue, road, etc. must be walked — that is, anything with a name. Private properties don't count even if they have roads, for now. Also, we must walk the **entire length** of the street, not just _touch_ it.

These rules are more permissive than those in [Tom Murphy VII's wonderful video](https://www.youtube.com/watch?v=1c8i5SABqwU), where he always starts from the same spot, goes running, and more. Highly recommend the video, which neither Abel nor I had seen before starting this!

There remains a can of worms unopened: what is the actual extent of Elda (and Petrer)? As it turns out, legally speaking [Elda is actually quite big](https://es.wikipedia.org/wiki/Elda#/map/0) and [Petrer is even bigger](https://es.wikipedia.org/wiki/Petrer#/map/0). Will we ever run the length of our hometown? I honestly do not know, but we will hopefully try our hardest for years to come.   

## Tracking technology

Every time we meet, we track the walk with the [Strava](https://www.strava.com/) app to log our GPS position at all times. Once the walk is done, we download the data onto a computer and feed it into a `Python` script that uses the `OpenStreetMap` library to generate an `html` file that renders the map. For more details, check out the [GitHub repository](https://github.com/abeldonate/walking-trackmap).
