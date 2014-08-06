iMobileDevice
===========

iMobileDevice is an Objective-C framework that wraps [libimobiledevice](http://www.libimobiledevice.org).
libimobiledevice is an open source library for communicating with iOS device natively.

This project also contains a test application which showcases various features, and how to query properties, retrieve the devices wallpaper and take screenshots of the device.

Currently only the following features from libimobiledevice are supported:
* Finding basic device information (name, product type, color, height/width, scale factor)
* Querying Lockdownd key/domain properties
* Getting installed applications
* Retrieving the icon for an installed application
* Device screenshot
* Retrieving device wallpaper

![iMobileDevice test app](/Screenshot-testApp.png?raw=true)
