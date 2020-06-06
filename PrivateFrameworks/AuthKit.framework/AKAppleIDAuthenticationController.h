/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCListenerEndpoint, NSXPCConnection, AKAppleIDAuthenticationContextManager, NSLock;

@interface AKAppleIDAuthenticationController : NSObject {

	NSString* _serviceID;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	NSXPCConnection* _authenticationServiceConnection;
	AKAppleIDAuthenticationContextManager* _contextManager;
	NSLock* _connectionLock;
	/*^block*/id _deallocHandler;

}

@property (nonatomic,copy) id deallocHandler;                                                  //@synthesize deallocHandler=_deallocHandler - In the implementation block
@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationDelegate> delegate; 
+(id)sensitiveAuthenticationKeys;
-(id)init;
-(void)dealloc;
-(id<AKAppleIDAuthenticationDelegate>)delegate;
-(void)setDelegate:(id<AKAppleIDAuthenticationDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)getServerUILoadDelegateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUserInformationForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2 ;
-(id)_authenticationServiceConnection;
-(void)getUserInformationForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAuthModeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDeviceMapWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpVerificationSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateLoginCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)performCircleRequestWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportSignOutForAllAppleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isDevicePasscodeProtected:(id*)arg1 ;
-(id)activeLoginCode:(id*)arg1 ;
-(void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)teardownFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renewRecoveryTokenWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchURLBagForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)setAppleIDWithAltDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 ;
-(void)setAppleIDWithDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 ;
-(void)fetchDeviceListWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchDeviceListWithContext:(id)arg1 error:(id*)arg2 ;
-(id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAuthorizationDatabase:(id*)arg1 ;
-(BOOL)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id*)arg2 ;
-(void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)synchronizeFollowUpItemsForContext:(id)arg1 error:(id*)arg2 ;
-(void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountNamesForAltDSID:(id)arg1 ;
-(id)_urlBagFromCache:(BOOL)arg1 altDSID:(id)arg2 withError:(id*)arg3 ;
-(id)deallocHandler;
-(void)setDeallocHandler:(id)arg1 ;
@end

