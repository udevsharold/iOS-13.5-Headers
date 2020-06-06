/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIModalDocumentDelegate.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>
#import <libobjc.A.dylib/SKUINavigationControllerDelegate.h>
#import <libobjc.A.dylib/SKUINavigationDocumentDelegate.h>
#import <libobjc.A.dylib/SKUITabBarControllerDelegate.h>
#import <libobjc.A.dylib/SKUIURLResolverDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <libobjc.A.dylib/IKAppContextDelegate.h>
#import <libobjc.A.dylib/IKApplication.h>

@protocol SKUIApplicationDelegate, IKAppDataStoring, SKUIStatusOverlayProvider;
@class SKUIURL, NSURL, SKUIClientContext, SKUIAppDeviceConfig, UIViewController, NSDictionary, SKUIModalDocumentController, SKUIMetricsController, SKUISimpleContainerViewController, NSMutableArray, NSOperationQueue, SKUIPreviewDocumentController, IKAppContext, _SKUIApplicationShutdownHelper, SKUITabBarController, NSArray, SKUINavigationDocumentController, SKUIURLResolver, SKUIApplicationControllerOptions, SKUIScrollingTabBarController, UITabBarController, NSString;

@interface SKUIApplicationController : NSObject <SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerDelegate, SKUINavigationDocumentDelegate, SKUITabBarControllerDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate, IKAppContextDelegate, IKApplication> {

	SKUIURL* _activationURL;
	NSURL* _applicationScriptURL;
	Class _clientContextClass;
	SKUIClientContext* _clientContext;
	id<SKUIApplicationDelegate> _delegate;
	SKUIAppDeviceConfig* _deviceConfig;
	BOOL _didDisplayFirstPage;
	UIViewController* _floatingStatusOverlayViewController;
	BOOL _hidesTabBar;
	BOOL _ignoreDidBecomeActive;
	long long _lastNavigationControllerOperation;
	UIViewController* _lastPoppedViewController;
	unsigned long long _indexOfLastTabNeedingContent;
	NSDictionary* _launchOptions;
	SKUIURL* _legacyLaunchURL;
	id<IKAppDataStoring> _localStorage;
	SKUIModalDocumentController* _modalDocumentController;
	SKUIMetricsController* _metricsController;
	BOOL _mescalPrimeEnabledForXHRRequests;
	SKUISimpleContainerViewController* _navigationContainerViewController;
	NSMutableArray* _navigationDocumentControllers;
	NSOperationQueue* _operationQueue;
	SKUIPreviewDocumentController* _previewDocumentController;
	BOOL _reloadApplicationOnForegroundNotification;
	unsigned long long _resignActiveTaskID;
	UIViewController* _rootViewController;
	IKAppContext* _scriptContext;
	long long _scriptLoadState;
	id<SKUIStatusOverlayProvider> _statusOverlayProvider;
	_SKUIApplicationShutdownHelper* _shutdownHelper;
	BOOL _stopApplicationOnBackgroundNotification;
	SKUITabBarController* _tabBarController;
	NSArray* _tabBarItems;
	SKUINavigationDocumentController* _transientNavigationDocument;
	SKUIURLResolver* _urlResolver;
	id<IKAppDataStoring> _vendorStorage;
	NSMutableArray* _whenLoadedBlocks;
	SKUIApplicationControllerOptions* _options;
	SKUIScrollingTabBarController* _scrollingTabBarController;

}

