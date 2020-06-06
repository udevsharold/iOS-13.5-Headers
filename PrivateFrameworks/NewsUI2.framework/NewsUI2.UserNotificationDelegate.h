/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@interface NewsUI2.UserNotificationDelegate : NSObject <UNUserNotificationCenterDelegate> {

	 notificationResponseHandlerManager;
	 notificationOpenSettingsHandler;
	 navigator;

}
-(id)init;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
@end

