/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessageContentSyncServiceServerDelegate;
@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessageContentSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessageContentSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKMessageContentSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKMessageContentSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)syncMessageContent:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(id)syncImageAttachment:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(id)notifyInitialContentSyncCompleted:(id)arg1 ;
@end

