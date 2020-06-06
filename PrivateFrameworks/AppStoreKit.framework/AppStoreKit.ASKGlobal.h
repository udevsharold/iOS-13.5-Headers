/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_9D347077873A4B21FB1DD2E2A260A4E416ASKGlobalExports_.h>

@class ASKClient, _TtC11AppStoreKit20JSStoreMetricsObject, NSDictionary, _TtC11AppStoreKit12JSUserObject, _TtC11AppStoreKit21ClientOrderingWrapper, _TtC11AppStoreKit28JSPersonalizationStoreObject, _TtC11AppStoreKit14JSArcadeObject;

@interface AppStoreKit.ASKGlobal : NSObject <_TtP11AppStoreKitP33_9D347077873A4B21FB1DD2E2A260A4E416ASKGlobalExports_> {

	 client;
	 loc;
	 storeMetrics;
	 user;
	 props;
	 clientOrdering;
	 personalizationStore;
	 arcade;

}

@property (readonly,nonatomic) ASKClient * client; 
@property (readonly,nonatomic) id<_TtP11AppStoreKit20LocalizationProtocol_> loc; 
@property (readonly,nonatomic) _TtC11AppStoreKit20JSStoreMetricsObject * storeMetrics; 
@property (readonly,nonatomic) _TtC11AppStoreKit12JSUserObject * user; 
@property (readonly,nonatomic) NSDictionary * props; 
@property (readonly,nonatomic) _TtC11AppStoreKit21ClientOrderingWrapper * clientOrdering; 
@property (readonly,nonatomic) _TtC11AppStoreKit28JSPersonalizationStoreObject * personalizationStore; 
@property (readonly,nonatomic) _TtC11AppStoreKit14JSArcadeObject * arcade; 
-(id)init;
-(_TtC11AppStoreKit12JSUserObject *)user;
-(id<_TtP11AppStoreKit20LocalizationProtocol_>)loc;
-(ASKClient *)client;
-(NSDictionary *)props;
-(_TtC11AppStoreKit20JSStoreMetricsObject *)storeMetrics;
-(_TtC11AppStoreKit21ClientOrderingWrapper *)clientOrdering;
-(_TtC11AppStoreKit28JSPersonalizationStoreObject *)personalizationStore;
-(_TtC11AppStoreKit14JSArcadeObject *)arcade;
@end

