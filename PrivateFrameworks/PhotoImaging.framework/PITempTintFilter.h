/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PITempTintFilter : CIFilter {

	CIImage* _inputImage;
	double _temperature;
	double _tint;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (assign,nonatomic) double temperature;                //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) double tint;                       //@synthesize tint=_tint - In the implementation block
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
-(double)tint;
-(void)setTint:(double)arg1 ;
-(void)setInputVectorsForFilter:(id)arg1 ;
@end

