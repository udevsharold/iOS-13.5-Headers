/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPhoto, NSString;

@interface GEOPDPictureItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPhoto* _photo;
	NSString* _primaryText;
	NSString* _secondaryText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _photoItemType;
	struct {
		unsigned has_photoItemType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_photo : 1;
		unsigned read_primaryText : 1;
		unsigned read_secondaryText : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_photo : 1;
		unsigned wrote_primaryText : 1;
		unsigned wrote_secondaryText : 1;
		unsigned wrote_photoItemType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (nonatomic,readonly) BOOL hasPrimaryText; 
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,readonly) BOOL hasSecondaryText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (assign,nonatomic) BOOL hasPhotoItemType; 
@property (assign,nonatomic) int photoItemType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(BOOL)hasPrimaryText;
-(GEOPDPhoto *)photo;
-(BOOL)hasPhoto;
-(void)_readPhoto;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(void)_readPrimaryText;
-(void)_readSecondaryText;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(BOOL)hasSecondaryText;
-(int)photoItemType;
-(void)setPhotoItemType:(int)arg1 ;
-(void)setHasPhotoItemType:(BOOL)arg1 ;
-(BOOL)hasPhotoItemType;
-(id)photoItemTypeAsString:(int)arg1 ;
-(int)StringAsPhotoItemType:(id)arg1 ;
@end

