/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaDictationEndPointCancel : PBCodable {

	int _dictationEndPointType;

}

@property (assign,nonatomic) int dictationEndPointType;              //@synthesize dictationEndPointType=_dictationEndPointType - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDictationEndPointType:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(int)dictationEndPointType;
@end

