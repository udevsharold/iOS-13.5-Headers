/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying> {

	SCD_Struct_NT9* _groupTypes;
	NSString* _personalizationSectionIdentifier;

}

@property (nonatomic,retain) NSString * personalizationSectionIdentifier;              //@synthesize personalizationSectionIdentifier=_personalizationSectionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long groupTypesCount; 
@property (nonatomic,readonly) int* groupTypes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)groupTypesCount;
-(int)groupTypesAtIndex:(unsigned long long)arg1 ;
-(NSString *)personalizationSectionIdentifier;
-(void)setPersonalizationSectionIdentifier:(NSString *)arg1 ;
-(void)addGroupTypes:(int)arg1 ;
-(int*)groupTypes;
-(void)clearGroupTypes;
-(void)setGroupTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)groupTypesAsString:(int)arg1 ;
-(int)StringAsGroupTypes:(id)arg1 ;
@end

