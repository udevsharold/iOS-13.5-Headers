/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsSubscription.PaywallInteractor : NSObject <FCBundleSubscriptionChangeObserver> {

	 delegate;
	 coordinator;
	 paywallModel;
	 purchaseSessionID;
	 dataManager;
	 webAccessAuthenticatorFactory;
	 webAccessAuthenticator;
	 purchaseConversionLocation;
	 paywallType;

}
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)init;
@end

