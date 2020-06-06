/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(id)clientToken;
-(id)getAppleIDSession;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(CFURLStorageSessionRef)copyStorageSession;
-(void)clientTokenRequestedByServer;
-(id)additionalHeaderValues;
-(id)customConnectionProperties;
-(id)oauthInfoProvider;
-(BOOL)shouldUseOpportunisticSockets;
-(BOOL)handleTrustChallenge:(id)arg1;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
-(id)clientCertificateInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
-(BOOL)shouldTurnModalOnBadPassword;
-(BOOL)shouldTryRenewingCredential;
-(BOOL)renewCredential;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(BOOL)shouldCompressRequests;

@required
-(id)user;
-(id)scheme;
-(id)host;
-(long long)port;
-(id)password;
-(id)principalURL;
-(id)accountID;
-(id)userAgentHeader;
-(id)identityPersist;
-(id)serverRoot;
-(id)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1;
-(BOOL)shouldFailAllTasks;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;

@end

