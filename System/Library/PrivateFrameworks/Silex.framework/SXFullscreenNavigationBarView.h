/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SXFullscreenNavigationBarViewDelegate;
@class UIVisualEffectView, UIButton;

@interface SXFullscreenNavigationBarView : UIView {

	BOOL _expanded;
	id<SXFullscreenNavigationBarViewDelegate> _delegate;
	UIVisualEffectView* _backgroundView;
	UIButton* _button;

}

@property (nonatomic,readonly) UIVisualEffectView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenNavigationBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL expanded;                                                        //@synthesize expanded=_expanded - In the implementation block
-(id)init;
-(id<SXFullscreenNavigationBarViewDelegate>)delegate;
-(void)setDelegate:(id<SXFullscreenNavigationBarViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(UIVisualEffectView *)backgroundView;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(BOOL)expanded;
-(void)doneButtonPressed:(id)arg1 ;
-(void)createBackgroundView;
-(void)updateFrameAnimated:(BOOL)arg1 ;
-(void)createDoneButton;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
