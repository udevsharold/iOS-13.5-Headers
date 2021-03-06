/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantitySample, NSNumber, NSMutableArray;

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject {

	HKQuantitySample* _series;
	NSNumber* _anchor;
	NSMutableArray* _quantities;

}

@property (nonatomic,readonly) HKQuantitySample * series;                //@synthesize series=_series - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * anchor;                   //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSMutableArray * quantities;              //@synthesize quantities=_quantities - In the implementation block
-(NSNumber *)anchor;
-(NSMutableArray *)quantities;
-(HKQuantitySample *)series;
-(id)initWithSeries:(id)arg1 anchor:(id)arg2 ;
-(void)addQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

