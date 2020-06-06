/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _bucketId;
	unsigned _datasetId;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasBucketId; 
@property (assign,nonatomic) unsigned bucketId; 
@property (assign,nonatomic) BOOL hasDatasetId; 
@property (assign,nonatomic) unsigned datasetId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)bucketId;
-(void)setBucketId:(unsigned)arg1 ;
-(void)setHasBucketId:(BOOL)arg1 ;
-(BOOL)hasBucketId;
-(unsigned)datasetId;
-(void)setDatasetId:(unsigned)arg1 ;
-(BOOL)hasDatasetId;
-(void)setHasDatasetId:(BOOL)arg1 ;
@end

