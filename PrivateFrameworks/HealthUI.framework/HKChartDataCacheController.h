/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@class NSArray, NSMutableDictionary, NSMutableArray, HKActivitySummaryDataProvider, HKSampleTypeUpdateController, HKHealthStore, HKUnitPreferenceController, NSString;

@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver> {

	NSArray* _chartCachesByTimeScopeAndDisplayTypeIdentifier;
	NSMutableDictionary* _chartCachesByDisplayTypeIdentifier;
	NSMutableArray* _chartCachesByCustomDisplayType;
	NSMutableDictionary* _currentValueDataProvidersByDisplayType;
	NSMutableDictionary* _alternateCurrentValueDataProvidersByDisplayType;
	NSMutableDictionary* _secondaryValueDataProviders;
	HKActivitySummaryDataProvider* _activitySummaryDataProvider;
	HKSampleTypeUpdateController* _updateController;
	HKHealthStore* _healthStore;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,retain) HKSampleTypeUpdateController * updateController;              //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(void)addCustomChartCache:(id)arg1 forDisplayType:(id)arg2 ;
-(HKSampleTypeUpdateController *)updateController;
-(void)setUpdateController:(HKSampleTypeUpdateController *)arg1 ;
-(id)interactiveChartsCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(id)initWithHealthStore:(id)arg1 unitController:(id)arg2 updateController:(id)arg3 ;
-(id)_timeScopeBasedChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(id)_chartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 chartCachesByDisplayTypeIdentifier:(id)arg3 ;
-(id)_generateChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 ;
-(void)_subscribeForUpdatesForDisplayType:(id)arg1 ;
-(id)_chartCacheIdentifiersFromSamples:(id)arg1 ;
-(id)allInteractiveChartsCaches;
-(id)_chartCacheIdentifiersFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_createCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)currentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)alternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4 ;
-(id)activitySummaryDataProviderWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 ;
@end

