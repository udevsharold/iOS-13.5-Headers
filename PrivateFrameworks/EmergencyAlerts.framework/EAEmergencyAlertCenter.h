/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmergencyAlerts.framework/EmergencyAlerts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}
-(id)init;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)currentCallCount;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(void)addAlertRequestForCellBroadcastMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

