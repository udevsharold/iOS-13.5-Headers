/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSDateInterval, HKQuantityType;

@interface HDStatisticsQueryServer : HDQueryServer {

	NSDateInterval* _dateInterval;
	HKQuantityType* _quantityType;
	unsigned long long _statisticsOptions;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,readonly) unsigned long long statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeStrategy;                  //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)supportsAnchorBasedAuthorization;
-(id)quantityType;
-(unsigned long long)mergeStrategy;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)_queue_fetchStatisticsWithError:(id*)arg1 ;
-(unsigned long long)statisticsOptions;
@end

