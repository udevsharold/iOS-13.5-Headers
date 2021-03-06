/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBlurmapRefinementLinearMapping : CIFilter {

	CIImage* inputImage;
	CIImage* inputSecondaryImage;
	NSNumber* inputScalingFactor;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputSecondaryImage; 
@property (retain) NSNumber * inputScalingFactor; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)kernel;
-(CIImage *)inputSecondaryImage;
-(void)setInputSecondaryImage:(CIImage *)arg1 ;
-(id)kernelNoSecondaryImage;
-(NSNumber *)inputScalingFactor;
-(void)setInputScalingFactor:(NSNumber *)arg1 ;
@end

