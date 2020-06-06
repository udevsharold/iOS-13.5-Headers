/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDSiriSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _disambiguationLabels;
	NSMutableArray* _resultDetourInfos;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isChainResultSet;
	struct {
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_disambiguationLabels : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_disambiguationLabels : 1;
		unsigned wrote_resultDetourInfos : 1;
		unsigned wrote_isChainResultSet : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * disambiguationLabels; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)disambiguationLabelType;
+(Class)resultDetourInfoType;
-(id)init;
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
-(void)_readDisambiguationLabels;
-(void)_addNoFlagsDisambiguationLabel:(id)arg1 ;
-(void)_readResultDetourInfos;
-(void)_addNoFlagsResultDetourInfo:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)resultDetourInfosCount;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(NSMutableArray *)resultDetourInfos;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(BOOL)isChainResultSet;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(void)setResultDetourInfos:(NSMutableArray *)arg1 ;
@end

