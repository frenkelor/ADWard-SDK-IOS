//
//  Manger.h
//  adwardSDK
//
//  Created by Or Frenkel on 15/4/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

@protocol ActionDelegate;

@interface ActionsManger : NSObject

@property (nonatomic, weak) id<ActionDelegate> delegate;

- (instancetype) initWithDelegate:(id<ActionDelegate>) delegate;
- (BOOL) handleOpenURL:(NSURL *) url;
- (void) close:(id) data;
- (void) playSound:(NSString *) soundFileName withVibrate:(BOOL) playVibrate;

@end


@protocol ActionDelegate <NSObject>

- (void) didPerformAction:(NSString *) action withData:(NSDictionary *) dict;

- (NSDictionary *) getRequestDataWithToken:(NSString *) token;

@optional

- (void) hideLoading:(id) data;

- (void) startLoading:(id) data;

@end

