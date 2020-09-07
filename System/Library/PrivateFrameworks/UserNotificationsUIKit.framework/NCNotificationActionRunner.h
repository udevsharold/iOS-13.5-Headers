/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationActionRunner <NSObject>
@property (assign,nonatomic) BOOL shouldForwardAction; 
@required
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1;

@end
