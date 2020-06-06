/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ARUIRingsView, ARUIRingsViewRenderer, _HKShapeView, HKActivitySummary;

@interface HKActivityRingView : UIView {

	ARUIRingsView* _ringsView;
	ARUIRingsViewRenderer* _renderer;
	_HKShapeView* _maskView;
	BOOL _shouldBypassApplicationStateChecking;
	HKActivitySummary* _activitySummary;
	double _ringInsetPercentage;
	double _emptyRingAlpha;

}

@property (assign,setter=_setRingInsetPercentage:,getter=_ringInsetPercentage,nonatomic) double ringInsetPercentage;                                                               //@synthesize ringInsetPercentage=_ringInsetPercentage - In the implementation block
@property (assign,setter=_setEmptyRingAlpha:,getter=_emptyRingAlpha,nonatomic) double emptyRingAlpha;                                                                              //@synthesize emptyRingAlpha=_emptyRingAlpha - In the implementation block
@property (assign,setter=_setShouldBypassApplicationStateChecking:,getter=_shouldBypassApplicationStateChecking,nonatomic) BOOL shouldBypassApplicationStateChecking;              //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;                                                                                                                  //@synthesize activitySummary=_activitySummary - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(HKActivitySummary *)activitySummary;
-(id)_snapshotImage;
-(void)_setUpAfterInit;
-(void)_setUpRingsView;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateMaskPath;
-(double)_emptyRingAlpha;
-(void)_updateRingsViewDiameter;
-(void)_updateRingsViewDiameterLegacy;
-(void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3 ;
-(void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3 ;
-(double)_ringDiameter;
-(id)initWithFrame:(CGRect)arg1 renderer:(id)arg2 ;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(void)_setEmptyRingAlpha:(double)arg1 ;
-(void)_setActivityRingViewBackgroundTransparent:(BOOL)arg1 ;
-(void)_setActivityRingViewBackgroundColor:(id)arg1 ;
-(void)_setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(void)_displayIcons;
-(void)_setActivitySummary:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_ringInsetPercentage;
-(void)_setRingInsetPercentage:(double)arg1 ;
-(BOOL)_shouldBypassApplicationStateChecking;
@end

