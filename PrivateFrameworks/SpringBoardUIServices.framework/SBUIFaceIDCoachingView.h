/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, _UILegibilitySettings, UIMorphingLabel;

@interface SBUIFaceIDCoachingView : UIView {

	unsigned long long _coachingCondition;
	NSString* _currentSizeCategory;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _labelText;
	UIMorphingLabel* _label;

}

@property (nonatomic,retain) NSString * labelText;                                    //@synthesize labelText=_labelText - In the implementation block
@property (getter=_label,nonatomic,retain) UIMorphingLabel * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long coachingCondition;                    //@synthesize coachingCondition=_coachingCondition - In the implementation block
@property (nonatomic,retain) NSString * currentSizeCategory;                          //@synthesize currentSizeCategory=_currentSizeCategory - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double stringWidth; 
-(id)init;
-(void)setLabel:(UIMorphingLabel *)arg1 ;
-(id)_label;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)_contentSizeCategoryChanged;
-(double)stringWidth;
-(void)setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(NSString *)currentSizeCategory;
-(void)setCoachingCondition:(unsigned long long)arg1 ;
-(void)_resizeLabelToFirstSizeCategoryThatFits;
-(void)_updateLabelTextForCurrentCoachingConditionAnimated:(BOOL)arg1 ;
-(unsigned long long)coachingCondition;
-(void)setCurrentSizeCategory:(NSString *)arg1 ;
@end

