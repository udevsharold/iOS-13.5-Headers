/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUAuxiliaryImage <NSObject>
@property (readonly) long long auxiliaryImageType; 
@optional
-(id)underlyingAVDepthData;
-(id)underlyingAVPortraitEffectsMatte;
-(id)underlyingAVSemanticSegmentationMatte;

@required
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
-(long long)auxiliaryImageType;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2;
-(CVBufferRef)cvPixelBufferRef;

@end

