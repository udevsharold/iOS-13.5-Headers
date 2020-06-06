/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface StocksAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver> {

	 watchlistService;
	 tracker;
	 sessionManager;
	 cloudContext;
	 userContext;
	 client;
	 appConfigurationManager;

}
-(void)pushOrientationDataOnChange;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

