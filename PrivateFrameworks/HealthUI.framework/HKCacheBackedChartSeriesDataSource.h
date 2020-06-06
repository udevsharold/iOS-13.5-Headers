/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKChartDataCacheObserver.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {

	SCD_Struct_HK9 _lastStartPath;
	SCD_Struct_HK9 _lastEndPath;
	HKChartCache* _chartCache;

}

@property (nonatomic,retain) HKChartCache * chartCache;              //@synthesize chartCache=_chartCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidateCache;
-(id)cachedBlockForPath:(SCD_Struct_HK9)arg1 context:(id)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(void)setChartCache:(HKChartCache *)arg1 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(SCD_Struct_HK9)arg1 endPath:(SCD_Struct_HK9)arg2 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(SCD_Struct_HK9)arg1 endPath:(SCD_Struct_HK9)arg2 ;
-(void)_resetCachedPaths;
-(void)chartCacheDidUpdate:(id)arg1 ;
-(HKChartCache *)chartCache;
@end

