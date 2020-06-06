/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARMLImageProcessingTechnique.h>
#import <ARKit/ARTechniqueBusyState.h>

@class ARImageRotationTechnique, NSString;

@interface ARSemanticSegmentationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {

	CVPixelBufferPoolRef _outputSegmentationPixelBufferPool;
	CVPixelBufferPoolRef _scaledSegmentationOutputPixelBufferPool;
	CVPixelBufferPoolRef _outputConfidencePixelBufferPool;
	CVPixelBufferPoolRef _scaledConfidencePixelBufferPool;
	CVPixelBufferPoolRef _normalsPixelBufferPool;
	CVPixelBufferPoolRef _scaledNormalsPixelBufferPool;
	ARImageRotationTechnique* _segmentationRotationTechnique;
	double _lastResultPushTimestamp;
	BOOL _isLegacyModel;
	BOOL _shouldUseSynchronizedUltraWide;

}

@property (assign,nonatomic) BOOL shouldUseSynchronizedUltraWide;              //@synthesize shouldUseSynchronizedUltraWide=_shouldUseSynchronizedUltraWide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBusy; 
-(id)init;
-(void)dealloc;
-(double)requiredTimeInterval;
-(id)createResultDataFromTensors:(SCD_Struct_AR17*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(CGSize)arg6 ;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(id)resultDataClasses;
-(void)changeEspressoConfig:(id)arg1 ;
-(id)createSegmentationResultDataFromTensors:(SCD_Struct_AR17*)arg1 inputImageData:(id)arg2 rotationNeeded:(long long)arg3 regionOfInterest:(CGSize)arg4 ;
-(id)initLegacy;
-(void)setShouldUseSynchronizedUltraWide:(BOOL)arg1 ;
-(int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4 ;
-(void)createSegmentationConfidenceBuffer:(CVBufferRef)arg1 fromTensor:(SCD_Struct_AR17*)arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(CGSize)arg5 segmentationBuffer:(CVBufferRef)arg6 ;
-(void)createSegmentationConfidenceBuffer:(CVBufferRef)arg1 fromLogitsTensor:(SCD_Struct_AR17*)arg2 normalizerTensor:(SCD_Struct_AR17*)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(CGSize)arg6 segmentationBuffer:(CVBufferRef)arg7 ;
-(BOOL)supportsNormals;
-(void)createSegmentationNormalsBuffer:(CVBufferRef)arg1 fromTensor:(SCD_Struct_AR17*)arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(CGSize)arg5 ;
-(BOOL)shouldUseSynchronizedUltraWide;
@end

