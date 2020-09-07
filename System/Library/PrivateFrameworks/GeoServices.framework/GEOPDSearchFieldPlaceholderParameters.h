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

@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _version;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(id)versionAsString:(int)arg1 ;
-(int)StringAsVersion:(id)arg1 ;
@end
