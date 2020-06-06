/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InertiaCam/InertiaCam-Structs.h>
#import <InertiaCam/ImageHomographyResampler.h>

@class CIContext, CIImage;

@interface CIHomographyResampler : ImageHomographyResampler {

	CIContext* _ctx;
	CIImage* _fillImage;
	CGRect _lastFillRect;

}
-(id)init;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
-(void)updateBackgroundFill:(CGRect)arg1 ;
@end

