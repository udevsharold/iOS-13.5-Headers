/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewController, UIView, PKCompactNavigationContainerController, NSString;

@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _presenting;
	UIViewController* _presentingVC;
	UIView* _presentingView;
	PKCompactNavigationContainerController* _presentedVC;
	UIView* _presentedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithPresenting:(BOOL)arg1 ;
-(void)_updateWithTransitionContext:(id)arg1 ;
@end

