/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2CNtoSGContactsCacheHit : PBCodable <NSCopying> {

	NSString* _key;
	BOOL _cacheHit;
	SCD_Struct_SG1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasCacheHit; 
@property (assign,nonatomic) BOOL cacheHit;                 //@synthesize cacheHit=_cacheHit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)cacheHit;
-(void)setCacheHit:(BOOL)arg1 ;
-(BOOL)hasCacheHit;
-(void)setHasCacheHit:(BOOL)arg1 ;
@end
