/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKOSVersionRequirementRange;

@interface PKWebServiceRegionFeature : NSObject {

	BOOL _automaticRegister;
	float _enablementThreshold;
	NSString* _region;
	long long _featureType;
	long long _registrationType;
	PKOSVersionRequirementRange* _versionRange;

}

@property (nonatomic,copy,readonly) NSString * region;                                  //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) long long featureType;                                   //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) long long registrationType;                              //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) float enablementThreshold;                               //@synthesize enablementThreshold=_enablementThreshold - In the implementation block
@property (nonatomic,readonly) BOOL automaticRegister;                                  //@synthesize automaticRegister=_automaticRegister - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * versionRange;              //@synthesize versionRange=_versionRange - In the implementation block
+(id)regionFeatureWithType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3 ;
-(NSString *)region;
-(long long)featureType;
-(long long)registrationType;
-(PKOSVersionRequirementRange *)versionRange;
-(id)initWithFeatureType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3 ;
-(float)enablementThreshold;
-(BOOL)automaticRegister;
@end

