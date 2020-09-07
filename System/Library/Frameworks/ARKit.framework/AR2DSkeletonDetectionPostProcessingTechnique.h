/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonDetectionResult, NSObject, AR2DSkeletonRawEspressoResult;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {

	AR2DSkeletonDetectionPostProcessGPU* _postProcessorGPU;
	SkeletonJointFilter<float>* _extrapolationFilter2D;
	double _extrapolationTime;
	SkeletonJointFilter<float>* _extrapolationFilter2DForLiftingData;
	AR2DSkeletonDetectionResult* _previous3DSkeleton;
	BOOL _shouldPush3DSupportSkeleton;
	BOOL _use3DSupportSkeletonForExtrapolation;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _deterministic;
	AR2DSkeletonRawEspressoResult* _previousRawEspressoResult;

}

@property (nonatomic,retain) AR2DSkeletonRawEspressoResult * previousRawEspressoResult;              //@synthesize previousRawEspressoResult=_previousRawEspressoResult - In the implementation block
-(id)init;
-(id)processData:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(AR2DSkeletonRawEspressoResult *)previousRawEspressoResult;
-(void)setPreviousRawEspressoResult:(AR2DSkeletonRawEspressoResult *)arg1 ;
@end
