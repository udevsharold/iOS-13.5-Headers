/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <iAd/ADActionViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol ADWebProcessProxy;
@class ADWebView, ADCountdownButton, NSURL, _WKRemoteObjectInterface, ADWebViewGestureRecognizer, NSString, ADHomeButtonHandler;

@interface ADExpandActionViewController : ADActionViewController <WKNavigationDelegate> {

	id<ADWebProcessProxy> _webProcessProxy;
	BOOL _adIsDismissing;
	BOOL _visible;
	BOOL _browserContextControllerDidLoad;
	BOOL _shouldBlockNavigation;
	BOOL _tapWasRecognized;
	ADWebView* _webView;
	ADCountdownButton* _dismissButton;
	NSURL* _URL;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	ADWebViewGestureRecognizer* _gestureRecognizer;
	NSString* _creativeIdentifier;
	ADHomeButtonHandler* _homeButtonHandler;
	id _notificationObserver;
	CGSize _maximumExpandedSize;

}

@property (nonatomic,retain) ADWebView * webView;                                           //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) ADCountdownButton * dismissButton;                             //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) BOOL adIsDismissing;                                           //@synthesize adIsDismissing=_adIsDismissing - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                 //@synthesize visible=_visible - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                     //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) CGSize maximumExpandedSize;                                    //@synthesize maximumExpandedSize=_maximumExpandedSize - In the implementation block
@property (nonatomic,readonly) CGRect webViewFrame; 
@property (nonatomic,retain) _WKRemoteObjectInterface * remoteObjectInterface;              //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,retain) ADWebViewGestureRecognizer * gestureRecognizer;                //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,copy) NSString * creativeIdentifier;                                   //@synthesize creativeIdentifier=_creativeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL browserContextControllerDidLoad;                          //@synthesize browserContextControllerDidLoad=_browserContextControllerDidLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldBlockNavigation;                                    //@synthesize shouldBlockNavigation=_shouldBlockNavigation - In the implementation block
@property (assign,nonatomic) BOOL tapWasRecognized;                                         //@synthesize tapWasRecognized=_tapWasRecognized - In the implementation block
@property (nonatomic,retain) ADHomeButtonHandler * homeButtonHandler;                       //@synthesize homeButtonHandler=_homeButtonHandler - In the implementation block
@property (nonatomic,retain) id notificationObserver;                                       //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setRemoteObjectInterface:(_WKRemoteObjectInterface *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(_WKRemoteObjectInterface *)remoteObjectInterface;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(ADWebView *)webView;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDismissButton:(ADCountdownButton *)arg1 ;
-(ADCountdownButton *)dismissButton;
-(void)setGestureRecognizer:(ADWebViewGestureRecognizer *)arg1 ;
-(ADWebViewGestureRecognizer *)gestureRecognizer;
-(void)setWebView:(ADWebView *)arg1 ;
-(void)setNotificationObserver:(id)arg1 ;
-(id)notificationObserver;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)_dismissKeyboard;
-(void)_registerExportedObjectInterface;
-(void)_dismissWithSystemEvent:(int)arg1 ;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)_unregisterExportedObjectInterface;
-(NSString *)creativeIdentifier;
-(void)_updateWebViewFrame;
-(id)_incrementCreativeIdentifier;
-(CGRect)webViewFrame;
-(void)_dismissButtonTapped;
-(CGSize)maximumExpandedSize;
-(void)_updateJSOExpandedSize;
-(BOOL)adIsDismissing;
-(void)setAdIsDismissing:(BOOL)arg1 ;
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1 ;
-(BOOL)_navigationIsBlocked;
-(void)_resetGestureFlags;
-(void)setCreativeIdentifier:(NSString *)arg1 ;
-(BOOL)shouldBlockNavigation;
-(void)setShouldBlockNavigation:(BOOL)arg1 ;
-(void)setTapWasRecognized:(BOOL)arg1 ;
-(BOOL)tapWasRecognized;
-(void)setBrowserContextControllerDidLoad:(BOOL)arg1 ;
-(void)_requestOpenURL:(id)arg1 ;
-(BOOL)browserContextControllerDidLoad;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setMaximumExpandedSize:(CGSize)arg1 ;
@end

