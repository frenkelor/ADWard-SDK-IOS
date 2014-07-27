//
//  MD5.h
//  adwardSDK
//
//  Created by Or Frenkel on 11/4/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MD5 : NSObject
+ (NSString *) toMd5:(NSString *) input;
+ (NSString *) toSingleUUID:(NSString*) vendorUUID generatedID:(NSString*) genID;
@end
