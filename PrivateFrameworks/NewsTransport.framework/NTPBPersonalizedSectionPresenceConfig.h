/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAbsolutePersonalizedSectionPresenceConfig, NTPBRelativePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying> {

	NTPBAbsolutePersonalizedSectionPresenceConfig* _absoluteConfig;
	int _personalizationMethod;
	NTPBRelativePersonalizedSectionPresenceConfig* _relativeConfig;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasPersonalizationMethod; 
@property (assign,nonatomic) int personalizationMethod;                                                   //@synthesize personalizationMethod=_personalizationMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasRelativeConfig; 
@property (nonatomic,retain) NTPBRelativePersonalizedSectionPresenceConfig * relativeConfig;              //@synthesize relativeConfig=_relativeConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasAbsoluteConfig; 
@property (nonatomic,retain) NTPBAbsolutePersonalizedSectionPresenceConfig * absoluteConfig;              //@synthesize absoluteConfig=_absoluteConfig - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPersonalizationMethod:(int)arg1 ;
-(void)setAbsoluteConfig:(NTPBAbsolutePersonalizedSectionPresenceConfig *)arg1 ;
-(void)setRelativeConfig:(NTPBRelativePersonalizedSectionPresenceConfig *)arg1 ;
-(int)personalizationMethod;
-(void)setHasPersonalizationMethod:(BOOL)arg1 ;
-(BOOL)hasPersonalizationMethod;
-(BOOL)hasRelativeConfig;
-(BOOL)hasAbsoluteConfig;
-(NTPBRelativePersonalizedSectionPresenceConfig *)relativeConfig;
-(NTPBAbsolutePersonalizedSectionPresenceConfig *)absoluteConfig;
@end

