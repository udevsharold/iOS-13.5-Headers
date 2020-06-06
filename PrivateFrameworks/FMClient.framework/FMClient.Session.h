/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMClient/FMClient.ClientSessionProtocol.h>
#import <FMClient/FMClient.ServerSessionProtocol.h>

@interface FMClient.Session : NSObject <FMClient.ClientSessionProtocol, FMClient.ServerSessionProtocol> {

	 clientBundleId;
	 clientProcessName;
	 _activeConnection;
	 $__lazy_storage_$_serverProxy;
	 authenticationProvider;

}
-(void)sessionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialNotAuthorizedWithCredential:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)credential:(/*^block*/id)arg1 ;
-(void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)voiceAssistantSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateCacheWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)discoverNearbyDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)deviceSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)invalidate;
-(void)registerAuthenticationProvider:(id)arg1 ;
@end

