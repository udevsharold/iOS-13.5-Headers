/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDResultSnippetFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _supportedChildActions;
	int _maxChildItems;
	int _maxChildPlaces;
	BOOL _supportChildItems;
	struct {
		unsigned has_maxChildItems : 1;
		unsigned has_maxChildPlaces : 1;
		unsigned has_supportChildItems : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxChildPlaces; 
@property (assign,nonatomic) int maxChildPlaces; 
@property (assign,nonatomic) BOOL hasSupportChildItems; 
@property (assign,nonatomic) BOOL supportChildItems; 
@property (assign,nonatomic) BOOL hasMaxChildItems; 
@property (assign,nonatomic) int maxChildItems; 
@property (nonatomic,readonly) unsigned long long supportedChildActionsCount; 
@property (nonatomic,readonly) int* supportedChildActions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
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
-(unsigned long long)supportedChildActionsCount;
-(void)clearSupportedChildActions;
-(int)supportedChildActionAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedChildAction:(int)arg1 ;
-(int)maxChildPlaces;
-(void)setMaxChildPlaces:(int)arg1 ;
-(void)setHasMaxChildPlaces:(BOOL)arg1 ;
-(BOOL)hasMaxChildPlaces;
-(BOOL)supportChildItems;
-(void)setSupportChildItems:(BOOL)arg1 ;
-(void)setHasSupportChildItems:(BOOL)arg1 ;
-(BOOL)hasSupportChildItems;
-(int)maxChildItems;
-(void)setMaxChildItems:(int)arg1 ;
-(void)setHasMaxChildItems:(BOOL)arg1 ;
-(BOOL)hasMaxChildItems;
-(int*)supportedChildActions;
-(void)setSupportedChildActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedChildActionsAsString:(int)arg1 ;
-(int)StringAsSupportedChildActions:(id)arg1 ;
@end

