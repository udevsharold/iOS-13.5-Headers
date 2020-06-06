/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAlarmObserver.h>

@protocol OS_dispatch_queue, MTAlarmStorage;
@class NSObject, NSMutableDictionary, NSString;

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MTAlarmStorage> _alarmStorage;
	NSMutableDictionary* _alarmStatesByAlarmID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) id<MTAlarmStorage> alarmStorage;                         //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * alarmStatesByAlarmID;              //@synthesize alarmStatesByAlarmID=_alarmStatesByAlarmID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(id<MTAlarmStorage>)alarmStorage;
-(id)initWithAlarmStorage:(id)arg1 ;
-(NSMutableDictionary *)alarmStatesByAlarmID;
-(void)_queue_writeCurrentStateToContextStore;
-(void)updateStateForAlarms:(id)arg1 ;
-(void)_queue_clearPreviouslyDismissedAlarmStates;
-(void)handleSystemReady;
@end

