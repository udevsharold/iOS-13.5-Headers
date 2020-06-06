/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTFCompactRoadSpeeds : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE77* _geoIds;
	NSData* _openlr;
	NSMutableArray* _predictedSpeeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _color;
	float _confidence;
	unsigned _decayTimeWindowInMinutes;
	float _endOffset;
	unsigned _speedKph;
	float _startOffset;
	BOOL _hidden;
	struct {
		unsigned has_color : 1;
		unsigned has_confidence : 1;
		unsigned has_decayTimeWindowInMinutes : 1;
		unsigned has_endOffset : 1;
		unsigned has_speedKph : 1;
		unsigned has_startOffset : 1;
		unsigned has_hidden : 1;
		unsigned read_geoIds : 1;
		unsigned read_openlr : 1;
		unsigned read_predictedSpeeds : 1;
		unsigned wrote_geoIds : 1;
		unsigned wrote_openlr : 1;
		unsigned wrote_predictedSpeeds : 1;
		unsigned wrote_color : 1;
		unsigned wrote_confidence : 1;
		unsigned wrote_decayTimeWindowInMinutes : 1;
		unsigned wrote_endOffset : 1;
		unsigned wrote_speedKph : 1;
		unsigned wrote_startOffset : 1;
		unsigned wrote_hidden : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset; 
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,retain) NSMutableArray * predictedSpeeds; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) unsigned speedKph; 
@property (assign,nonatomic) BOOL hasDecayTimeWindowInMinutes; 
@property (assign,nonatomic) unsigned decayTimeWindowInMinutes; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) float confidence; 
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
+(BOOL)isValid:(id)arg1 ;
+(Class)predictedSpeedType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(float)confidence;
-(void)writeTo:(id)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(float)startOffset;
-(float)endOffset;
-(BOOL)hidden;
-(void)setStartOffset:(float)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasColor;
-(void)_readGeoIds;
-(void)_addNoFlagsGeoIds:(long long)arg1 ;
-(void)_readPredictedSpeeds;
-(void)_addNoFlagsPredictedSpeed:(id)arg1 ;
-(void)_readOpenlr;
-(NSData *)openlr;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long)geoIdsAtIndex:(unsigned long long)arg1 ;
-(void)addGeoIds:(long long)arg1 ;
-(unsigned long long)predictedSpeedsCount;
-(void)clearPredictedSpeeds;
-(id)predictedSpeedAtIndex:(unsigned long long)arg1 ;
-(void)addPredictedSpeed:(id)arg1 ;
-(void)setOpenlr:(NSData *)arg1 ;
-(long long*)geoIds;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setEndOffset:(float)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(NSMutableArray *)predictedSpeeds;
-(void)setPredictedSpeeds:(NSMutableArray *)arg1 ;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(unsigned)speedKph;
-(void)setSpeedKph:(unsigned)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(unsigned)decayTimeWindowInMinutes;
-(void)setDecayTimeWindowInMinutes:(unsigned)arg1 ;
-(void)setHasDecayTimeWindowInMinutes:(BOOL)arg1 ;
-(BOOL)hasDecayTimeWindowInMinutes;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasOpenlr;
@end

