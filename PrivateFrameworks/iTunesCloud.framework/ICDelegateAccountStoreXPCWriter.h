/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICDelegateAccountStoreServiceClient.h>
#import <libobjc.A.dylib/ICDelegateAccountStoreWriter.h>

@protocol OS_dispatch_queue;
@class NSObject, ICDelegateAccountStoreOptions, NSXPCConnection, NSString;

@interface ICDelegateAccountStoreXPCWriter : NSObject <ICDelegateAccountStoreServiceClient, ICDelegateAccountStoreWriter> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICDelegateAccountStoreOptions* _accountStoreOptions;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSXPCConnection* _connection;
	/*^block*/id _externalChangeHandler;
	BOOL _hasReceivedConnectionInvalidation;

}

@property (nonatomic,copy) id externalChangeHandler;                //@synthesize externalChangeHandler=_externalChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)delegateAccountStoreDidChange;
-(void)recreateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAccountStoreOptions:(id)arg1 ;
-(void)setExternalChangeHandler:(id)arg1 ;
-(id)_onceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getXPCConnectionWithCompletion:(/*^block*/id)arg1 ;
-(id)externalChangeHandler;
@end

