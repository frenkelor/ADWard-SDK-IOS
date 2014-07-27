//
//  ADWPostResults.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 23/5/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADWPostResults : NSObject
@property (nonatomic, strong) NSString *postURLResults;
@property (nonatomic, strong) NSError *error;
@property (nonatomic, strong) NSString* userID;
@property (nonatomic) BOOL didSuccessPost;
@property (nonatomic) BOOL isPostedOnPrivateGroup;

@end