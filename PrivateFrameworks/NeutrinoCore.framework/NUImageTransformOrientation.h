/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformOrientation : NUImageTransform {

	SCD_Struct_NU7 _inputImageSize;
	SCD_Struct_NU7 _inputImageOrigin;
	long long _orientation;

}

@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(long long)orientation;
-(id)inverseTransform;
-(void)nu_updateDigest:(id)arg1 ;
-(SCD_Struct_NU27)transformMatrix:(SCD_Struct_NU27)arg1 ;
-(id)initWithOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 ;
-(id)initWithOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 imageOrigin:(SCD_Struct_NU7)arg3 ;
-(BOOL)isEqualToGeometryTransformOrientation:(id)arg1 ;
@end

