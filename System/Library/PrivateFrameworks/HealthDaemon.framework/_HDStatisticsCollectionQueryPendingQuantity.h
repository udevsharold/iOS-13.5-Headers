/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity, NSDateInterval;

@interface _HDStatisticsCollectionQueryPendingQuantity : NSObject {

	HKQuantity* _quantity;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,copy,readonly) HKQuantity * quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
-(NSDateInterval *)dateInterval;
-(HKQuantity *)quantity;
-(id)initWithQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

