/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, HDSQLitePredicate, _HDWorkoutCondenserAnalyticsAccumulator;

@interface _HDWorkoutCondensationConfiguration : NSObject {

	HDProfile* _profile;
	HDSQLitePredicate* _predicate;
	double _minimumWorkoutDuration;
	long long _minimumSeriesSize;
	long long _maximumSeriesSize;
	long long _deletedSampleThreshold;
	_HDWorkoutCondenserAnalyticsAccumulator* _analyticsAccumulator;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDSQLitePredicate * predicate;                                               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) double minimumWorkoutDuration;                                               //@synthesize minimumWorkoutDuration=_minimumWorkoutDuration - In the implementation block
@property (nonatomic,readonly) long long minimumSeriesSize;                                                 //@synthesize minimumSeriesSize=_minimumSeriesSize - In the implementation block
@property (nonatomic,readonly) long long maximumSeriesSize;                                                 //@synthesize maximumSeriesSize=_maximumSeriesSize - In the implementation block
@property (nonatomic,readonly) long long deletedSampleThreshold;                                            //@synthesize deletedSampleThreshold=_deletedSampleThreshold - In the implementation block
@property (nonatomic,readonly) _HDWorkoutCondenserAnalyticsAccumulator * analyticsAccumulator;              //@synthesize analyticsAccumulator=_analyticsAccumulator - In the implementation block
+(id)configurationWithProfile:(id)arg1 minimumSeriesSize:(long long)arg2 maximumSeriesSize:(long long)arg3 deletedSampleThreshold:(long long)arg4 analyticsAccumulator:(id)arg5 error:(id*)arg6 ;
-(HDSQLitePredicate *)predicate;
-(HDProfile *)profile;
-(_HDWorkoutCondenserAnalyticsAccumulator *)analyticsAccumulator;
-(long long)deletedSampleThreshold;
-(double)minimumWorkoutDuration;
-(long long)minimumSeriesSize;
-(long long)maximumSeriesSize;
-(id)initWithProfile:(id)arg1 predicate:(id)arg2 minimumWorkoutDuration:(double)arg3 minimumSeriesSize:(long long)arg4 maximumSeriesSize:(long long)arg5 deletedSampleThreshold:(long long)arg6 analyticsAccumulator:(id)arg7 ;
@end

