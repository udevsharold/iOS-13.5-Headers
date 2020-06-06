/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class HKGradient;

@interface HKGradientView : UIView {

	HKGradient* _gradient;

}

@property (nonatomic,retain) HKGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
+(Class)layerClass;
+(id)hk_verticalWaveformMaskGradientWithInsetLocation:(double)arg1 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(id)initWithGradient:(id)arg1 ;
-(void)maskAllCornersWithRadius:(double)arg1 ;
-(void)_updateGradientLayer;
-(void)maskCorners:(unsigned long long)arg1 radius:(double)arg2 ;
@end

