//
//  URLNotificationManager.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 24/5/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface URLNotificationManager : NSObject
@property (nonatomic, strong) NSMutableArray *comperURLDict;

+ (instancetype) sharedManager;
+ (void) clearInstance;

- (void) handleURLRequest:(NSURLRequest *) request;
- (void) registerURLToNotifitation:(id) urlObj;
- (void) removeURLFromNotification:(id) urlObj;
@end
