/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/ADBannerViewDelegate.h>
#import <libobjc.A.dylib/SXAdDisplayInstructions.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXAdDocumentStateObserver.h>

@protocol SXLayoutInvalidator, SXAnalyticsReporting, SXHost;
@class SXAdController, ADBannerView, SXIAdDebugView, NSError, NSString;

@interface SXIAdComponentView : SXComponentView <ADBannerViewDelegate, SXAdDisplayInstructions, SXViewportChangeListener, SXAdDocumentStateObserver> {

	BOOL _hasInvalidatedLayout;
	BOOL _isReceivingViewportChanges;
	BOOL _isDisplayingBannerView;
	BOOL _didUnloadBannerView;
	int _opportunityError;
	SXAdController* _adController;
	id<SXLayoutInvalidator> _layoutInvalidator;
	id<SXAnalyticsReporting> _analyticsReporter;
	id<SXHost> _host;
	ADBannerView* _bannerView;
	/*^block*/id _cancelHandler;
	SXIAdDebugView* _debugView;
	NSError* _error;
	NSString* _generatedOpportunityIdentifier;
	CGSize _viewportSizeOnAdRequest;

}

@property (nonatomic,__weak,readonly) SXAdController * adController;                    //@synthesize adController=_adController - In the implementation block
@property (nonatomic,readonly) id<SXLayoutInvalidator> layoutInvalidator;               //@synthesize layoutInvalidator=_layoutInvalidator - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReporting> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                         //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) ADBannerView * bannerView;                                 //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatedLayout;                                 //@synthesize hasInvalidatedLayout=_hasInvalidatedLayout - In the implementation block
@property (assign,nonatomic) CGSize viewportSizeOnAdRequest;                            //@synthesize viewportSizeOnAdRequest=_viewportSizeOnAdRequest - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                            //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (assign,nonatomic) BOOL isReceivingViewportChanges;                           //@synthesize isReceivingViewportChanges=_isReceivingViewportChanges - In the implementation block
@property (nonatomic,retain) SXIAdDebugView * debugView;                                //@synthesize debugView=_debugView - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int opportunityError;                                      //@synthesize opportunityError=_opportunityError - In the implementation block
@property (nonatomic,retain) NSString * generatedOpportunityIdentifier;                 //@synthesize generatedOpportunityIdentifier=_generatedOpportunityIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingBannerView;                               //@synthesize isDisplayingBannerView=_isDisplayingBannerView - In the implementation block
@property (assign,nonatomic) BOOL didUnloadBannerView;                                  //@synthesize didUnloadBannerView=_didUnloadBannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(SXIAdDebugView *)debugView;
-(void)setDebugView:(SXIAdDebugView *)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporter;
-(ADBannerView *)bannerView;
-(void)setBannerView:(ADBannerView *)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)displayBannerView;
-(SXAdController *)adController;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(BOOL)isReceivingViewportChanges;
-(void)setIsReceivingViewportChanges:(BOOL)arg1 ;
-(void)registerForViewportChanges;
-(void)presentComponentWithChanges:(SCD_Struct_SX14)arg1 ;
-(void)stopDisplayingAdWithError:(unsigned long long)arg1 ;
-(void)loadComponent:(id)arg1 ;
-(void)adSheetDisconnectedNotification:(id)arg1 ;
-(void)setViewportSizeOnAdRequest:(CGSize)arg1 ;
-(void)cancelAdRequest;
-(BOOL)shouldRegisterForViewportChanges;
-(void)removeBannerViewWithError:(id)arg1 ;
-(void)invalidateLayoutIfNeeded;
-(BOOL)shouldRequestBannerView;
-(void)requestBannerView;
-(BOOL)hasInvalidatedLayout;
-(void)layoutBannerView;
-(BOOL)hasRequestedBannerViewCurrentViewport;
-(CGSize)viewportSizeOnAdRequest;
-(void)setOpportunityError:(int)arg1 ;
-(void)setGeneratedOpportunityIdentifier:(NSString *)arg1 ;
-(BOOL)shouldSendOpportunityEvent;
-(void)sendOpportunityEvent;
-(void)unloadBannerWithError:(id)arg1 ;
-(void)setDidUnloadBannerView:(BOOL)arg1 ;
-(void)setIsDisplayingBannerView:(BOOL)arg1 ;
-(void)setHasInvalidatedLayout:(BOOL)arg1 ;
-(BOOL)didUnloadBannerView;
-(id<SXLayoutInvalidator>)layoutInvalidator;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(int)opportunityError;
-(BOOL)isDisplayingBannerView;
-(NSString *)generatedOpportunityIdentifier;
-(void)adDocumentAppearing;
-(void)adDocumentDisappeared;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 adController:(id)arg5 layoutInvalidator:(id)arg6 analyticsReporting:(id)arg7 host:(id)arg8 ;
@end

