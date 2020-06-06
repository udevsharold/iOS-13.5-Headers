/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, NSLayoutConstraint, UIColor;

@interface TPTableViewCell : UITableViewCell {

	BOOL _accessiblityConstraintsEnabled;
	BOOL _constraintsLoaded;
	BOOL _foregroundViewLoaded;
	UIView* _foregroundView;
	NSLayoutConstraint* _foregroundViewLeadingAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewTrailingAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewTopAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewBottomAnchorLayoutConstraint;

}

@property (assign,getter=isAccessiblityConstraintsEnabled,nonatomic) BOOL accessiblityConstraintsEnabled;              //@synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled - In the implementation block
@property (assign,getter=isConstraintsLoaded,nonatomic) BOOL constraintsLoaded;                                        //@synthesize constraintsLoaded=_constraintsLoaded - In the implementation block
@property (assign,getter=isForegroundViewLoaded,nonatomic) BOOL foregroundViewLoaded;                                  //@synthesize foregroundViewLoaded=_foregroundViewLoaded - In the implementation block
@property (nonatomic,retain) UIView * foregroundView;                                                                  //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewLeadingAnchorLayoutConstraint;                       //@synthesize foregroundViewLeadingAnchorLayoutConstraint=_foregroundViewLeadingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewTrailingAnchorLayoutConstraint;                      //@synthesize foregroundViewTrailingAnchorLayoutConstraint=_foregroundViewTrailingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewTopAnchorLayoutConstraint;                           //@synthesize foregroundViewTopAnchorLayoutConstraint=_foregroundViewTopAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewBottomAnchorLayoutConstraint;                        //@synthesize foregroundViewBottomAnchorLayoutConstraint=_foregroundViewBottomAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIEdgeInsets intrinsicSeparatorInset; 
+(BOOL)requiresConstraintBasedLayout;
+(UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)foregroundColor;
-(UIView *)foregroundView;
-(void)setForegroundView:(UIView *)arg1 ;
-(void)updateFonts;
-(void)loadContentView;
-(void)updateConstraintsConstants;
-(void)loadConstraints;
-(void)unloadConstraints;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(BOOL)isConstraintsLoaded;
-(UIEdgeInsets)intrinsicSeparatorInset;
-(BOOL)isForegroundViewLoaded;
-(BOOL)isAccessiblityConstraintsEnabled;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
-(void)setForegroundViewLoaded:(BOOL)arg1 ;
-(NSLayoutConstraint *)foregroundViewLeadingAnchorLayoutConstraint;
-(NSLayoutConstraint *)foregroundViewTrailingAnchorLayoutConstraint;
-(NSLayoutConstraint *)foregroundViewTopAnchorLayoutConstraint;
-(NSLayoutConstraint *)foregroundViewBottomAnchorLayoutConstraint;
@end

