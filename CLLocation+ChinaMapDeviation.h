//
//  CLLocation+ChinaMapDeviation.h
//
//  Created by Maxime on 5/12/13.
//  Copyright (c) 2013 Maxime. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@interface CLLocation (ChinaMapDeviation)
-(CLLocationCoordinate2D) correctedCoordinates;
@end
