/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _concatenatingFormatStringsSupported;
	BOOL _styleSupported;
	BOOL _timestampFormatPatternSupported;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasConcatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL concatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL hasTimestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL timestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL hasStyleSupported; 
@property (assign,nonatomic) BOOL styleSupported; 
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
-(void)setConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(void)setTimestampFormatPatternSupported:(BOOL)arg1 ;
-(void)setStyleSupported:(BOOL)arg1 ;
-(BOOL)concatenatingFormatStringsSupported;
-(void)setHasConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(BOOL)hasConcatenatingFormatStringsSupported;
-(BOOL)timestampFormatPatternSupported;
-(void)setHasTimestampFormatPatternSupported:(BOOL)arg1 ;
-(BOOL)hasTimestampFormatPatternSupported;
-(BOOL)styleSupported;
-(void)setHasStyleSupported:(BOOL)arg1 ;
-(BOOL)hasStyleSupported;
@end

