/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingClientProtobuf;

@interface _MRUpdateClientMessageProtobuf : PBCodable <NSCopying> {

	_MRNowPlayingClientProtobuf* _client;

}

@property (nonatomic,readonly) BOOL hasClient; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRNowPlayingClientProtobuf *)client;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasClient;
@end

