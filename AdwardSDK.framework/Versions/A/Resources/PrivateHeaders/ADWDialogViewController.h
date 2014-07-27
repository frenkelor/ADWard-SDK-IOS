//
//  ADWDialogViewController.h
//  adwardStaticSDK
//
//  Created by Or Frenkel on 21/5/14.
//  Copyright (c) 2014 Or Frenkel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADWDialogBackgroundView.h"
#import "ADWPostResults.h"
@interface ADWDialogViewController : UIViewController<UIWebViewDelegate>
@property (strong, nonatomic) void (^storedBlock)(ADWPostResults *results, NSError *postError);
- (id) initWithURL:(NSString *) loadURL params:(NSDictionary *) params endCallBack:(void(^)(ADWPostResults *results, NSError *postError)) callBack;
- (void) showDialog;
@end
