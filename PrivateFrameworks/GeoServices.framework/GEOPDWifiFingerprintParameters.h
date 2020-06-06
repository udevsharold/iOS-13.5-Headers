/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _measurements;
	unsigned _maxLabels;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * measurements; 
@property (assign,nonatomic) BOOL hasMaxLabels; 
@property (assign,nonatomic) unsigned maxLabels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)measurementType;
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
-(void)clearSensitiveFields;
-(void)addMeasurement:(id)arg1 ;
-(NSMutableArray *)measurements;
-(unsigned long long)measurementsCount;
-(void)clearMeasurements;
-(id)measurementAtIndex:(unsigned long long)arg1 ;
-(void)setMeasurements:(NSMutableArray *)arg1 ;
-(unsigned)maxLabels;
-(void)setMaxLabels:(unsigned)arg1 ;
-(void)setHasMaxLabels:(BOOL)arg1 ;
-(BOOL)hasMaxLabels;
@end

