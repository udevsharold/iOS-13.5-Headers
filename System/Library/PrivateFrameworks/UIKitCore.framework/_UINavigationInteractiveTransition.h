/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationInteractiveTransitionBase.h>

@class _UIParallaxTransitionPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	_UIParallaxTransitionPanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)startInteractiveTransition;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)setNotInteractiveTransition;
-(id)gestureRecognizerView;
-(void)_configureNavigationGesture;
@end
