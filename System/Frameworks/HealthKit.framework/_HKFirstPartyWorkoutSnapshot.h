/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject {

	double _elapsedTime;
	NSDate* _snapshotDate;
	long long _state;
	unsigned long long _activityType;

}

@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
+(id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1 ;
-(id)description;
-(long long)state;
-(unsigned long long)activityType;
-(id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 elapsedTime:(double)arg3 snapshotDate:(id)arg4 ;
-(double)durationForDate:(id)arg1 ;
@end
