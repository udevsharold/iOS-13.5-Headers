/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate;
@class UIPanGestureRecognizer, UIKeyboardSquishTransition, UIKeyboardHandBiasTransitionContext, NSString;

@interface UIKeyboardHandBiasTransitionCoordinator : NSObject <UIGestureRecognizerDelegate> {

	BOOL _edgeSwipeDetected;
	BOOL _transitionDidBegin;
	unsigned long long _transitionStartEdge;
	long long _initialBias;
	long long _transitionTargetBias;
	double _initialEdgeTranslation;
	double _edgeSwipeProgress;
	double _edgeSwipeVelocity;
	BOOL _interactive;
	id<UIKeyboardHandBiasTransitionCoordinatorDelegate> _delegate;
	UIPanGestureRecognizer* _gestureRecognizer;
	UIKeyboardSquishTransition* _currentTransition;
	double _swipeWidthRatio;
	UIKeyboardHandBiasTransitionContext* _currentContext;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                                       //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIKeyboardSquishTransition * currentTransition;                                   //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,retain) UIKeyboardHandBiasTransitionContext * currentContext;                             //@synthesize currentContext=_currentContext - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardHandBiasTransitionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double swipeWidthRatio;                                                           //@synthesize swipeWidthRatio=_swipeWidthRatio - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIKeyboardHandBiasTransitionCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardHandBiasTransitionCoordinatorDelegate>)arg1 ;
-(UIKeyboardHandBiasTransitionContext *)currentContext;
-(void)setCurrentContext:(UIKeyboardHandBiasTransitionContext *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isInteractive;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)setInteractive:(BOOL)arg1 ;
-(void)installGestureRecognizers;
-(void)uninstallGestureRecognizers;
-(void)setSwipeWidthRatio:(double)arg1 ;
-(UIKeyboardSquishTransition *)currentTransition;
-(void)setCurrentTransition:(UIKeyboardSquishTransition *)arg1 ;
-(void)_handBiasPanGestureRecognizerStateDidChange:(id)arg1 ;
-(void)beginHandBiasTransitionWithContext:(id)arg1 ;
-(void)_didRecognizeSpacebarGestureOnStartEdge:(unsigned long long)arg1 withDistance:(double)arg2 ;
-(void)finishHandBiasTransition;
-(double)swipeWidthRatio;
@end

