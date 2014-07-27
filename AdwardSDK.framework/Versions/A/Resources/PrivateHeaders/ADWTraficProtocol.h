//
//  ADWTraficProtocol.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 23/5/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADWTraficProtocol : NSURLProtocol<NSURLConnectionDelegate>
+ (BOOL)canInitWithRequest:(NSURLRequest *)request;
@end
