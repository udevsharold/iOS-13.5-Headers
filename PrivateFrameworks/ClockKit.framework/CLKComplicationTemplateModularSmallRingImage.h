/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateModularSmallRingImage : CLKComplicationTemplate {

	float _fillFraction;
	CLKImageProvider* _imageProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (assign,nonatomic) float fillFraction;                          //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) long long ringStyle;                         //@synthesize ringStyle=_ringStyle - In the implementation block
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(float)fillFraction;
-(void)setFillFraction:(float)arg1 ;
-(long long)ringStyle;
-(void)setRingStyle:(long long)arg1 ;
@end

