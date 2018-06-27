//
//  WheelSection.m
//  CropViewController
//
//  Created by Matt Guest on 6/26/18.
//  Copyright © 2018 Tim Oliver. All rights reserved.
//

#import "WheelSection.h"

@implementation WheelSection

@synthesize minValue, maxValue, midValue, section;

- (NSString *) description {
    return [NSString stringWithFormat: @"%i | %f, %f, %f", self.section, self.minValue, self.midValue, self.maxValue];
}

@end
