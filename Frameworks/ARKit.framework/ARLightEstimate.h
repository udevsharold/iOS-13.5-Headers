/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface ARLightEstimate : NSObject <NSSecureCoding> {

	double _ambientIntensity;
	double _ambientColorTemperature;

}

@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
@property (nonatomic,readonly) double ambientIntensity;                                   //@synthesize ambientIntensity=_ambientIntensity - In the implementation block
@property (nonatomic,readonly) double ambientColorTemperature;                            //@synthesize ambientColorTemperature=_ambientColorTemperature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)sphericalHarmonicsCoefficients;
-(double)ambientIntensity;
-(double)ambientColorTemperature;
-(id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2 ;
@end

