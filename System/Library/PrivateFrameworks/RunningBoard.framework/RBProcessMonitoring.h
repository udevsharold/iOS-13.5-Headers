/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBProcessMonitoring <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)suppressUpdatesForIdentity:(id)arg1;
-(void)unsuppressUpdatesForIdentity:(id)arg1;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(id)statesMatchingPredicate:(id)arg1;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2;
-(id)statesMatchingConfiguration:(id)arg1;
-(void)didAddProcess:(id)arg1 withState:(id)arg2;
-(void)trackStateForProcessIdentity:(id)arg1;

@end

