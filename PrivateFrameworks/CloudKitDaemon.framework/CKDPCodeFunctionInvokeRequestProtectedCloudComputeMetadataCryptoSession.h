/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying> {

	NSData* _routingToken;
	NSData* _wrappedInvocationKey;

}

@property (nonatomic,readonly) BOOL hasWrappedInvocationKey; 
@property (nonatomic,retain) NSData * wrappedInvocationKey;               //@synthesize wrappedInvocationKey=_wrappedInvocationKey - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                       //@synthesize routingToken=_routingToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasRoutingToken;
-(NSData *)routingToken;
-(void)setWrappedInvocationKey:(NSData *)arg1 ;
-(BOOL)hasWrappedInvocationKey;
-(NSData *)wrappedInvocationKey;
@end

