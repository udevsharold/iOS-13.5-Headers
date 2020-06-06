/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPStateUIProviderInternal.h>

@protocol CDPStateUIProvider;
@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal> {

	id<CDPStateUIProvider> _uiProvider;

}

@property (nonatomic,retain) id<CDPStateUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(void)setUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2 ;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id<CDPStateUIProvider>)uiProvider;
-(void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithUIProvider:(id)arg1 ;
@end

