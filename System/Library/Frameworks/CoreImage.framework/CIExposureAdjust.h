/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputEV;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputEV; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputEV;
-(void)setInputEV:(NSNumber *)arg1 ;
@end

