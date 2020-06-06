/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDMCAnalysisManagerObserver.h>
#import <libobjc.A.dylib/HKMCSettingsManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDMCAnalysisManager, HKMCSettingsManager, NSObject, HKMCAnalysis, HDRestorableAlarm, NSString;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {

	HDProfile* _profile;
	HDMCAnalysisManager* _analysisManager;
	HKMCSettingsManager* _settingsManager;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _observingAnalysisUpdates;
	HKMCAnalysis* _lastAnalysis;
	HDRestorableAlarm* _scheduler;

}

@property (nonatomic,readonly) HDRestorableAlarm * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)start;
-(HDRestorableAlarm *)scheduler;
-(void)settingsManagerDidUpdateNotificationSettings:(id)arg1 ;
-(void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(BOOL)_isAlgorithmsVersionSameOnPairedDevice;
-(void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2 ;
-(void)_queue_rescheduleNotificationsForAnalysis:(id)arg1 ;
-(void)_queue_removeAllScheduledNotifications;
-(id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 ;
-(id)scheduledNotificationsWithError:(id*)arg1 ;
@end

