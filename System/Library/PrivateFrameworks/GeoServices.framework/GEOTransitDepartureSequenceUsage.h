/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _direction;
	NSString* _headsign;
	unsigned long long _lineId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineId : 1;
		unsigned read_direction : 1;
		unsigned read_headsign : 1;
		unsigned wrote_direction : 1;
		unsigned wrote_headsign : 1;
		unsigned wrote_lineId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (nonatomic,readonly) BOOL hasDirection; 
@property (nonatomic,retain) NSString * direction; 
@property (nonatomic,readonly) BOOL hasHeadsign; 
@property (nonatomic,retain) NSString * headsign; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)direction;
-(void)setDirection:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readHeadsign;
-(NSString *)headsign;
-(void)setHeadsign:(NSString *)arg1 ;
-(BOOL)hasHeadsign;
-(void)setLineId:(unsigned long long)arg1 ;
-(unsigned long long)lineId;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(BOOL)hasDirection;
-(void)_readDirection;
@end

