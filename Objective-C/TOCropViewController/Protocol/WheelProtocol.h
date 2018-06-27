//
//  WheelProtocol.h
//  TOCropViewControllerExample
//
//  Created by Matt Guest on 6/26/18.
//  Copyright © 2018 Tim Oliver. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WheelProtocol <NSObject>

- (void) wheelDidChangeValue:(NSString *)newValue;

@end
