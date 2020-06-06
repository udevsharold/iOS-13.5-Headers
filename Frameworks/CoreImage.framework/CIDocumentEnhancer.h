/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDocumentEnhancer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,copy) NSNumber * inputAmount; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

