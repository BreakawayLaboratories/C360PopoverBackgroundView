//
//  C360PopoverBackgroundView.h
//
//  Created by Simon Booth on 29/04/2013.
//  Copyright (c) 2013 CRedit360. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface C360PopoverBackgroundView : UIPopoverBackgroundView {
    CGFloat _arrowOffset;
    UIPopoverArrowDirection _arrowDirection;
}
    
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic, strong) UIColor *glowColor;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat highlightDepth;
    
+(CGFloat)arrowHeight;
+(CGFloat)arrowBase;
+(UIEdgeInsets)contentViewInsets;
    
@end
