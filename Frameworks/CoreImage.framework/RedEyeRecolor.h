/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RedEyeRecolor : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	CIImage* inputMask;
	NSNumber* inputNoiseAmount;
	NSNumber* inputBrightness;
	NSNumber* inputRecovery;
	CIVector* inputExtent;
	NSNumber* inputWhiteCutoff;
	NSNumber* inputChroma;

}

@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputNoiseAmount; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputRecovery; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputWhiteCutoff; 
@property (nonatomic,retain) NSNumber * inputChroma; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(id)kernelRecovery;
-(id)kernelRepair;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(NSNumber *)inputNoiseAmount;
-(void)setInputNoiseAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputRecovery;
-(void)setInputRecovery:(NSNumber *)arg1 ;
-(NSNumber *)inputWhiteCutoff;
-(void)setInputWhiteCutoff:(NSNumber *)arg1 ;
-(NSNumber *)inputChroma;
-(void)setInputChroma:(NSNumber *)arg1 ;
@end

