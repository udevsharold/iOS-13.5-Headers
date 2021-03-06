/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext {

	BOOL _animated;
	BOOL _shouldDismissSiriUponPresentation;
	BOOL _shouldDismissSwitcherUponPresentation;
	SBTransientOverlayPresentationManager* _presentationManager;
	SBWorkspaceTransientOverlay* _transientOverlay;
	long long _transitionType;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                          //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissSiriUponPresentation;                                   //@synthesize shouldDismissSiriUponPresentation=_shouldDismissSiriUponPresentation - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissSwitcherUponPresentation;                               //@synthesize shouldDismissSwitcherUponPresentation=_shouldDismissSwitcherUponPresentation - In the implementation block
@property (nonatomic,retain) SBTransientOverlayPresentationManager * presentationManager;              //@synthesize presentationManager=_presentationManager - In the implementation block
@property (nonatomic,retain) SBWorkspaceTransientOverlay * transientOverlay;                           //@synthesize transientOverlay=_transientOverlay - In the implementation block
@property (assign,nonatomic) long long transitionType;                                                 //@synthesize transitionType=_transitionType - In the implementation block
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(long long)transitionType;
-(void)setTransitionType:(long long)arg1 ;
-(SBTransientOverlayPresentationManager *)presentationManager;
-(void)setPresentationManager:(SBTransientOverlayPresentationManager *)arg1 ;
-(SBWorkspaceTransientOverlay *)transientOverlay;
-(BOOL)shouldDismissSiriUponPresentation;
-(void)setTransientOverlay:(SBWorkspaceTransientOverlay *)arg1 ;
-(void)setShouldDismissSiriUponPresentation:(BOOL)arg1 ;
-(BOOL)shouldDismissSwitcherUponPresentation;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setShouldDismissSwitcherUponPresentation:(BOOL)arg1 ;
@end

