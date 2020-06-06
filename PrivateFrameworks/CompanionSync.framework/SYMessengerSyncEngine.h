/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSyncEngine.h>
#import <libobjc.A.dylib/NMSMessageCenterDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NMSMessageCenter, NSObject, NSMapTable, SYDevice, NSString, NSDictionary;

@interface SYMessengerSyncEngine : SYSyncEngine <NMSMessageCenterDelegate> {

	NMSMessageCenter* _messageCenter;
	NSObject*<OS_dispatch_semaphore> _lookupLock;
	NSMapTable* _requestLookup;
	NSMapTable* _callbackLookup;
	SYDevice* _activeDevice;
	NSString* _sessionDeviceID;
	NSDictionary* _customIDSOptions;
	NSObject*<OS_dispatch_queue> _idsQueue;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions;                        //@synthesize customIDSOptions=_customIDSOptions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> idsQueue;              //@synthesize idsQueue=_idsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(BOOL)resume:(id*)arg1 ;
-(NSDictionary *)customIDSOptions;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)_updateMessageCenterPrefs:(id)arg1 ;
-(id)messageCenter;
-(BOOL)_checkMessageHeader:(id)arg1 messageID:(id)arg2 ;
-(void)_recordLastSeqNo:(id)arg1 ;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2 ;
-(void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3 ;
-(void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4 ;
-(void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(/*^block*/id)arg3 ;
-(void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)messageCenter:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(id)stateForLogging;
-(BOOL)targetIsNearby;
-(BOOL)targetConnected;
-(void)beginSession;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)_hookupMessageHandler;
-(id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3 ;
-(id)_fileTransferHeader;
-(void)_handleError:(id)arg1 forMessageID:(unsigned short)arg2 ;
-(id)_getRequestHeader:(id)arg1 ;
-(void)_suspendIncomingMessages;
-(void)_resumeIncomingMessages;
-(id)_getResponseHeader:(id)arg1 ;
-(id)cancelMessagesReturningFailures:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)idsQueue;
@end

