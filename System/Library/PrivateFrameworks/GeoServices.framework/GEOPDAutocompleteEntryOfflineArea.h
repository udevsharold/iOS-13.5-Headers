/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryOfflineArea : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _featureId;
	BOOL _availableForDownload;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (assign,nonatomic) BOOL hasAvailableForDownload; 
@property (assign,nonatomic) BOOL availableForDownload; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)featureId;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(BOOL)availableForDownload;
-(void)setAvailableForDownload:(BOOL)arg1 ;
-(void)setHasAvailableForDownload:(BOOL)arg1 ;
-(BOOL)hasAvailableForDownload;
@end
