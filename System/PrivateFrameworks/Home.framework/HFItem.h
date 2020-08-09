/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NAFuture, HFItemManager;

@interface HFItem : NSObject {

	BOOL __debug_isChildItem;
	NSDictionary* _latestResults;
	unsigned long long _loadingState;
	NAFuture* _cancellableInFlightUpdateFuture;
	HFItemManager* __debug_owningItemManager;

}

@property (assign,nonatomic,__weak) NAFuture * cancellableInFlightUpdateFuture;              //@synthesize cancellableInFlightUpdateFuture=_cancellableInFlightUpdateFuture - In the implementation block
@property (assign,nonatomic) unsigned long long loadingState;                                //@synthesize loadingState=_loadingState - In the implementation block
@property (assign,nonatomic,__weak) HFItemManager * _debug_owningItemManager;                //@synthesize _debug_owningItemManager=__debug_owningItemManager - In the implementation block
@property (assign,nonatomic) BOOL _debug_isChildItem;                                        //@synthesize _debug_isChildItem=__debug_isChildItem - In the implementation block
@property (nonatomic,retain) NSDictionary * latestResults;                                   //@synthesize latestResults=_latestResults - In the implementation block
-(id)description;
-(id)debugDescription;
-(void)setLoadingState:(unsigned long long)arg1 ;
-(unsigned long long)loadingState;
-(void)setLatestResults:(NSDictionary *)arg1 ;
-(NSDictionary *)latestResults;
-(id)updateWithOptions:(id)arg1 ;
-(void)copyLatestResultsFromItem:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NAFuture *)cancellableInFlightUpdateFuture;
-(void)setCancellableInFlightUpdateFuture:(NAFuture *)arg1 ;
-(id)_finalOutcomeForSubclassOutcome:(id)arg1 previousResults:(id)arg2 updateOptions:(id)arg3 ;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(BOOL)resultsContainRequiredProperties:(id)arg1 ;
-(HFItemManager *)_debug_owningItemManager;
-(void)set_debug_owningItemManager:(HFItemManager *)arg1 ;
-(BOOL)_debug_isChildItem;
-(void)set_debug_isChildItem:(BOOL)arg1 ;
@end
