/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventPlaceDataCache : PBCodable <NSCopying> {

	NSString* _placeDataRequestingAppIdentifier;

}

@property (nonatomic,readonly) BOOL hasPlaceDataRequestingAppIdentifier; 
@property (nonatomic,retain) NSString * placeDataRequestingAppIdentifier; 
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
-(NSString *)placeDataRequestingAppIdentifier;
-(void)setPlaceDataRequestingAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasPlaceDataRequestingAppIdentifier;
@end

