/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDGroundViewLabel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _groundViewLabelInfos;
	unsigned long long _groundViewLocationId;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasGroundViewLocationId; 
@property (assign,nonatomic) unsigned long long groundViewLocationId; 
@property (nonatomic,retain) NSMutableArray * groundViewLabelInfos; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)groundViewLabelInfoType;
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
-(BOOL)hasGroundViewLocationId;
-(unsigned long long)groundViewLocationId;
-(NSMutableArray *)groundViewLabelInfos;
-(void)addGroundViewLabelInfo:(id)arg1 ;
-(unsigned long long)groundViewLabelInfosCount;
-(void)clearGroundViewLabelInfos;
-(id)groundViewLabelInfoAtIndex:(unsigned long long)arg1 ;
-(void)setGroundViewLocationId:(unsigned long long)arg1 ;
-(void)setHasGroundViewLocationId:(BOOL)arg1 ;
-(void)setGroundViewLabelInfos:(NSMutableArray *)arg1 ;
@end
