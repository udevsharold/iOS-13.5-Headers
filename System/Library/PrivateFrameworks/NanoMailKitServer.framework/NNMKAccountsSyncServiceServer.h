/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;
@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKAccountsSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKAccountsSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKAccountsSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKAccountsSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)deleteAccount:(id)arg1 ;
-(id)addOrUpdateAccount:(id)arg1 ;
-(id)sendInitialAccountsSync:(id)arg1 ;
-(id)sendStandaloneAccountIdentity:(id)arg1 ;
-(id)requestWatchAccountsStatus:(id)arg1 ;
-(id)syncVIPList:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
@end

