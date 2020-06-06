/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying> {

	int _failure;
	int _intent;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasIntent; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL hasFailure; 
@property (assign,nonatomic) int failure; 
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
-(int)intent;
-(void)setIntent:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasIntent:(BOOL)arg1 ;
-(BOOL)hasIntent;
-(id)intentAsString:(int)arg1 ;
-(int)StringAsIntent:(id)arg1 ;
-(int)failure;
-(void)setFailure:(int)arg1 ;
-(void)setHasFailure:(BOOL)arg1 ;
-(BOOL)hasFailure;
-(id)failureAsString:(int)arg1 ;
-(int)StringAsFailure:(id)arg1 ;
@end

