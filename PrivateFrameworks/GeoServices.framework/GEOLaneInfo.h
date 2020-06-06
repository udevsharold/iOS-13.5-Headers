/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOLaneInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _arrows;
	BOOL _hov;
	BOOL _preferredForMultipleManeuvers;
	BOOL _supportsManeuver;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasSupportsManeuver; 
@property (assign,nonatomic) BOOL supportsManeuver; 
@property (assign,nonatomic) BOOL hasPreferredForMultipleManeuvers; 
@property (assign,nonatomic) BOOL preferredForMultipleManeuvers; 
@property (assign,nonatomic) BOOL hasHov; 
@property (assign,nonatomic) BOOL hov; 
@property (nonatomic,retain) NSMutableArray * arrows; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)arrowType;
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
-(unsigned long long)arrowsCount;
-(id)arrowAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportsManeuver;
-(BOOL)hov;
-(BOOL)preferredForMultipleManeuvers;
-(void)addArrow:(id)arg1 ;
-(void)clearArrows;
-(NSMutableArray *)arrows;
-(void)setSupportsManeuver:(BOOL)arg1 ;
-(void)setHasSupportsManeuver:(BOOL)arg1 ;
-(BOOL)hasSupportsManeuver;
-(void)setPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(void)setHasPreferredForMultipleManeuvers:(BOOL)arg1 ;
-(BOOL)hasPreferredForMultipleManeuvers;
-(void)setHov:(BOOL)arg1 ;
-(void)setHasHov:(BOOL)arg1 ;
-(BOOL)hasHov;
-(void)setArrows:(NSMutableArray *)arg1 ;
@end

