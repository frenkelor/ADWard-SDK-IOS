//
//  ShareAlertBlocker.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 31/5/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADWSharetBlocker : UIView
@property (nonatomic, strong) UILabel *titleLabel;
- (instancetype)initWithTitle:(NSString *)title onParentView:(UIView*) parentView;
- (void) show:(BOOL) animation onView:(UIView*) parentView;
- (void) hide:(BOOL) animation onView:(UIView*) parentView;
- (void) changeTitle:(NSString *) title;
@end
