/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRendererPreFiltering : CIFilter {

	CIImage* inputImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputApertureScaling;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (copy) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputScale; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)_kernel:(BOOL)arg1 ;
-(id)outputImage:(id)arg1 horizontal:(BOOL)arg2 width:(double)arg3 ;
-(void)dumpImage:(id)arg1 extent:(CGRect)arg2 prefixFilename:(id)arg3 ;
@end
