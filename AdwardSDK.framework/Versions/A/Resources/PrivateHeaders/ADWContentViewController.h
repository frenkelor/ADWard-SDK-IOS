//
//  ADWContentViewController.h
//  adwardSDK
//
//  Created by Or Frenkel on 12/4/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ActionContentDelegate;

@interface ADWContentViewController : UIViewController<UIAlertViewDelegate>

@property (nonatomic, weak) id<ActionContentDelegate> delegate;

- (id) initWithDelegate:(id<ActionContentDelegate>)delegate;

- (void) loadRequest;

- (void) hideLoading:(id) data;

- (void) startLoading:(id) data;

@end

@protocol ActionContentDelegate <NSObject>

- (void) didEndPostWithActionsSound:(BOOL) playSound withSoundName:(NSString*) soundName vibrate:(BOOL) playVibrate successAlert:(BOOL) showAlert addPoints:(NSNumber *) points;

- (void) didEndPostWithError:(NSError *) error;

- (void) didCloseWithError:(NSError *) error;

@end