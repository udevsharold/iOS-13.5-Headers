/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLClickPresentationInteractionManagerDelegate <NSObject>
@optional
-(id)containerViewForClickPresentationInteractionManager:(id)arg1;
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1;
-(BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1;

@required
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;

@end
