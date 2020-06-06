/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSLayoutConstraint;

@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	NSLayoutConstraint* _secondaryFirstBaselineToPrimaryBottomConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * secondaryFirstBaselineToPrimaryBottomConstraint;              //@synthesize secondaryFirstBaselineToPrimaryBottomConstraint=_secondaryFirstBaselineToPrimaryBottomConstraint - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                                                          //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryButton;                                                        //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)_setUpConstraints;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(void)_setUpSubviews;
-(NSLayoutConstraint *)secondaryFirstBaselineToPrimaryBottomConstraint;
@end

