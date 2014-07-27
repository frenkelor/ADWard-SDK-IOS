//
//  ADWPopupView.h
//  adwardSDK
//
//  Created by Or Frenkel on 12/4/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADWPopupView : UIView
@property (nonatomic, strong) UIView *handleView;
+ (instancetype)popupViewWithViewController:(UIViewController *) controller;
- (void) showWithComplisionBlock:(void (^)(void)) block;
- (void) hideAnimated:(BOOL) animate;
- (void) hideAnimated:(BOOL) animate completion:(void (^)(BOOL finished)) completion;
- (void) willRotateToOrientation:(UIInterfaceOrientation) toInterfaceOrientation withDuration:(NSTimeInterval)duration;
@end
