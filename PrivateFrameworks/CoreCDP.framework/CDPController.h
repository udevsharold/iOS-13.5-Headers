/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProvider, CDPAuthProvider;
@class CDPContext, CDPDaemonConnection, CDPStateUIProviderProxy;

@interface CDPController : NSObject {

	CDPContext* _context;
	id<CDPStateUIProvider> _uiProvider;
	id<CDPAuthProvider> _authProvider;
	CDPDaemonConnection* _daemonConn;
	CDPStateUIProviderProxy* _uiProviderProxy;

}

@property (nonatomic,retain) CDPDaemonConnection * daemonConn;                       //@synthesize daemonConn=_daemonConn - In the implementation block
@property (nonatomic,retain) CDPStateUIProviderProxy * uiProviderProxy;              //@synthesize uiProviderProxy=_uiProviderProxy - In the implementation block
@property (nonatomic,readonly) CDPContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProvider> uiProvider;                      //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPAuthProvider> authProvider;                       //@synthesize authProvider=_authProvider - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)setAuthProvider:(id<CDPAuthProvider>)arg1 ;
-(id<CDPStateUIProvider>)uiProvider;
-(CDPDaemonConnection *)daemonConn;
-(CDPStateUIProviderProxy *)uiProviderProxy;
-(id<CDPAuthProvider>)authProvider;
-(id)initWithXpcEndpoint:(id)arg1 context:(id)arg2 ;
-(void)setDaemonConn:(CDPDaemonConnection *)arg1 ;
-(void)setUiProviderProxy:(CDPStateUIProviderProxy *)arg1 ;
@end

