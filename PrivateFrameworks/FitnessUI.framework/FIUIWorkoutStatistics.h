/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKQuantity, NSDate;

@interface FIUIWorkoutStatistics : NSObject {

	NSArray* _workouts;
	long long _numberOfWalkRunWorkouts;
	long long _numberOfCyclingWorkouts;
	BOOL _isAllOutdoorCycling;
	BOOL _isAllRunning;
	double _totalWorkoutDuration;
	double _averageWorkoutDuration;
	HKQuantity* _totalActiveEnergyBurn;
	HKQuantity* _averageActiveEnergyBurn;
	HKQuantity* _totalWalkRunDistance;
	HKQuantity* _averageWalkRunDistance;
	double _totalWalkRunDuration;
	HKQuantity* _totalCyclingDistance;
	HKQuantity* _averageCyclingDistance;
	double _totalCyclingDuration;
	NSDate* _startOfMonth;

}

@property (nonatomic,readonly) double totalWorkoutDuration;                       //@synthesize totalWorkoutDuration=_totalWorkoutDuration - In the implementation block
@property (nonatomic,readonly) double averageWorkoutDuration;                     //@synthesize averageWorkoutDuration=_averageWorkoutDuration - In the implementation block
@property (nonatomic,readonly) HKQuantity * totalActiveEnergyBurn;                //@synthesize totalActiveEnergyBurn=_totalActiveEnergyBurn - In the implementation block
@property (nonatomic,readonly) HKQuantity * averageActiveEnergyBurn;              //@synthesize averageActiveEnergyBurn=_averageActiveEnergyBurn - In the implementation block
@property (nonatomic,readonly) HKQuantity * totalWalkRunDistance;                 //@synthesize totalWalkRunDistance=_totalWalkRunDistance - In the implementation block
@property (nonatomic,readonly) HKQuantity * averageWalkRunDistance;               //@synthesize averageWalkRunDistance=_averageWalkRunDistance - In the implementation block
@property (nonatomic,readonly) double totalWalkRunDuration;                       //@synthesize totalWalkRunDuration=_totalWalkRunDuration - In the implementation block
@property (nonatomic,readonly) HKQuantity * totalCyclingDistance;                 //@synthesize totalCyclingDistance=_totalCyclingDistance - In the implementation block
@property (nonatomic,readonly) HKQuantity * averageCyclingDistance;               //@synthesize averageCyclingDistance=_averageCyclingDistance - In the implementation block
@property (nonatomic,readonly) double totalCyclingDuration;                       //@synthesize totalCyclingDuration=_totalCyclingDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long workoutCount; 
@property (nonatomic,readonly) NSDate * startOfMonth;                             //@synthesize startOfMonth=_startOfMonth - In the implementation block
+(id)_monthFormatter;
-(id)init;
-(void)_calculateStats;
-(void)_calculateAverages;
-(id)initWithWorkouts:(id)arg1 ;
-(unsigned long long)workoutCount;
-(double)totalWorkoutDuration;
-(double)averageWorkoutDuration;
-(HKQuantity *)totalActiveEnergyBurn;
-(HKQuantity *)averageActiveEnergyBurn;
-(HKQuantity *)totalWalkRunDistance;
-(HKQuantity *)averageWalkRunDistance;
-(double)totalWalkRunDuration;
-(HKQuantity *)totalCyclingDistance;
-(HKQuantity *)averageCyclingDistance;
-(double)totalCyclingDuration;
-(NSDate *)startOfMonth;
-(id)formattedTotalWorkoutDurationWithFormattingManager:(id)arg1 ;
-(id)formattedAverageWorkoutDurationWithFormattingManager:(id)arg1 ;
-(id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)arg1 ;
-(id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)arg1 ;
-(id)formattedTotalWalkRunDistanceWithFormattingManager:(id)arg1 ;
-(id)formattedAverageWalkRunDistanceWithFormattingManager:(id)arg1 ;
-(id)formattedTotalCyclingDistanceWithFormattingManager:(id)arg1 ;
-(id)formattedAverageCyclingDistanceWithFormattingManager:(id)arg1 ;
-(id)_formattedDuration:(double)arg1 formattingManager:(id)arg2 ;
-(id)_formattedEnergyBurn:(id)arg1 formattingManager:(id)arg2 ;
-(id)_formattedWalkRunDistance:(id)arg1 formattingManager:(id)arg2 ;
-(id)_formattedCyclingDistance:(id)arg1 formattingManager:(id)arg2 ;
-(id)simpleWorkoutCount;
-(id)formattedMonth;
-(id)formattedWorkoutDurationWithFormattingManager:(id)arg1 ;
-(id)formattedActiveEnergyBurnWithFormattingManager:(id)arg1 ;
-(id)formattedWalkRunDistanceWithFormattingManager:(id)arg1 ;
-(id)formattedCyclingDistanceWithFormattingManager:(id)arg1 ;
-(id)formattedPaceWithFormattingManager:(id)arg1 ;
-(id)formattedSpeedWithFormattingManager:(id)arg1 ;
-(id)formattedWorkoutCount;
@end

