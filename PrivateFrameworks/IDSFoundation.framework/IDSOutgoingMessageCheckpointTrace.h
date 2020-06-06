/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange, IDSPeerMessageCheckpointTrace;

@interface IDSOutgoingMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	NSString* _service;
	long long _command;
	long long _priority;
	CUTCheckpointRange* _sendToDaemon;
	CUTCheckpointRange* _storeInDatabase;
	CUTCheckpointRange* _compressPayload;
	IDSPeerMessageCheckpointTrace* _peerMessageTrace;
	unsigned long long _uncompressedMessageSize;
	unsigned long long _compressedMessageSize;

}

@property (nonatomic,readonly) NSString * guid;                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * service;                                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long command;                                             //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) long long priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * sendToDaemon;                             //@synthesize sendToDaemon=_sendToDaemon - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInDatabase;                          //@synthesize storeInDatabase=_storeInDatabase - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * compressPayload;                          //@synthesize compressPayload=_compressPayload - In the implementation block
@property (nonatomic,readonly) IDSPeerMessageCheckpointTrace * peerMessageTrace;              //@synthesize peerMessageTrace=_peerMessageTrace - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedMessageSize;                      //@synthesize uncompressedMessageSize=_uncompressedMessageSize - In the implementation block
@property (assign,nonatomic) unsigned long long compressedMessageSize;                        //@synthesize compressedMessageSize=_compressedMessageSize - In the implementation block
-(long long)priority;
-(NSString *)service;
-(id)_reportMetadata;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(long long)command;
-(NSString *)guid;
-(CUTCheckpointRange *)sendToDaemon;
-(id)initWithGuid:(id)arg1 service:(id)arg2 command:(long long)arg3 priority:(long long)arg4 ;
-(unsigned long long)uncompressedMessageSize;
-(unsigned long long)compressedMessageSize;
-(CUTCheckpointRange *)storeInDatabase;
-(CUTCheckpointRange *)compressPayload;
-(IDSPeerMessageCheckpointTrace *)peerMessageTrace;
-(void)setUncompressedMessageSize:(unsigned long long)arg1 ;
-(void)setCompressedMessageSize:(unsigned long long)arg1 ;
@end

