/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXAdvertisingSettings.h>

@protocol SXAutoPlacementLayout;
@class NSString;

@interface SXDebugAdvertisementSettings : NSObject <SXAdvertisingSettings> {

	unsigned long long _frequency;
	unsigned long long _bannerType;
	id<SXAutoPlacementLayout> _layout;
	SXConvertibleValue _distanceFromMedia;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) unsigned long long bannerType;                     //@synthesize bannerType=_bannerType - In the implementation block
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia;              //@synthesize distanceFromMedia=_distanceFromMedia - In the implementation block
-(id<SXAutoPlacementLayout>)layout;
-(unsigned long long)frequency;
-(unsigned long long)bannerType;
-(SXConvertibleValue)distanceFromMedia;
-(id)initWithFrequency:(unsigned long long)arg1 bannerType:(id)arg2 layout:(id)arg3 distanceFromMedia:(SXConvertibleValue)arg4 ;
@end

