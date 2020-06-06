/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ProviderConfiguration : NSObject {

	NSDictionary* _configuration;
	BOOL _providerOff;
	BOOL _socialEngineeringThreatTypeOff;
	BOOL _malwareThreatTypeOff;
	BOOL _unwantedSoftwareThreatTypeOff;

}

@property (assign,nonatomic) BOOL providerOff;                                   //@synthesize providerOff=_providerOff - In the implementation block
@property (nonatomic,readonly) BOOL socialEngineeringThreatTypeOff;              //@synthesize socialEngineeringThreatTypeOff=_socialEngineeringThreatTypeOff - In the implementation block
@property (nonatomic,readonly) BOOL malwareThreatTypeOff;                        //@synthesize malwareThreatTypeOff=_malwareThreatTypeOff - In the implementation block
@property (nonatomic,readonly) BOOL unwantedSoftwareThreatTypeOff;               //@synthesize unwantedSoftwareThreatTypeOff=_unwantedSoftwareThreatTypeOff - In the implementation block
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(BOOL)providerOff;
-(void)_parseConfiguration:(id)arg1 ;
-(void)_configureToUseDefaultValues;
-(id)_currentRegionCode;
-(void)_configureToBeOff;
-(void)setProviderOff:(BOOL)arg1 ;
-(BOOL)socialEngineeringThreatTypeOff;
-(BOOL)malwareThreatTypeOff;
-(BOOL)unwantedSoftwareThreatTypeOff;
@end
