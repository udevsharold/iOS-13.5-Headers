/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTStateMachineState.h>
#import <libobjc.A.dylib/MTSleepCoordinatorStateMachineEventHandler.h>

@class NSString;

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(void)updateStateForSleepAlarm:(id)arg1 ;
-(id)determineNextStateForSleepAlarm:(id)arg1 ;
-(void)userWentToBed;
-(void)userWokeUp;
-(void)userBedTimeReached:(id)arg1 ;
-(void)userWakeTimeReached:(id)arg1 ;
-(void)userWakeUpAlarmFired;
-(void)wakeUpAlarmTimedOut;
@end

