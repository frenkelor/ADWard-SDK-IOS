//
//  NSData+ADWBase64.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 21/7/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (ADWBase64)
+ (NSData *)adw_dataFromBase64String:(NSString *)aString;
- (NSString *)adw_base64EncodedString;
@end
