/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface WLTimeEstimateAccuracyTracker : NSObject {

	unsigned long long _thresholdBelowLastSample;
	NSArray* _thresholds;
	NSArray* _samples;

}

@property (nonatomic,retain) NSArray * thresholds;              //@synthesize thresholds=_thresholds - In the implementation block
@property (nonatomic,retain) NSArray * samples;                 //@synthesize samples=_samples - In the implementation block
-(id)init;
-(NSArray *)samples;
-(void)setSamples:(NSArray *)arg1 ;
-(NSArray *)thresholds;
-(void)setThresholds:(NSArray *)arg1 ;
-(unsigned long long)_thresholdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfThresholdGreaterThanOrEqualToEstimate:(unsigned long long)arg1 ;
-(void)didCalculateTimeEstimate:(unsigned long long)arg1 atDate:(id)arg2 associatedObject:(id)arg3 ;
-(void)estimatesDidResolveAtDate:(id)arg1 block:(/*^block*/id)arg2 ;
@end

