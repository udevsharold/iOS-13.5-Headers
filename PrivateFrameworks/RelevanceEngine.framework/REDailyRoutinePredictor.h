/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REObservableSingleton.h>
#import <libobjc.A.dylib/REPeriodOfDayPredictorDelegate.h>

@protocol OS_dispatch_queue;
@class REPeriodOfDayPredictor, REUpNextTimer, NSObject, NSDateInterval, NSLock, NSNumber, NSString;

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate> {

	REPeriodOfDayPredictor* _periodOfDayPredictor;
	REUpNextTimer* _endMorningRoutineTimer;
	REUpNextTimer* _beginEveningRoutineTimer;
	REUpNextTimer* _endEveningRoutineTimer;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentRoutine;
	NSDateInterval* _currentRoutineInterval;
	NSLock* _routineLock;
	NSNumber* _overrideRoutineType;

}

@property (nonatomic,readonly) unsigned long long currentRoutineType; 
@property (nonatomic,readonly) NSDateInterval * currentRoutineInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_init;
-(void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1 ;
-(void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1 ;
-(id)_eveningRoutineIntervalForEvening:(id)arg1 ;
-(id)_morningRoutineIntervalForMorning:(id)arg1 ;
-(void)_updateCurrentRoutine;
-(void)_queue_setupMorningBeginTimerIfNeeded;
-(void)_queue_setupEveningBeginTimerIfNeeded;
-(void)_queue_didEndMorningRoutine;
-(void)_queue_didEndEveningRoutine;
-(void)_queue_didBeginMorningRoutine;
-(void)_queue_didBeginEveningRoutine;
-(unsigned long long)currentRoutineType;
-(NSDateInterval *)currentRoutineInterval;
-(id)routineIntervalForNextRoutine:(unsigned long long)arg1 ;
-(id)routineIntervalForPreviousRoutine:(unsigned long long)arg1 ;
-(void)_setOverrideRoutineType:(unsigned long long)arg1 ;
@end

