/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {

	PCPersistentTimer* _lifetimeTimer;

}

@property (assign,nonatomic,__weak) id<DNDSScheduleLifetimeMonitorDataSource> dataSource; 
+(Class)lifetimeClass;
-(void)_timerFired:(id)arg1 ;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
-(id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 scheduleSettings:(id)arg4 calendar:(id)arg5 ignoreMatchScheduleStartDate:(BOOL)arg6 ;
-(id)activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 ;
@end

