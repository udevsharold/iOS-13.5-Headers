/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface HDQuantityAggregationResult : NSObject {

	NSArray* _aggregatedSamples;
	NSArray* _consumedSensorData;
	NSMutableArray* _remainingSensorData;

}

@property (nonatomic,copy,readonly) NSArray * aggregatedSamples;                       //@synthesize aggregatedSamples=_aggregatedSamples - In the implementation block
@property (nonatomic,copy,readonly) NSArray * consumedSensorData;                      //@synthesize consumedSensorData=_consumedSensorData - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * remainingSensorData;              //@synthesize remainingSensorData=_remainingSensorData - In the implementation block
-(NSArray *)consumedSensorData;
-(id)initWithAggregatedSamples:(id)arg1 consumedData:(id)arg2 remainingData:(id)arg3 ;
-(NSArray *)aggregatedSamples;
-(NSMutableArray *)remainingSensorData;
@end

