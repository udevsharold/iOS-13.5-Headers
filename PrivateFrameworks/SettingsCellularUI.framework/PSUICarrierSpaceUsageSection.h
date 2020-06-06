/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CTCarrierSpaceUsagePlanMetrics, CTCarrierSpaceUsageAccountMetrics, NSMutableArray;

@interface PSUICarrierSpaceUsageSection : NSObject {

	NSString* _sharedPlanIdentifier;
	CTCarrierSpaceUsagePlanMetrics* _primaryMetrics;
	CTCarrierSpaceUsageAccountMetrics* _accountMetrics;
	NSMutableArray* _otherMetrics;
	NSMutableArray* _barCategories;

}

@property (retain) NSString * sharedPlanIdentifier;                                 //@synthesize sharedPlanIdentifier=_sharedPlanIdentifier - In the implementation block
@property (retain) CTCarrierSpaceUsagePlanMetrics * primaryMetrics;                 //@synthesize primaryMetrics=_primaryMetrics - In the implementation block
@property (retain) CTCarrierSpaceUsageAccountMetrics * accountMetrics;              //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (retain) NSMutableArray * otherMetrics;                                   //@synthesize otherMetrics=_otherMetrics - In the implementation block
@property (retain) NSMutableArray * barCategories;                                  //@synthesize barCategories=_barCategories - In the implementation block
-(id)description;
-(CTCarrierSpaceUsageAccountMetrics *)accountMetrics;
-(void)setAccountMetrics:(CTCarrierSpaceUsageAccountMetrics *)arg1 ;
-(NSString *)sharedPlanIdentifier;
-(void)setSharedPlanIdentifier:(NSString *)arg1 ;
-(CTCarrierSpaceUsagePlanMetrics *)primaryMetrics;
-(NSMutableArray *)otherMetrics;
-(NSMutableArray *)barCategories;
-(BOOL)isSharedPlan;
-(void)setPrimaryMetrics:(CTCarrierSpaceUsagePlanMetrics *)arg1 ;
-(void)setOtherMetrics:(NSMutableArray *)arg1 ;
-(void)setBarCategories:(NSMutableArray *)arg1 ;
@end

