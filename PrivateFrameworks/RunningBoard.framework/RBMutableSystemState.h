/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBSystemState.h>

@interface RBMutableSystemState : RBSystemState
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTag:(id)arg1 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)addPreventIdleSleepIdentifier:(id)arg1 ;
-(void)setThrottleBestEffortNetworking:(BOOL)arg1 ;
-(void)unionState:(id)arg1 ;
-(void)removePreventIdleSleepIdentifier:(id)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)setPreventLaunch:(BOOL)arg1 ;
@end

