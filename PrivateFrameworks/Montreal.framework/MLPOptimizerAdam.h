/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerAdam : MLPOptimizer {

	MPSVector* _momentum;
	MPSVector* _velocity;

}

@property (retain) MPSVector * momentum;              //@synthesize momentum=_momentum - In the implementation block
@property (retain) MPSVector * velocity;              //@synthesize velocity=_velocity - In the implementation block
-(MPSVector *)momentum;
-(MPSVector *)velocity;
-(id)initWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 velocity:(/*^block*/id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
-(void)setMomentum:(MPSVector *)arg1 ;
-(void)setVelocity:(MPSVector *)arg1 ;
@end
