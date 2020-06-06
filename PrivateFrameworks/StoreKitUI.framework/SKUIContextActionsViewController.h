/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIGestureRecognizer, SKUIContextActionsPresentationController, SKUIContextActionsConfiguration, NSMutableArray, UIInterfaceActionGroupView, UIStackView, UIVisualEffectView, NSString;

@interface SKUIContextActionsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _orbPresentation;
	BOOL _appliedSystemRecognizer;
	UIGestureRecognizer* _systemProvidedGestureRecognzier;
	SKUIContextActionsPresentationController* _transitionPresentationController;
	SKUIContextActionsConfiguration* _configuration;
	NSMutableArray* _constraints;
	UIInterfaceActionGroupView* _contextActionView;
	UIStackView* _stackView;
	UIVisualEffectView* _backgroundView;
	UIInterfaceActionGroupView* _scrollableActionGroupView;
	CGPoint _gestureRecognizerInitialLocation;

}

@property (nonatomic,retain) SKUIContextActionsConfiguration * configuration;                                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                                                             //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIInterfaceActionGroupView * contextActionView;                                           //@synthesize contextActionView=_contextActionView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                                  //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionGroupView * scrollableActionGroupView;                                   //@synthesize scrollableActionGroupView=_scrollableActionGroupView - In the implementation block
@property (assign,nonatomic) CGPoint gestureRecognizerInitialLocation;                                                 //@synthesize gestureRecognizerInitialLocation=_gestureRecognizerInitialLocation - In the implementation block
@property (assign,getter=hasAppliedSystemRecognizer,nonatomic) BOOL appliedSystemRecognizer;                           //@synthesize appliedSystemRecognizer=_appliedSystemRecognizer - In the implementation block
@property (nonatomic,retain) SKUIContextActionsPresentationController * transitionPresentationController;              //@synthesize transitionPresentationController=_transitionPresentationController - In the implementation block
@property (assign,getter=isOrbPresentation,nonatomic) BOOL orbPresentation;                                            //@synthesize orbPresentation=_orbPresentation - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * systemProvidedGestureRecognzier;                                    //@synthesize systemProvidedGestureRecognzier=_systemProvidedGestureRecognzier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)constraints;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(SKUIContextActionsConfiguration *)arg1 ;
-(SKUIContextActionsConfiguration *)configuration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)setOrbPresentation:(BOOL)arg1 ;
-(void)setSystemProvidedGestureRecognzier:(UIGestureRecognizer *)arg1 ;
-(SKUIContextActionsPresentationController *)transitionPresentationController;
-(BOOL)isOrbPresentation;
-(void)viewTapped:(id)arg1 ;
-(void)_reloadViewsConfiguration;
-(UIGestureRecognizer *)systemProvidedGestureRecognzier;
-(void)setGestureRecognizerInitialLocation:(CGPoint)arg1 ;
-(void)systemProvidedGestureRecognzierTriggered:(id)arg1 ;
-(UIInterfaceActionGroupView *)scrollableActionGroupView;
-(CGPoint)gestureRecognizerInitialLocation;
-(void)_applySystemRecognizer;
-(UIInterfaceActionGroupView *)contextActionView;
-(void)setAppliedSystemRecognizer:(BOOL)arg1 ;
-(void)setContextActionView:(UIInterfaceActionGroupView *)arg1 ;
-(BOOL)hasAppliedSystemRecognizer;
-(void)setTransitionPresentationController:(SKUIContextActionsPresentationController *)arg1 ;
-(id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)setScrollableActionGroupView:(UIInterfaceActionGroupView *)arg1 ;
@end

