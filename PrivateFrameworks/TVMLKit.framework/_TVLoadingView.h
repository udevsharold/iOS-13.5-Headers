/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UIView, UIActivityIndicatorView;

@interface _TVLoadingView : UIView {

	BOOL _shouldShowSpinner;
	_TVImageView* _backgroundImageView;
	UIView* _loadingTitleLabel;
	UIActivityIndicatorView* _spinnerView;
	UIView* _spinnerContainer;
	UIView* _labelContainer;

}

@property (assign,nonatomic,__weak) UIView * loadingTitleLabel;                           //@synthesize loadingTitleLabel=_loadingTitleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UIView * spinnerContainer;                          //@synthesize spinnerContainer=_spinnerContainer - In the implementation block
@property (nonatomic,__weak,readonly) UIView * labelContainer;                            //@synthesize labelContainer=_labelContainer - In the implementation block
@property (nonatomic,__weak,readonly) _TVImageView * backgroundImageView;                 //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,__weak,readonly) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSpinner;                                      //@synthesize shouldShowSpinner=_shouldShowSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(_TVImageView *)backgroundImageView;
-(void)_showSpinner;
-(UIActivityIndicatorView *)spinnerView;
-(UIView *)spinnerContainer;
-(UIView *)labelContainer;
-(UIView *)loadingTitleLabel;
-(void)setLoadingTitleLabel:(UIView *)arg1 ;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
@end

