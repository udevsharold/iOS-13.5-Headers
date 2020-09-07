/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class UIView, NSMutableArray, SBFHomeGrabberSettings, UIHoverGestureRecognizer, CSHomeAffordanceView;

@interface CSHomeAffordanceViewController : CSCoverSheetViewControllerBase {

	UIView* _counterRotationView;
	NSMutableArray* _rotationWrapperViews;
	long long _orientation;
	SBFHomeGrabberSettings* _settings;
	BOOL _suppressAnimationForPointer;
	UIHoverGestureRecognizer* _suppressAnimationForPointerGestureRecognizer;
	CSHomeAffordanceView* _homeAffordanceView;
	CGPoint _homeAffordanceOffset;

}

@property (nonatomic,readonly) CSHomeAffordanceView * homeAffordanceView;              //@synthesize homeAffordanceView=_homeAffordanceView - In the implementation block
@property (assign,nonatomic) CGPoint homeAffordanceOffset;                             //@synthesize homeAffordanceOffset=_homeAffordanceOffset - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(CSHomeAffordanceView *)homeAffordanceView;
-(void)setHomeAffordanceOffset:(CGPoint)arg1 ;
-(id)_addWrapperViewWithOrientation:(long long)arg1 ;
-(void)_layoutHomeAffordance;
-(void)_handleSuppressAnimationForPointerGesture:(id)arg1 ;
-(CGRect)_homeAffordanceRestingFrame;
-(CGPoint)homeAffordanceOffset;
@end
