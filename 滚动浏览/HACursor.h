//
//  HACursor.h
//  HAScrollNavBar
//
//  Created by haha on 15/7/6.
//  Copyright (c) 2015年 haha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HAScrollNavBar.h"
#import "UIView+Extension.h"
#import "HASortItemView.h"
#import "HASortButton.h"
#import "UIColor+RGBA.h"
#import "HAItemManager.h"
#import "HARootScrollView.h"

@interface HACursor : UIView

#warning 使用带缓存机制的scrollView
//@property (nonatomic, weak) UIScrollView *rootScrollView;
@property (nonatomic, strong) HARootScrollView *rootScrollView;

@property (nonatomic, strong) NSMutableArray *pageViews;
@property (nonatomic, strong) NSArray *titles;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, strong) UIColor *titleNormalColor;
@property (nonatomic, strong) UIColor *titleSelectedColor;
@property (nonatomic, strong) UIColor *navLineColor;

@property (nonatomic, assign) BOOL showSortbutton;
@property (nonatomic, assign) BOOL isGraduallyChangColor;
@property (nonatomic, assign) BOOL isGraduallyChangFont;
@property (nonatomic, assign) NSInteger minFontSize;
@property (nonatomic, assign) NSInteger maxFontSize;
@property (nonatomic, assign) NSInteger defFontSize;
@property (nonatomic, assign) CGFloat rootScrollViewHeight;

- (id)initWithTitles:(NSArray *)titles AndPageViews:(NSArray *)pageViews;

@end
