/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {

	int _spokenGuidanceIndex;
	BOOL _shortPrompt;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasSpokenGuidanceIndex; 
@property (assign,nonatomic) int spokenGuidanceIndex; 
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt; 
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
-(int)spokenGuidanceIndex;
-(void)setSpokenGuidanceIndex:(int)arg1 ;
-(void)setHasSpokenGuidanceIndex:(BOOL)arg1 ;
-(BOOL)hasSpokenGuidanceIndex;
-(BOOL)shortPrompt;
-(void)setShortPrompt:(BOOL)arg1 ;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasShortPrompt;
@end

