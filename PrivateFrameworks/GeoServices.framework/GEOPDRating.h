/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDRating : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _maxScore;
	double _score;
	int _numRatingsUsedForScore;
	int _ratingType;
	struct {
		unsigned has_maxScore : 1;
		unsigned has_score : 1;
		unsigned has_numRatingsUsedForScore : 1;
		unsigned has_ratingType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRatingType; 
@property (assign,nonatomic) int ratingType; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) BOOL hasMaxScore; 
@property (assign,nonatomic) double maxScore; 
@property (assign,nonatomic) BOOL hasNumRatingsUsedForScore; 
@property (assign,nonatomic) int numRatingsUsedForScore; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)ratingForPlaceData:(id)arg1 type:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(void)writeTo:(id)arg1 ;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)ratingType;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(BOOL)hasMaxScore;
-(int)numRatingsUsedForScore;
-(void)setRatingType:(int)arg1 ;
-(void)setHasRatingType:(BOOL)arg1 ;
-(BOOL)hasRatingType;
-(id)ratingTypeAsString:(int)arg1 ;
-(int)StringAsRatingType:(id)arg1 ;
-(void)setNumRatingsUsedForScore:(int)arg1 ;
-(void)setHasNumRatingsUsedForScore:(BOOL)arg1 ;
-(BOOL)hasNumRatingsUsedForScore;
@end

