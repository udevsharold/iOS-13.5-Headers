/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TPSDuetDataProvider, NSString, NSSortDescriptor;

@interface TPSDiscoverabilityUsageController : NSObject {

	TPSDuetDataProvider* _duetProvider;
	NSString* _currentOSBuildVersion;
	NSString* _currentOSMajorVersion;
	NSSortDescriptor* _eventSortDescriptor;

}
+(id)sharedInstance;
-(id)init;
-(void)_commonInit;
-(id)_initWithDirectory:(id)arg1 ;
-(id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(BOOL*)arg4 error:(id*)arg5 ;
-(id)_lastOfferedDateFilterPredicate;
-(id)_discoverabilityStream;
-(id)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 error:(id*)arg3 ;
-(id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 error:(id*)arg5 ;
-(void)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_metaDataForUsageEvent:(id)arg1 ;
-(id)_eventsPredicateForContentID:(id)arg1 sinceDate:(id)arg2 ;
-(id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 fromEvents:(id)arg4 ;
-(id)_majorVersionFilterPredicate;
-(id)firstEventMatchingUsageEventState:(long long)arg1 fromEvents:(id)arg2 ;
-(id)_majorVersionForBuildVersion:(id)arg1 ;
-(id)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(BOOL*)arg4 error:(id*)arg5 ;
-(void)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addContentUsageEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

