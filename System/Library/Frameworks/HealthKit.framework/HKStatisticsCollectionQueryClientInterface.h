/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKStatisticsCollectionQueryClientInterface <HKQueryClientInterface>
@required
-(void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(BOOL)arg2 isFinal:(BOOL)arg3 anchor:(id)arg4 query:(id)arg5;
-(void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;

@end
