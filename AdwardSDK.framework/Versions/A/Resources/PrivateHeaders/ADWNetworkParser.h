//
//  ADWNetworkParser.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 13/5/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADWNetworkParser : NSObject

+ (NSDictionary* )parseQueryString:(NSString *)query;

+ (NSString *) toQueryString:(NSDictionary *)dict;

@end
