/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationAlertDestination <NCNotificationDestination>
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate; 
@optional
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1;

@required
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

