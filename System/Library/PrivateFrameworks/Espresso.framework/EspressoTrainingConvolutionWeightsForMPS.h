/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoConvolutionWeightsForMPS.h>

@protocol MTLBuffer;
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {

	BOOL is_training;
	id<MTLBuffer> _weightsBuffer;
	id<MTLBuffer> _biasesBuffer;

}

@property (retain) id<MTLBuffer> weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (retain) id<MTLBuffer> biasesBuffer;               //@synthesize biasesBuffer=_biasesBuffer - In the implementation block
-(void*)weights;
-(float*)biasTerms;
-(unsigned)weightsLayout;
-(BOOL)ready;
-(id<MTLBuffer>)weightsBuffer;
-(id<MTLBuffer>)biasesBuffer;
-(void)setBiasesBuffer:(id<MTLBuffer>)arg1 ;
-(void)setWeightsBuffer:(id<MTLBuffer>)arg1 ;
-(id)initWithParams:(convolution_uniforms)arg1 forMode:(BOOL)arg2 ;
@end

