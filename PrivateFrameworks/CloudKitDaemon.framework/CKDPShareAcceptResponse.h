/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPShare;

@interface CKDPShareAcceptResponse : PBCodable <NSCopying> {

	CKDPShare* _share;

}

@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;              //@synthesize share=_share - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPShare *)share;
-(void)setShare:(CKDPShare *)arg1 ;
-(BOOL)hasShare;
@end

