//
//  adwardSDK.h
//  adwardSDK
//
//  Created by Or Frenkel on 11/4/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

/** Provides all available methods for defining Adward from use of your app.
 
 set of methods that allow developers to call Adward offer wall, aggregate user information
 regarding to the app needs.

 @note For more information about the data Adward collect or any other integration queations please contact <a href='mailto:orf@ad-ward.com'>Support</a>
 
 @author 2014 Adward.
 
 @version 1.0.0
*/
#ifndef _ADWardSDK_H
#define _ADWardSDK_H

#import <UIKit/UIKit.h>

@class ADWUserManager;
@class ADWardScreenManager;
@class ADWReachabilityManager;
@class ADWUtils;

static NSString *ADW_PREPER_SHOW_ADS = @"ADW_PREPER";
static NSString *ADW_SHOW_ADS = @"ADW_SHOW_ADS";
static NSString *ADW_CLOSE_ADS =@"ADW_CLOSE_ADS";
static NSString *ADW_GOT_POINTS_ADS =@"ADW_GOT_POINTS_ADS";

typedef enum{
    REALTIME = 0,
    BATCH
} ReportsPolicy;



@interface AdwardSDK:NSObject

/**---------------------------------------------------------------------------------------
 * @name Initializing
 *  ---------------------------------------------------------------------------------------
 */

/** initializing a Adward singleton class.
 
 
 @param apiKey Adward developer api key.
 @return void
 
 */

+ (void) startSession:(NSString*) apiKey;

/** initializing a Adward singleton class.
 
 
 @param apiKey Adward developer api key.
 @param options parameters to initiate Adward instance.
 
 @return void
 
 */
+ (void) startSession:(NSString*) apiKey withOptions:(id) options;

/**---------------------------------------------------------------------------------------
 * @name Cofiguration
 *  ---------------------------------------------------------------------------------------
 */

/** determines whether Adward will log events to the default logger.
 
 @return bool
 */

+ (BOOL) isDebugLogEnabled;

+ (void) setDebugLogEnabled:(BOOL) isEnable;

+ (void) setCrashReportEnabled:(BOOL) isCrashReportEnable;


/** determines whether Adward can appeare.
 
 @return bool
 */

+ (BOOL) canShowContentWindow;

+ (void) setReportPolicy:(ReportsPolicy) policy;

+ (void)handleOpenURL:(NSURL *)url
    sourceApplication:(NSString *)sourceApplication;

+ (NSString*) getAdwardUID;

+ (NSDictionary *) getUserPostProperties;

+ (void) hideContentWindowWithAnimation:(BOOL)animation andFinishBlock:(void (^)(void))block;

+ (void) showContentWindowWithAnimation:(BOOL) animation andFinishBlock:(void (^)(void))block;

+ (NSString*) getAPIKey;

@end

#endif
