/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDTransitTripGeometry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _tripStepIndexs;
	NSMutableArray* _tripLinks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_tripStepIndexs : 1;
		unsigned read_tripLinks : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_tripStepIndexs : 1;
		unsigned wrote_tripLinks : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * tripLinks; 
@property (nonatomic,readonly) unsigned long long tripStepIndexsCount; 
@property (nonatomic,readonly) unsigned* tripStepIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)transitTripGeometryForPlaceData:(id)arg1 ;
+(Class)tripLinkType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)tripLinks;
-(unsigned long long)tripLinksCount;
-(unsigned long long)tripStepIndexsCount;
-(unsigned)tripStepIndexAtIndex:(unsigned long long)arg1 ;
-(void)_readTripLinks;
-(void)_addNoFlagsTripLink:(id)arg1 ;
-(void)_readTripStepIndexs;
-(void)_addNoFlagsTripStepIndex:(unsigned)arg1 ;
-(void)clearTripLinks;
-(id)tripLinkAtIndex:(unsigned long long)arg1 ;
-(void)addTripLink:(id)arg1 ;
-(void)clearTripStepIndexs;
-(void)addTripStepIndex:(unsigned)arg1 ;
-(void)setTripLinks:(NSMutableArray *)arg1 ;
-(unsigned*)tripStepIndexs;
-(void)setTripStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

