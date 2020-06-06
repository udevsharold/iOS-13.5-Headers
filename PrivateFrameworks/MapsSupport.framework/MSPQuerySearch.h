/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOMapRegion;

@interface MSPQuerySearch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _language;
	NSString* _locationDisplayString;
	GEOMapRegion* _mapRegion;
	NSString* _query;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationDisplayString; 
@property (nonatomic,retain) NSString * locationDisplayString;               //@synthesize locationDisplayString=_locationDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(BOOL)hasQuery;
-(BOOL)hasLanguage;
-(NSString *)locationDisplayString;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(BOOL)hasLocationDisplayString;
@end

