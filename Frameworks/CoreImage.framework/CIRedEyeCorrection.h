/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSDictionary;

@interface CIRedEyeCorrection : CIFilter {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSDictionary* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSDictionary * inputCorrectionInfo; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
-(BOOL)_isIdentity;
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSDictionary *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSDictionary *)arg1 ;
@end

