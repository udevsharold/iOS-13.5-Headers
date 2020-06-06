/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@interface BWMattingInferenceConfiguration : BWInferenceConfiguration {

	float _mainImageDownscalingFactor;
	BOOL _refinedDepthDeliveryEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (assign,nonatomic) float mainImageDownscalingFactor;                   //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL refinedDepthDeliveryEnabled;                   //@synthesize refinedDepthDeliveryEnabled=_refinedDepthDeliveryEnabled - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(float)mainImageDownscalingFactor;
-(BOOL)refinedDepthDeliveryEnabled;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(void)setRefinedDepthDeliveryEnabled:(BOOL)arg1 ;
@end

