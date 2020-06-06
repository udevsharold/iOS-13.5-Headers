/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface GEOMapLayerDataServiceLayerIndex : PBCodable <NSCopying> {

	NSData* _index;

}

@property (nonatomic,readonly) BOOL hasIndex; 
@property (nonatomic,retain) NSData * index; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIndex:(NSData *)arg1 ;
-(BOOL)hasIndex;
-(void)readAll:(BOOL)arg1 ;
@end

