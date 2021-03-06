/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKHeartRateVariabilityUtilities : NSObject
+(id)_hrvType;
+(void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_sequenceType;
+(void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg1 ;
@end

