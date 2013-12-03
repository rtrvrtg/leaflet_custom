Leaflet Custom
==============

Drupal 7 module: Feature to create custom maps and zoomable images using Leaflet.

Quick and dirty module by Geoffrey Roberts (geoffreyr on drupal.org)


Creating & Editing Maps
=======================

This feature uses [Entity Construction Kit][eck] to manage its entities, and all custom entity types that use this module use a unified interface for management. Sorry to say that right now there's a whole bunch of stuff to drill down to to get to the interface – might look at streamlining this later on.

First, go to Structure > Entity Types. From there, click the "Leaflet Custom map" entity type, then the "Leaflet Custom map" bundle. Then you'll be able to add and edit custom maps as you like.

Creating them is pretty straightforward, you can set your title, description, minimum and maximum zoom, attribution, and the URL template. The URL template's the most important thing to get right; it's where your map tiles come from.

For example, if you're hosting your tiles on Amazon, you'd use a format like the following:

<code>http://mybucket.s3.amazonaws.com/my-map-tiles/{z}/{x}/{y}.jpg</code>

where <code>{z}</code> represents your zoom level, and <code>{x}</code> and <code>{y}</code> cover X and Y coordinates respectively.

[eck]: https://drupal.org/project/eck


Using Maps
==========

If you've got Leaflet Views installed, this is easy. Just select your custom map from the list of map options (the one that starts with OSM Mapnik as the default) and you should be up and running.

I've not tried instantiating one using the Leaflet API directly; I'll see about looking into how to make this happen. My best guess would be to load the list of maps that Leaflet uses and using the array item that has the title you want as its index.


Making Map Tiles
================

There are a couple of different solutions for making map tiles:

 * [MapTiler][maptiler] - great if you want to make world maps only, but it might offer more options if you get the paid-for version.
 * [GDAL][gdal] - a library designed to slice up large images into tiles. I've built a shell script that uses GDAL and ImageMagick to do the job; I might put that up on a separate repo, if it may be of some help.

Here's a tutorial on building map tiles that was a big help to me:

http://build-failed.blogspot.com.au/2012/11/zoomable-image-with-leaflet.html

[maptiler]: http://www.maptiler.com
[gdal]: http://www.gdal.org
