/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKUnitPreferenceController, HKQuantityType;

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _mappingFunction;
	unsigned long long _statisticsOptions;
	HKUnitPreferenceController* _unitController;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,readonly) HKQuantityType * quantityType; 
@property (nonatomic,readonly) unsigned long long statisticsOptions;                     //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;              //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                                     //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(HKQuantityType *)quantityType;
-(unsigned long long)statisticsOptions;
-(HKUnitPreferenceController *)unitController;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 displayType:(id)arg3 healthStore:(id)arg4 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
-(/*^block*/id)_createMappingFunction;
-(id)_dailyAverageQueriesWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_defaultQueriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_averageByInterval:(id)arg1 startDate:(id)arg2 statistics:(id)arg3 ;
@end

