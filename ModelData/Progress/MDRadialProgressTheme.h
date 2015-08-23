//
//  MDRadialProgressTheme.h
//  通泰贷
//
//  Created by ATBJB10 on 15/1/15.
//  Copyright (c) 2015年 xibenye. All rights reserved.
//

#import <UIKit/UIKit.h>

static const NSString *STANDARD_THEME = @"standard";

@interface MDRadialProgressTheme : UIView

+ (id)themeWithName:(const NSString *)themeName;
+ (id)standardTheme;

// Color of the completed steps.
@property (strong, nonatomic) UIColor *completedColor;

// Color of the incompleted steps.
@property (strong, nonatomic) UIColor *incompletedColor;

// Color of the inner center
@property (strong, nonatomic) UIColor *centerColor;

// Thickness of the progress view.
@property (assign, nonatomic) CGFloat thickness;

// Color used to draw the division between each slices.
// Normally set to the background color so that it makes the slices
// look separated.
@property (strong, nonatomic) UIColor *sliceDividerColor;

// Whether the slice division is hidden or not.
@property (assign, nonatomic) BOOL sliceDividerHidden;

// Draw the incomplete arc even if there is no progress, defaults to NO to be backward compatible.
// Since 1.1.0
@property (assign, nonatomic) BOOL drawIncompleteArcIfNoProgress;

// Regulates how far apart the slice are when sliceDividerHidden is set to YES.
@property (assign, nonatomic) NSUInteger sliceDividerThickness;


// Label properties

// Color of the label text.
@property (strong, nonatomic) UIColor *labelColor;

// Shall we drop a shadow ?
@property (assign, nonatomic) BOOL dropLabelShadow;

// Shadow color of the label text.
@property (strong, nonatomic) UIColor *labelShadowColor;

// Shadow offset
@property (assign, nonatomic) CGSize labelShadowOffset;

// Font to use in the label.
@property (strong, nonatomic) UIFont *font;

@end
