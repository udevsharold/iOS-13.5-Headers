/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPerRouteInfo : PBCodable <NSCopying> {

	GEOSessionID _routeUuid;
	unsigned long long _etaServiceTravelTime;
	unsigned long long _originalTravelTime;
	struct {
		unsigned has_routeUuid : 1;
		unsigned has_etaServiceTravelTime : 1;
		unsigned has_originalTravelTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOriginalTravelTime; 
@property (assign,nonatomic) unsigned long long originalTravelTime; 
@property (assign,nonatomic) BOOL hasEtaServiceTravelTime; 
@property (assign,nonatomic) unsigned long long etaServiceTravelTime; 
@property (assign,nonatomic) BOOL hasRouteUuid; 
@property (assign,nonatomic) GEOSessionID routeUuid; 
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
-(unsigned long long)originalTravelTime;
-(void)setOriginalTravelTime:(unsigned long long)arg1 ;
-(void)setHasOriginalTravelTime:(BOOL)arg1 ;
-(BOOL)hasOriginalTravelTime;
-(unsigned long long)etaServiceTravelTime;
-(void)setEtaServiceTravelTime:(unsigned long long)arg1 ;
-(void)setHasEtaServiceTravelTime:(BOOL)arg1 ;
-(BOOL)hasEtaServiceTravelTime;
-(GEOSessionID)routeUuid;
-(void)setRouteUuid:(GEOSessionID)arg1 ;
-(void)setHasRouteUuid:(BOOL)arg1 ;
-(BOOL)hasRouteUuid;
@end
