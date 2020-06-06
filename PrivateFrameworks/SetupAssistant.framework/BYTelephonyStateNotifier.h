/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYTelephonyStateNotifier : NSObject {

	int _simUnlockNotificationToken;

}

@property (assign,nonatomic) int simUnlockNotificationToken;              //@synthesize simUnlockNotificationToken=_simUnlockNotificationToken - In the implementation block
+(unsigned long long)retrieveSIMUnlockStateFromToken:(int)arg1 ;
-(void)dealloc;
-(void)_beginObservingWithNotificationQueue:(id)arg1 notificationBlock:(/*^block*/id)arg2 ;
-(void)_endObservingState;
-(int)simUnlockNotificationToken;
-(void)setSimUnlockNotificationToken:(int)arg1 ;
-(id)initWithNotificationQueue:(id)arg1 notificationBlock:(/*^block*/id)arg2 ;
-(id)initForNotifying;
-(unsigned long long)currentSIMUnlockState;
-(void)notifySIMUnlockStateChangedTo:(unsigned long long)arg1 ;
@end

