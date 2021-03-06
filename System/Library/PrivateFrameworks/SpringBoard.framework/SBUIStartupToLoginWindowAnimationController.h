/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <libobjc.A.dylib/SBLoginAppContainerViewControllerObserver.h>

@class SBWindow, BKSDisplayRenderOverlay, BSTransaction, NSString;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {

	SBWindow* _transitionWindow;
	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;
	BSTransaction* _waitForLoginAppToFinishLaunchingTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setHidden:(BOOL)arg1 ;
-(id)animationSettings;
-(void)_startAnimation;
-(void)_cleanupAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(BOOL)_shouldDismissBanner;
-(void)loginAppDidFinishLaunching:(id)arg1 ;
@end

