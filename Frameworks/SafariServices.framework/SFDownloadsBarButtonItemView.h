/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/SFDeferrableUpdateView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class UIProgressView, CAStateController, UIBarButtonItem;

@interface SFDownloadsBarButtonItemView : UIButton <SFDeferrableUpdateView, CAStateControllerDelegate> {

	UIProgressView* _progressView;
	double _barButtonItemWidth;
	double _progress;
	SCD_Struct_SF15 deferrableUpdateViewState;
	CAStateController* _stateController;
	UIBarButtonItem* _barButtonItem;

}

@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
+(id)buttonWithBarButtonItem:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(UIBarButtonItem *)barButtonItem;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(CGRect)_selectedIndicatorBounds;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(void)pulse;
-(void)_buttonPressed;
-(CGRect)_barButtonHitRect;
-(void)updateContents;
-(SCD_Struct_SF15*)deferrableUpdateViewState;
@end

