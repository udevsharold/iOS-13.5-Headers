/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM316 fGravity;
	SCD_Struct_CM316 fUserAcceleration;
	SCD_Struct_CM316 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM316 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;
	float fHeadingAccuracy;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceMotion:(SCD_Struct_CM318)arg1 internal:(SCD_Struct_CM319)arg2 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM318)arg1 internal:(SCD_Struct_CM319)arg2 ;
@end

