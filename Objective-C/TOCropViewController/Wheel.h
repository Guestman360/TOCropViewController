//
//  Wheel.h
//  CropViewController
//
//  Created by Matt Guest on 6/26/18.
//  Copyright © 2018 Tim Oliver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WheelProtocol.h"
#import "WheelSection.h"

@interface Wheel : UIControl

@property (nonatomic, strong) NSMutableArray *sections;
@property int currentSection;
@property (weak) id <WheelProtocol> wheelDelegate;
@property (nonatomic, strong) UIView *container;
@property int numberOfSections;
@property CGAffineTransform startTransform;

- (id) initWithFrame:(CGRect)frame andDelegate:(id)del withSections:(int)sectionsNumber;
- (void)rotate;

@end
