/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKActivityRingView, HKActivitySummary, HKUnit, UIImageView, UILabel, UIFont, UIView, UILayoutGuide, NSMutableArray;

@interface HKActivityTodayWidgetView : UIView {

	HKActivityRingView* _ringView;
	HKActivitySummary* _activitySummary;
	HKUnit* _activeEnergyUnit;
	HKUnit* _basalEnergyUnit;
	UIImageView* _ringViewSnapshot;
	UILabel* _moveTitleLabel;
	UILabel* _moveValueLabel;
	UILabel* _exerciseTitleLabel;
	UILabel* _exerciseValueLabel;
	UILabel* _standTitleLabel;
	UILabel* _standValueLabel;
	UIFont* _smallCapsValueFont;
	UIView* _textContainerView;
	UILayoutGuide* _labelsTopLayoutGuide;
	UILayoutGuide* _labelsBottomLayoutGuide;
	NSMutableArray* _sizeDepedentConstraints;

}

@property (nonatomic,retain) NSMutableArray * sizeDepedentConstraints;              //@synthesize sizeDepedentConstraints=_sizeDepedentConstraints - In the implementation block
+(double)preferredHeight;
+(id)_integerFormatter;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupSubviews;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
-(void)_textSizeDidUpdate:(id)arg1 ;
-(void)setupRingViews;
-(void)setupMoveLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2 ;
-(void)setupExerciseLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2 ;
-(void)setupStandLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2 ;
-(void)updateTextWithNewActivitySummary:(id)arg1 ;
-(void)_constrainLabels;
-(void)_animateCurrentActivitySummary;
-(void)_updateStandTitleLabelWithSummary:(id)arg1 ;
-(void)_updateMoveValueLabelWithSummary:(id)arg1 ;
-(void)_updateForCurrentSizeCategoryAndSystemLanguage;
-(void)_renderRingImage;
-(id)initWithFrame:(CGRect)arg1 activeEnergyUnit:(id)arg2 basalEnergyUnit:(id)arg3 ;
-(void)setActiveEnergyUnit:(id)arg1 basalEnergyUnit:(id)arg2 ;
-(void)setIsWheelchairUser:(BOOL)arg1 ;
-(NSMutableArray *)sizeDepedentConstraints;
-(void)setSizeDepedentConstraints:(NSMutableArray *)arg1 ;
@end