@property (nonatomic,readonly) long long _applicationMode; 
@property (assign,setter=_setHidesTabBar:,nonatomic) BOOL _hidesTabBar;                                        //@synthesize hidesTabBar=_hidesTabBar - In the implementation block
@property (nonatomic,readonly) NSArray * _navigationControllers; 
@property (nonatomic,readonly) SKUIPreviewDocumentController * _previewOverlayDocumentController;              //@synthesize previewDocumentController=_previewDocumentController - In the implementation block
@property (assign,setter=_setSelectedTabBarIndex:,nonatomic) long long _selectedTabBarIndex; 
@property (nonatomic,readonly) SKUINavigationDocumentController * _transientNavigationController; 
@property (assign,nonatomic,__weak) id<SKUIApplicationDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                              //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) BOOL mescalPrimeEnabledForXHRRequests;                                            //@synthesize mescalPrimeEnabledForXHRRequests=_mescalPrimeEnabledForXHRRequests - In the implementation block
@property (nonatomic,readonly) SKUIModalDocumentController * modalDocumentController;                          //@synthesize modalDocumentController=_modalDocumentController - In the implementation block
@property (nonatomic,readonly) SKUIApplicationControllerOptions * options;                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIViewController * rootViewController;                                          //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) SKUIScrollingTabBarController * scrollingTabBarController;                      //@synthesize scrollingTabBarController=_scrollingTabBarController - In the implementation block
@property (nonatomic,readonly) UITabBarController * tabBarController;                                          //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                                              //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationPreloader;
+(id)_referrerAppForSourceApplication:(id)arg1 launchURL:(id*)arg2 ;
+(void)finishedWithConfigurationPreloader;
+(void)prepareForLaunch;
+(id)applicationOptionsWithLaunchOptions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(SKUIApplicationControllerOptions *)options;
-(id<SKUIApplicationDelegate>)delegate;
-(void)setDelegate:(id<SKUIApplicationDelegate>)arg1 ;
-(id)localStorage;
-(id)_operationQueue;
-(void)_failWithError:(id)arg1 ;
-(UIViewController *)rootViewController;
-(UITabBarController *)tabBarController;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)appIdentifier;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)vendorIdentifier;
-(id)activeDocument;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg1 ;
-(BOOL)appIsTrusted;
-(id)vendorStorage;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(id)appJSURL;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 ;
-(BOOL)shouldIgnoreJSValidation;
-(id)appLaunchParams;
-(BOOL)mescalPrimeEnabledForXHRRequests;
-(void)setMescalPrimeEnabledForXHRRequests:(BOOL)arg1 ;
-(id)presentationViewControllerForAppContext:(id)arg1 ;
-(void)appContext:(id)arg1 didExitWithOptions:(id)arg2 ;
-(CGSize)sizeForNavigationDocument:(id)arg1 ;
-(void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)appContext:(id)arg1 didCompletePurchase:(id)arg2 ;
-(void)appContext:(id)arg1 didCompleteSoftwarePurchase:(id)arg2 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)presentationViewControllerForURLResolver:(id)arg1 ;
-(BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2 ;
-(void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3 ;
-(void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(void)URLResolver:(id)arg1 showTransientViewController:(id)arg2 ;
-(void)navigationDocumentStackDidChange:(id)arg1 ;
-(id)jsNavigationDocumentForNavigationDocumentController:(id)arg1 inContext:(id)arg2 ;
-(void)navigationDocumentController:(id)arg1 requestsAccessToAppContextUsingBlock:(/*^block*/id)arg2 ;
-(void)tabBarController:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)tabBarController:(id)arg1 willDisplayViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldFallbackToRootForController:(id)arg2 ;
-(SKUIScrollingTabBarController *)scrollingTabBarController;
-(void)showErrorViewForLaunchFailure;
-(void)_jsLaunchFinishedWithLaunchMetrics:(id)arg1 ;
-(id)_activeNavigationController;
-(void)recordMetricsEvent:(id)arg1 flushImmediately:(BOOL)arg2 ;
-(void)tabBarController:(id)arg1 didReselectViewController:(id)arg2 ;
-(void)showExternalURL:(id)arg1 ;
-(id)initWithClientContextClass:(Class)arg1 ;
-(id)initWithClientContextClass:(Class)arg1 options:(id)arg2 ;
-(void)_pageDidDisplayNotification:(id)arg1 ;
-(void)_storeFrontChangeNotification:(id)arg1 ;
-(void)_assetsDidUpdate:(id)arg1 ;
-(id)_existingTabBarController;
-(void)resumeApplicationWithOptions:(id)arg1 ;
-(void)_finishWillResignActiveWithDialogState:(BOOL)arg1 ;
-(void)_removeStatusOverlayFromAllNavigationControllers;
-(void)loadApplicationWithOptions:(id)arg1 ;
-(void)_loadApplicationScript;
-(void)_reloadTabBarWithClientContext:(id)arg1 ;
-(void)_setClientContextWithDictionary:(id)arg1 ;
-(void)_failReloadWithError:(id)arg1 ;
-(id)_navigationContainerViewController;
-(id)_tabBarController;
-(void)_dispatchTabBarOnSelect;
-(void)_tintTabBarWithViewController:(id)arg1 ;
-(void)_updateOverlayNavigationController:(id)arg1 ;
-(void)_reloadRootViewControllers;
-(void)showErrorViewWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonAction:(/*^block*/id)arg4 ;
-(void)showTransientViewController:(id)arg1 ;
-(void)evaluateBlockWhenLoaded:(/*^block*/id)arg1 ;
-(void)_reloadApplication;
-(BOOL)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1 ;
-(void)_legacyResolveExternalURL:(id)arg1 ;
-(id)_launchOptionsWithURL:(id)arg1 ;
-(void)hideStatusOverlayForProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showStatusOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)_transientNavigationDocument;
-(void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_newNavigationControllerWithTabBarItem:(id)arg1 ;
-(void)_fireBlocksAfterLoad;
-(void)_dispatchTabBarOnNeedsContentForTabAtIndex:(unsigned long long)arg1 ;
-(void)_removeObserversForReloadNotifications;
-(void)_invalidateApplication;
-(Class)_JSITunesStoreClass;
-(void)_stopScriptContextForReload;
-(void)_previewDocumentIsActiveChangeNotification:(id)arg1 ;
-(BOOL)_playPreviewForPreviewTemplate:(id)arg1 ;
-(BOOL)_needsStatusOverlay;
-(BOOL)_usesFloatingStatusOverlayForWidth:(double)arg1 ;
-(void)_showFloatingStatusOverlayAnimated:(BOOL)arg1 ;
-(id)_documentControllerForNavigationController:(id)arg1 ;
-(SKUINavigationDocumentController *)_transientNavigationController;
-(void)_sendDidDisplayFirstPageIfNecessary;
-(id)selectTabWithIdentifier:(id)arg1 ;
-(BOOL)_sendNativeBackButtonMetricEvents;
-(void)_ensureStackConsistencyForNavigationController:(id)arg1 ;
-(id)_overlayNavigationControllerForViewController:(id)arg1 ;
-(void)_recordTabBarMetricsEventToSelectViewController:(id)arg1 ;
-(void)_retryAfterFailure;
-(void)setUserInterfaceOverrideOnTabBarController:(id)arg1 forViewController:(id)arg2 ;
-(id)_statusOverlayProviderForViewController:(id)arg1 ;
-(void)appContextNeedsRestart:(id)arg1 ;
-(void)_resetUserInterfaceAfterStoreFrontChange;
-(BOOL)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2 ;
-(BOOL)_isDisplayingAccountViewController;
-(void)_resetUserInteraceForAccountViewDisappear:(id)arg1 ;
-(long long)_applicationMode;
-(void)_reloadAfterNetworkChange:(id)arg1 ;
-(void)suspendApplicationWithOptions:(id)arg1 ;
-(SKUIModalDocumentController *)modalDocumentController;
-(void)_loadApplicationFromUpdatableAssetsCache:(id)arg1 ;
-(void)_startScriptContextWithURL:(id)arg1 ;
-(void)_handleScriptUnavailable;
-(void)loadApplication;
-(void)_sendClientContextDidChange;
-(Class)_tabBarControllerClass;
-(Class)_scrollingTabBarControllerClass;
-(void)_setManifestURLOnUpdatableAssetController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2 ;
-(void)modalDocumentControllerDidFinish:(id)arg1 ;
-(id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2 ;
-(id)initWithClientContextClass:(Class)arg1 tabBarControllerStyle:(long long)arg2 ;
-(void)application:(id)arg1 didReceiveURL:(id)arg2 ;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(void)showErrorViewWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showStatusOverlayUsingProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)appJSURLTrusted;
-(NSArray *)_navigationControllers;
-(void)_resetDocumentControllers;
-(long long)_selectedTabBarIndex;
-(void)_setSelectedTabBarIndex:(long long)arg1 ;
-(void)_stopApplication;
-(id)_rootDocuments;
-(BOOL)_hidesTabBar;
-(void)_setHidesTabBar:(BOOL)arg1 ;
-(SKUIPreviewDocumentController *)_previewOverlayDocumentController;
-(NSArray *)tabBarItems;
@end

