/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIFaceSegmentationFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRegion;
	NSNumber* inputOrientation;
	CIVector* inputFaceRect;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRegion; 
@property (nonatomic,retain) NSNumber * inputOrientation; 
@property (nonatomic,retain) CIVector * inputFaceRect; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRegion;
-(void)setInputRegion:(NSNumber *)arg1 ;
-(NSNumber *)inputOrientation;
-(void)setInputOrientation:(NSNumber *)arg1 ;
-(CIVector *)inputFaceRect;
-(void)setInputFaceRect:(CIVector *)arg1 ;
@end

