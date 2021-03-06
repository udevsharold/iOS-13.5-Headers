/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTBedtimeSessionTracker.h>

@interface MTTimeInBedSessionTracker : MTBedtimeSessionTracker
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
+(BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)arg1 ;
-(void)startSession;
-(void)sleepCoordinator:(id)arg1 bedtimeDNDManuallyExited:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(Class)sessionClass;
-(id)processedSessionForSession:(id)arg1 ;
-(id)_createBedtimeSessionWithUserWakeTime:(id)arg1 endReason:(unsigned long long)arg2 ;
@end

