/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTStateMachineState.h>
#import <libobjc.A.dylib/MTBedtimeDNDStateMachineEventHandler.h>

@class NSString;

@interface MTBedtimeDNDStateMachineState : MTStateMachineState <MTBedtimeDNDStateMachineEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(BOOL)arg1 ;
-(void)userWokeUp;
-(void)updateModeKeepOffUntilDateIfNecessary;
-(void)bedtimeDNDEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3 ;
-(id)determineNextState:(BOOL)arg1 ;
-(id)nextBedtimeDNDStartDateAfterDate:(id)arg1 ;
-(id)nextBedtimeDNDEndDate;
-(id)nextBedtimeDNDEndDateAfterDate:(id)arg1 ;
-(id)nextBedtimeDNDStartDate;
@end

