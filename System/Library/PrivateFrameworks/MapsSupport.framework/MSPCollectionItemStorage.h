/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface MSPCollectionItemStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _contents;
	NSData* _contentsTimestamp;
	NSData* _position;
	NSData* _positionTimestamp;
	NSData* _storageIdentifier;

}

@property (nonatomic,readonly) BOOL hasStorageIdentifier; 
@property (nonatomic,retain) NSData * storageIdentifier;                     //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSData * contents;                              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL hasContentsTimestamp; 
@property (nonatomic,retain) NSData * contentsTimestamp;                     //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) NSData * position;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasPositionTimestamp; 
@property (nonatomic,retain) NSData * positionTimestamp;                     //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)contents;
-(id)dictionaryRepresentation;
-(NSData *)position;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPosition:(NSData *)arg1 ;
-(void)setContents:(NSData *)arg1 ;
-(BOOL)hasContents;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasPosition;
-(NSData *)storageIdentifier;
-(NSData *)contentsTimestamp;
-(void)setStorageIdentifier:(NSData *)arg1 ;
-(void)setContentsTimestamp:(NSData *)arg1 ;
-(void)setPositionTimestamp:(NSData *)arg1 ;
-(BOOL)hasStorageIdentifier;
-(BOOL)hasContentsTimestamp;
-(BOOL)hasPositionTimestamp;
-(NSData *)positionTimestamp;
@end
