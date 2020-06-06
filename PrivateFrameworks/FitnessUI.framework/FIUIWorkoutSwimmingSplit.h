/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIUIWorkoutSwimmingSplit : NSObject {

	double _duration;
	long long _splitDistance;
	double _distanceInUserUnit;
	long long _strokeCount;
	long long _strokeCountScaledToFillSplit;
	double _durationScaledToFillSplit;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long splitDistance;                             //@synthesize splitDistance=_splitDistance - In the implementation block
@property (assign,nonatomic) double distanceInUserUnit;                           //@synthesize distanceInUserUnit=_distanceInUserUnit - In the implementation block
@property (assign,nonatomic) long long strokeCount;                               //@synthesize strokeCount=_strokeCount - In the implementation block
@property (assign,nonatomic) long long strokeCountScaledToFillSplit;              //@synthesize strokeCountScaledToFillSplit=_strokeCountScaledToFillSplit - In the implementation block
@property (assign,nonatomic) double durationScaledToFillSplit;                    //@synthesize durationScaledToFillSplit=_durationScaledToFillSplit - In the implementation block
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)strokeCount;
-(id)formattedPaceWithFormattingManager:(id)arg1 ;
-(long long)splitDistance;
-(double)distanceInUserUnit;
-(double)_fractionToFillTotalSplitDistance;
-(long long)strokeCountScaledToFillSplit;
-(double)durationScaledToFillSplit;
-(id)formattedStrokeCount;
-(void)setSplitDistance:(long long)arg1 ;
-(void)setDistanceInUserUnit:(double)arg1 ;
-(void)setStrokeCount:(long long)arg1 ;
-(void)setStrokeCountScaledToFillSplit:(long long)arg1 ;
-(void)setDurationScaledToFillSplit:(double)arg1 ;
@end

