/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFBrowserRemoteViewControllerDelegate <NSObject>
@optional
-(void)remoteViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3;
-(void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3;
-(void)remoteViewController:(id)arg1 didDecideShouldShowLinkPreviews:(BOOL)arg2;

@required
-(void)remoteViewControllerWillDismiss:(id)arg1;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
-(void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
-(void)remoteViewControllerDidLoadWebView:(id)arg1;
-(void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
-(void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
-(void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;

@end

