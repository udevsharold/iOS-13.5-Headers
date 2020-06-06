/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMDDataStreamMessageCoder : NSObject
+(BOOL)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char*)arg2 payloadLength:(unsigned long long*)arg3 ;
+(id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4 ;
+(id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2 ;
+(id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2 ;
+(id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3 ;
+(BOOL)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5 ;
+(BOOL)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5 ;
+(id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4 ;
+(BOOL)readHeaderFromPartialData:(const char*)arg1 length:(unsigned long long)arg2 frameType:(unsigned char*)arg3 payloadLength:(unsigned long long*)arg4 ;
@end

