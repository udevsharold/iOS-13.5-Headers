/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {

	NSMutableArray* _responses;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * responses; 
+(BOOL)isValid:(id)arg1 ;
+(Class)responseType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)addResponse:(id)arg1 ;
-(NSMutableArray *)responses;
-(unsigned long long)responsesCount;
-(void)clearResponses;
-(id)responseAtIndex:(unsigned long long)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)setResponses:(NSMutableArray *)arg1 ;
@end

