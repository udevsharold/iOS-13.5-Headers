/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>

@interface AXMRectangleDetectorNode : AXMEvaluationNode {

	double _cameraPixelFocalLength;
	double _minimumAspectRatio;
	double _maximumAspectRatio;
	double _quadratureTolerance;
	double _minimumSize;
	long long _maximumNumberOfRects;
	CGPoint _cameraOpticalOrigin;

}

@property (assign,nonatomic) double cameraPixelFocalLength;               //@synthesize cameraPixelFocalLength=_cameraPixelFocalLength - In the implementation block
@property (assign,nonatomic) CGPoint cameraOpticalOrigin;                 //@synthesize cameraOpticalOrigin=_cameraOpticalOrigin - In the implementation block
@property (assign,nonatomic) double minimumAspectRatio;                   //@synthesize minimumAspectRatio=_minimumAspectRatio - In the implementation block
@property (assign,nonatomic) double maximumAspectRatio;                   //@synthesize maximumAspectRatio=_maximumAspectRatio - In the implementation block
@property (assign,nonatomic) double quadratureTolerance;                  //@synthesize quadratureTolerance=_quadratureTolerance - In the implementation block
@property (assign,nonatomic) double minimumSize;                          //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfRects;              //@synthesize maximumNumberOfRects=_maximumNumberOfRects - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)minimumSize;
-(void)setMinimumSize:(double)arg1 ;
-(double)minimumAspectRatio;
-(void)setMinimumAspectRatio:(double)arg1 ;
-(double)maximumAspectRatio;
-(void)setMaximumAspectRatio:(double)arg1 ;
-(double)quadratureTolerance;
-(void)setQuadratureTolerance:(double)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(void)setCameraPixelFocalLength:(double)arg1 ;
-(void)setCameraOpticalOrigin:(CGPoint)arg1 ;
-(void)setMaximumNumberOfRects:(long long)arg1 ;
-(double)cameraPixelFocalLength;
-(CGPoint)cameraOpticalOrigin;
-(long long)maximumNumberOfRects;
@end

