ChinaMapDeviation
=================

A method to correct the China Map Deviation, written as an Objective-C category on CLLocation.

This approximation has a precision of 4 to 5 meters. 

Thank you Wu Yongzheng for providing the data that has been necessary to generate the Fourier transform and Quadratic approximations used in this code. http://wuyongzheng.wordpress.com/2010/01/22/china-map-deviation-as-a-regression-problem/

BorderPatrol together with the china.kml file is used to detect whether the correction should be applied. You'll need to include BorderPatrol from https://github.com/square/objc-borderpatrol if you want to run this.