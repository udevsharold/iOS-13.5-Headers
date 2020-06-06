/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIModuleCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContextDelegate.h>
#import <libobjc.A.dylib/CCUIModuleInstanceManagerObserver.h>

@protocol CCUIModularControlCenterViewControllerDelegate;
@class CCUIModuleInstanceManager, CCUIStatusLabelViewController, CCUIModuleCollectionViewController, NSString;

@interface CCUIModularControlCenterViewController : UIViewController <CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver> {

	CCUIModuleInstanceManager* _moduleManager;
	BOOL _active;
	BOOL _hostedInTestApp;
	id<CCUIModularControlCenterViewControllerDelegate> _delegate;
	CCUIModuleInstanceManager* _moduleInstanceManager;
	CCUIStatusLabelViewController* _statusLabelViewController;

}

@property (nonatomic,readonly) CCUIModuleInstanceManager * moduleInstanceManager;                                  //@synthesize moduleInstanceManager=_moduleInstanceManager - In the implementation block
@property (nonatomic,readonly) CCUIStatusLabelViewController * statusLabelViewController;                          //@synthesize statusLabelViewController=_statusLabelViewController - In the implementation block
@property (nonatomic,readonly) CCUIModuleCollectionViewController * moduleCollectionViewController; 
@property (assign,getter=isHostedInTestApp,nonatomic) BOOL hostedInTestApp;                                        //@synthesize hostedInTestApp=_hostedInTestApp - In the implementation block
@property (getter=isHomeGestureDismissalAllowed,nonatomic,readonly) BOOL homeGestureDismissalAllowed; 
@property (nonatomic,readonly) unsigned long long moduleRowCount; 
@property (assign,nonatomic,__weak) id<CCUIModularControlCenterViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedCollectionViewController;
-(id<CCUIModularControlCenterViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CCUIModularControlCenterViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)_interfaceOrientation;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_resignActive;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayWillTurnOff;
-(void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2 ;
-(void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)requestExpandModuleForContentModuleContext:(id)arg1 ;
-(void)dismissExpandedViewForContentModuleContext:(id)arg1 ;
-(void)dismissControlCenterForContentModuleContext:(id)arg1 ;
-(id)initWithSystemAgent:(id)arg1 ;
-(long long)interfaceOrientationForModuleCollectionViewController:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(void)expandModuleWithIdentifier:(id)arg1 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isHomeGestureDismissalAllowed;
-(CCUIModuleCollectionViewController *)moduleCollectionViewController;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reparentCollectionViewController;
-(void)_reparent;
-(id)_safeStatusLabelViewContainerView;
-(CCUIStatusLabelViewController *)statusLabelViewController;
-(id)_statusLabelViewContainerView;
-(id)_moduleCollectionViewContainerView;
-(id)_safeModuleCollectionViewContainerView;
-(unsigned long long)moduleRowCount;
-(void)closeCurrentModuleWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dismissPresentedContent;
-(void)_reparentAndBecomeActive;
-(CCUIModuleInstanceManager *)moduleInstanceManager;
-(BOOL)isHostedInTestApp;
-(void)setHostedInTestApp:(BOOL)arg1 ;
@end

