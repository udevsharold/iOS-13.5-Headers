/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDisparitySmoothing : CIFilter {

	CIImage* inputImage;
	NSNumber* inputNumIterations;

}

@property (retain) CIImage * inputImage; 
@property (copy) NSNumber * inputNumIterations; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_customBoxBlur5Kernel;
-(id)outputImageMetal;
-(NSNumber *)inputNumIterations;
-(void)setInputNumIterations:(NSNumber *)arg1 ;
@end

