/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _category;
	int _formProperty;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasFormProperty; 
@property (assign,nonatomic) int formProperty;                          //@synthesize formProperty=_formProperty - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setFormProperty:(int)arg1 ;
-(int)formProperty;
-(void)setHasFormProperty:(BOOL)arg1 ;
-(BOOL)hasFormProperty;
-(id)formPropertyAsString:(int)arg1 ;
-(int)StringAsFormProperty:(id)arg1 ;
@end

