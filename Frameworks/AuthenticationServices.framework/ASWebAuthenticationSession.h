/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASWebAuthenticationPresentationContextProviding;
@class SFAuthenticationSession;

@interface ASWebAuthenticationSession : NSObject {

	SFAuthenticationSession* _authenticationSession;
	/*^block*/id _originalCompletionHandler;
	ASWebAuthenticationSession* _referenceToSelf;
	BOOL _prefersEphemeralWebBrowserSession;
	id<ASWebAuthenticationPresentationContextProviding> _presentationContextProvider;

}

@property (assign,nonatomic,__weak) id<ASWebAuthenticationPresentationContextProviding> presentationContextProvider;              //@synthesize presentationContextProvider=_presentationContextProvider - In the implementation block
@property (assign,nonatomic) BOOL prefersEphemeralWebBrowserSession;                                                              //@synthesize prefersEphemeralWebBrowserSession=_prefersEphemeralWebBrowserSession - In the implementation block
@property (nonatomic,readonly) BOOL canStart; 
-(void)_invalidate;
-(void)cancel;
-(BOOL)start;
-(id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)prefersEphemeralWebBrowserSession;
-(void)setPrefersEphemeralWebBrowserSession:(BOOL)arg1 ;
-(BOOL)canStart;
-(void)setPresentationContextProvider:(id<ASWebAuthenticationPresentationContextProviding>)arg1 ;
-(BOOL)_startDryRun:(BOOL)arg1 ;
-(id<ASWebAuthenticationPresentationContextProviding>)presentationContextProvider;
@end

