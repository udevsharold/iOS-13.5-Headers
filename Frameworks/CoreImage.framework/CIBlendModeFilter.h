/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIBlendModeFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
@end

