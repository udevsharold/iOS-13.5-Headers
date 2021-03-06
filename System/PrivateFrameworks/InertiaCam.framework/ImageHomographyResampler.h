/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface ImageHomographyResampler : NSObject {

	double homographyMatrix[9];

}
-(id)init;
-(void)setHomographyMatrix:(double*)arg1 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(void)EraseCVPixelBuffer:(CVBufferRef)arg1 ;
-(CGImageRef)ResampleCGImage:(CGImageRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(void)ClearOutOfBoundsPixels:(WorkingPixmapRecord*)arg1 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
@end

