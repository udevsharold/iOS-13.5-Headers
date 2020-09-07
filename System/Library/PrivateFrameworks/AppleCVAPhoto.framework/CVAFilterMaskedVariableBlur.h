/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLComputePipelineState;
@class MPSImageGaussianPyramid, NSString;

@interface CVAFilterMaskedVariableBlur : NSObject {

	id<MTLDeviceSPI> _device;
	MPSImageGaussianPyramid* _gaussianPyramid;
	id<MTLComputePipelineState> _maskedVariableBlurKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
+(void)prewarmGaussianPyramid:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 kernelSize:(int)arg4 error:(id*)arg5 ;
-(void)encodeBlurPyramidInPlaceToCommandBuffer:(id)arg1 inoutTexture:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlurRadius:(float)arg5 ;
@end
