/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface _UIPointerEffectSettings : PTSettings {

	double _defaultPointerCornerRadius;
	double _overrideSlipPoints;
	double _slipFactorX;
	double _slipFactorY;
	double _parallaxAmount;
	double _maxSlipPoints;
	double _scaleUpPoints;
	double _scaleUpAnimationResponse;
	double _scaleUpAnimationDampingRatio;
	double _dampedAnimationResponse;
	double _dampedAnimationDampingRatio;

}

@property (assign,nonatomic) double defaultPointerCornerRadius;                //@synthesize defaultPointerCornerRadius=_defaultPointerCornerRadius - In the implementation block
@property (assign,nonatomic) double overrideSlipPoints;                        //@synthesize overrideSlipPoints=_overrideSlipPoints - In the implementation block
@property (assign,nonatomic) double slipFactorX;                               //@synthesize slipFactorX=_slipFactorX - In the implementation block
@property (assign,nonatomic) double slipFactorY;                               //@synthesize slipFactorY=_slipFactorY - In the implementation block
@property (assign,nonatomic) double parallaxAmount;                            //@synthesize parallaxAmount=_parallaxAmount - In the implementation block
@property (assign,nonatomic) double maxSlipPoints;                             //@synthesize maxSlipPoints=_maxSlipPoints - In the implementation block
@property (assign,nonatomic) double scaleUpPoints;                             //@synthesize scaleUpPoints=_scaleUpPoints - In the implementation block
@property (assign,nonatomic) double scaleUpAnimationResponse;                  //@synthesize scaleUpAnimationResponse=_scaleUpAnimationResponse - In the implementation block
@property (assign,nonatomic) double scaleUpAnimationDampingRatio;              //@synthesize scaleUpAnimationDampingRatio=_scaleUpAnimationDampingRatio - In the implementation block
@property (assign,nonatomic) double dampedAnimationResponse;                   //@synthesize dampedAnimationResponse=_dampedAnimationResponse - In the implementation block
@property (assign,nonatomic) double dampedAnimationDampingRatio;               //@synthesize dampedAnimationDampingRatio=_dampedAnimationDampingRatio - In the implementation block
+(id)settingsControllerModule;
+(BOOL)pointerSlipMatchesContentSlip;
-(void)setDefaultValues;
-(double)slipFactorX;
-(double)slipFactorY;
-(double)maxSlipPoints;
-(double)parallaxAmount;
-(double)scaleUpPoints;
-(double)defaultPointerCornerRadius;
-(double)scaleUpAnimationResponse;
-(double)scaleUpAnimationDampingRatio;
-(double)dampedAnimationResponse;
-(double)dampedAnimationDampingRatio;
-(double)overrideSlipPoints;
-(void)setDefaultPointerCornerRadius:(double)arg1 ;
-(void)setSlipFactorX:(double)arg1 ;
-(void)setSlipFactorY:(double)arg1 ;
-(void)setParallaxAmount:(double)arg1 ;
-(void)setMaxSlipPoints:(double)arg1 ;
-(void)setScaleUpPoints:(double)arg1 ;
-(void)setScaleUpAnimationResponse:(double)arg1 ;
-(void)setScaleUpAnimationDampingRatio:(double)arg1 ;
-(void)setDampedAnimationResponse:(double)arg1 ;
-(void)setDampedAnimationDampingRatio:(double)arg1 ;
-(void)setOverrideSlipPoints:(double)arg1 ;
@end

