/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SFWebAppViewControllerDelegate.h>

@class _SFWebAppViewController, _UIAsyncInvocation, LoadingViewController, NSTimer, UIWebClip, NSString;

@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate> {

	_SFWebAppViewController* _contentViewController;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	BOOL _hasShownLoadingViewController;
	BOOL _hasCustomScheme;
	LoadingViewController* _loadingViewController;
	long long _orientation;
	NSTimer* _hideSnapshotTimer;
	UIWebClip* _webClip;

}

@property (nonatomic,readonly) UIWebClip * webClip;                 //@synthesize webClip=_webClip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)_connectToService;
-(void)webAppViewController:(id)arg1 didChangeLoadingState:(BOOL)arg2 ;
-(void)webAppViewControllerDidFinishInitialLoad:(id)arg1 ;
-(void)webAppViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(UIWebClip *)webClip;
-(void)timeLimitForLoadCompletionExpired;
-(void)_cancelHideSnapshotTimer;
-(void)_setUpContentViewController:(id)arg1 ;
-(void)hideLoadingView;
-(void)_removeRemoteView;
-(id)initWithWebClip:(id)arg1 ;
-(void)openURLWithCustomSchemeIfNeeded;
@end
