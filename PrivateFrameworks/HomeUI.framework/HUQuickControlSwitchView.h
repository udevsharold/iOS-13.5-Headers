/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlControllableView.h>

@class HUQuickControlViewProfile, HUQuickControlSwitchViewProfile, UIView, HUDynamicFormattingLabel, HUIconView, UIImpactFeedbackGenerator, NSString;

@interface HUQuickControlSwitchView : UIView <HUQuickControlControllableView> {

	unsigned long long _reachabilityState;
	HUQuickControlSwitchViewProfile* _profile;
	UIView* _wellView;
	UIView* _knobView;
	HUDynamicFormattingLabel* _supplementaryValueLabel;
	HUIconView* _decorationIconView;
	double _clippedValue;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	double _switchValue;

}

@property (nonatomic,retain) UIView * wellView;                                               //@synthesize wellView=_wellView - In the implementation block
@property (nonatomic,retain) UIView * knobView;                                               //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) HUDynamicFormattingLabel * supplementaryValueLabel;              //@synthesize supplementaryValueLabel=_supplementaryValueLabel - In the implementation block
@property (nonatomic,retain) HUIconView * decorationIconView;                                 //@synthesize decorationIconView=_decorationIconView - In the implementation block
@property (assign,nonatomic) double clippedValue;                                             //@synthesize clippedValue=_clippedValue - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                   //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) double switchValue;                                              //@synthesize switchValue=_switchValue - In the implementation block
@property (nonatomic,copy) HUQuickControlSwitchViewProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                            //@synthesize reachabilityState=_reachabilityState - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlSwitchViewProfile *)profile;
-(void)setProfile:(HUQuickControlSwitchViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(UIView *)knobView;
-(void)setKnobView:(UIView *)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(void)setDecorationIconView:(HUIconView *)arg1 ;
-(HUIconView *)decorationIconView;
-(void)_updateDecorationIconDescriptorAnimated:(BOOL)arg1 ;
-(void)setWellView:(UIView *)arg1 ;
-(UIView *)wellView;
-(void)_updateSupplementaryValueLabelAnimated:(BOOL)arg1 ;
-(void)_updateKnobViewTintColorAnimated:(BOOL)arg1 ;
-(double)clippedValue;
-(void)_actuateTapticFeedback;
-(void)setClippedValue:(double)arg1 ;
-(double)switchValue;
-(CGRect)_knobFrameForMetrics:(SCD_Struct_HU8)arg1 switchValue:(double)arg2 ;
-(HUDynamicFormattingLabel *)supplementaryValueLabel;
-(CGSize)_knobSizeForMetrics:(SCD_Struct_HU8)arg1 ;
-(CGPoint)_knobCenterForMetrics:(SCD_Struct_HU8)arg1 switchValue:(double)arg2 ;
-(void)setSwitchValue:(double)arg1 ;
-(BOOL)_createDecorationIconViewIfNecessary;
-(void)_createSupplementaryValueLabelIfNecessary;
-(void)setSupplementaryValueLabel:(HUDynamicFormattingLabel *)arg1 ;
@end

