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

@class GEOMapsServerMetadata;

@interface GEOMapsNearbyWidget : PBCodable <NSCopying> {

	GEOMapsServerMetadata* _serverMetadata;
	int _tappedItemIndex;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,readonly) BOOL hasServerMetadata; 
@property (nonatomic,retain) GEOMapsServerMetadata * serverMetadata; 
@property (assign,nonatomic) BOOL hasTappedItemIndex; 
@property (assign,nonatomic) int tappedItemIndex; 
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
-(GEOMapsServerMetadata *)serverMetadata;
-(void)setServerMetadata:(GEOMapsServerMetadata *)arg1 ;
-(BOOL)hasServerMetadata;
-(int)tappedItemIndex;
-(void)setTappedItemIndex:(int)arg1 ;
-(void)setHasTappedItemIndex:(BOOL)arg1 ;
-(BOOL)hasTappedItemIndex;
@end

