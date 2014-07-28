ADWard-SDK-IOS
==============
Adward ios sdk (v 1.0b) is a nomitization tool for ios game.

Installetion
---------------------
Import Adward SDK to your game :

1. download our SDK uising the direct github link or pull from git repository.
2. open xCode and click on your root project item.
3. select your working target.
4. click 'general' -> 'Linked Frameworks and Libraries' and click on the + button.
5. click on  'Add other' -> brows for AdwardSDK.framework on your local machine.
6. import AdwardSDK to your appDelegate.m file.
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

