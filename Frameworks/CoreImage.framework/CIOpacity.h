/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIOpacity : CIFilter {

	CIImage* inputImage;
	NSNumber* inputOpacity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOpacity; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputOpacity;
-(void)setInputOpacity:(NSNumber *)arg1 ;
@end

