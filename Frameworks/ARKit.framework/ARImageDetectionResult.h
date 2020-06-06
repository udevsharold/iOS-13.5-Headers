/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARReferenceImage;

@interface ARImageDetectionResult : NSObject <NSCopying, NSSecureCoding> {

	double _estimatedScaleFactor;
	ARReferenceImage* _referenceImage;
	void* _imageContext;
	SCD_Struct_AR1 _visionTransform;
	SCD_Struct_AR1 _worldTrackingCameraTransformAtDetection;

}

@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                                      //@synthesize visionTransform=_visionTransform - In the implementation block
@property (assign,nonatomic) double estimatedScaleFactor;                                         //@synthesize estimatedScaleFactor=_estimatedScaleFactor - In the implementation block
@property (nonatomic,retain) ARReferenceImage * referenceImage;                                   //@synthesize referenceImage=_referenceImage - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 worldTrackingCameraTransformAtDetection;              //@synthesize worldTrackingCameraTransformAtDetection=_worldTrackingCameraTransformAtDetection - In the implementation block
@property (assign,nonatomic) void* imageContext;                                                  //@synthesize imageContext=_imageContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ARReferenceImage *)referenceImage;
-(double)estimatedScaleFactor;
-(void)setEstimatedScaleFactor:(double)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
-(void*)imageContext;
-(void)setWorldTrackingCameraTransformAtDetection:(SCD_Struct_AR1)arg1 ;
-(void)setImageContext:(void*)arg1 ;
-(void)setReferenceImage:(ARReferenceImage *)arg1 ;
-(SCD_Struct_AR1)worldTrackingCameraTransformAtDetection;
@end

