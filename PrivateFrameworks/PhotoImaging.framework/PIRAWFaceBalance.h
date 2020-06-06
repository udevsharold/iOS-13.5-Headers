/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIRAWFaceBalance : CIFilter {

	CIImage* _inputImage;
	double _inputOrigI;
	double _inputOrigQ;
	double _inputStrength;
	double _inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (assign,nonatomic) double inputOrigI;                 //@synthesize inputOrigI=_inputOrigI - In the implementation block
@property (assign,nonatomic) double inputOrigQ;                 //@synthesize inputOrigQ=_inputOrigQ - In the implementation block
@property (assign,nonatomic) double inputStrength;              //@synthesize inputStrength=_inputStrength - In the implementation block
@property (assign,nonatomic) double inputWarmth;                //@synthesize inputWarmth=_inputWarmth - In the implementation block
+(CGColorSpaceRef)linearWideGamutColorSpace;
+(id)faceBalanceKernels;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(double)inputStrength;
-(void)setInputStrength:(double)arg1 ;
-(double)inputWarmth;
-(void)setInputWarmth:(double)arg1 ;
-(void)setInputOrigI:(double)arg1 ;
-(void)setInputOrigQ:(double)arg1 ;
-(double)inputOrigI;
-(double)inputOrigQ;
@end

