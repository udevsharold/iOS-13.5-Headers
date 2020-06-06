/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPreviewPresentationController.h>

@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;
@class _UIPreviewPresentationPlatterView, UIViewPropertyAnimator;

@interface _UIPreviewPresentationController2 : UIPreviewPresentationController {

	BOOL _hasPerformedInitialLayout;
	BOOL _shouldScaleContentViewToAspectFitPlatter;
	BOOL _shouldEnableUserInteractionOnPlatter;
	id<UIViewControllerPreviewing_Internal> _previewingContext;
	_UIPreviewPresentationPlatterView* _revealPlatterView;
	id<_UIPreviewInteractionHighlighting> _currentHighlighter;
	UIViewPropertyAnimator* _currentTransitionAnimator;
	double _interactiveTransitionFraction;
	_UIPreviewPresentationPlatterView* _contentPlatterView;
	CGAffineTransform _preferredContentPlatterTransform;

}

@property (nonatomic,retain) _UIPreviewPresentationPlatterView * revealPlatterView;                         //@synthesize revealPlatterView=_revealPlatterView - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedInitialLayout;                                                //@synthesize hasPerformedInitialLayout=_hasPerformedInitialLayout - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredContentPlatterTransform;                            //@synthesize preferredContentPlatterTransform=_preferredContentPlatterTransform - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> previewingContext;              //@synthesize previewingContext=_previewingContext - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewInteractionHighlighting> currentHighlighter;               //@synthesize currentHighlighter=_currentHighlighter - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * currentTransitionAnimator;                     //@synthesize currentTransitionAnimator=_currentTransitionAnimator - In the implementation block
@property (assign,nonatomic) double interactiveTransitionFraction;                                          //@synthesize interactiveTransitionFraction=_interactiveTransitionFraction - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationPlatterView * contentPlatterView;                        //@synthesize contentPlatterView=_contentPlatterView - In the implementation block
@property (nonatomic,readonly) CGRect _computedPlatterFrame; 
@property (assign,nonatomic) BOOL shouldScaleContentViewToAspectFitPlatter;                                 //@synthesize shouldScaleContentViewToAspectFitPlatter=_shouldScaleContentViewToAspectFitPlatter - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableUserInteractionOnPlatter;                                     //@synthesize shouldEnableUserInteractionOnPlatter=_shouldEnableUserInteractionOnPlatter - In the implementation block
-(void)containerViewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(_UIPreviewPresentationPlatterView *)contentPlatterView;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
-(BOOL)_shouldReduceMotion;
-(void)setShouldScaleContentViewToAspectFitPlatter:(BOOL)arg1 ;
-(void)setPreferredContentPlatterTransform:(CGAffineTransform)arg1 ;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1 ;
-(void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1 ;
-(void)_prepareContentViewsForPresentationAnimationsIfNeeded;
-(id<UIViewControllerPreviewing_Internal>)previewingContext;
-(_UIPreviewPresentationPlatterView *)revealPlatterView;
-(id<_UIPreviewInteractionHighlighting>)currentHighlighter;
-(void)_performPresentationAnimationsWithTransitionContext:(id)arg1 ;
-(void)_performTransitionAnimations:(/*^block*/id)arg1 ;
-(void)_performDismissAnimationsWithTransitionContext:(id)arg1 ;
-(BOOL)hasPerformedInitialLayout;
-(void)setHasPerformedInitialLayout:(BOOL)arg1 ;
-(void)_layoutContentViews;
-(CGRect)_preferredContentPlatterRectForContainerRect:(CGRect)arg1 ;
-(BOOL)shouldScaleContentViewToAspectFitPlatter;
-(CGAffineTransform)preferredContentPlatterTransform;
-(void)setRevealPlatterView:(_UIPreviewPresentationPlatterView *)arg1 ;
-(BOOL)shouldEnableUserInteractionOnPlatter;
-(void)setContentPlatterView:(_UIPreviewPresentationPlatterView *)arg1 ;
-(UIViewPropertyAnimator *)currentTransitionAnimator;
-(double)interactiveTransitionFraction;
-(void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 previewingContext:(id)arg3 ;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1 ;
-(void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)arg1 ;
-(CGRect)_computedPlatterFrame;
-(void)_updateFromInteractionEffect:(id)arg1 ;
-(void)setCurrentHighlighter:(id<_UIPreviewInteractionHighlighting>)arg1 ;
-(void)setCurrentTransitionAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setInteractiveTransitionFraction:(double)arg1 ;
-(void)setShouldEnableUserInteractionOnPlatter:(BOOL)arg1 ;
@end

