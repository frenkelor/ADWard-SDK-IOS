ADWard-SDK-IOS
==============
Adward ios sdk is a nomitization tool for ios game.
##version 1.0

Installetion
---------------------
Import adward sdk to your appDelegate.m file 

```#import <AdwardSDK/AdwardSDK.h>```

To initialize Adward SDK please add this code to your __application:didFinishLaunchingWithOptions:__ function

```[AdwardSDK startSession:@"YOUR_APP_API_KEY"];```
Usege
---------------------
To get Adward resulst for adward register to :
```
[[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(receiveCoinsNotification:)
                                                 name:ADW_GOT_POINTS_ADS
                                               object:nil];
                                               
-(void) receiveCoinsNotification:(NSNotification*) notification{
    NSDictionary *dict =notification.object;
   NSInteger points = [[dict objectForKey:@"points"] integerValue];
    NSLog(@"%d",points);
}

```
each time a player shares content Adward SDK will call this observable function with the amount of points that the user deserved.

To show Adward window just call:
```
[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(receiveCoinsNotification:) name:ADW_GOT_POINTS_ADS object:nil];
```
Or if you prefer to work with callbacks call:
```
[AdwardSDK showContentWindowWithAnimation:YES andFinishBlock:nil];
```
To hide Adward window you can call:
```
[AdwardSDK hideContentWindowWithAnimation:YES andFinishBlock:nil];
```

