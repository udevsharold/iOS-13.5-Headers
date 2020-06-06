/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaPersonalization, NSData;

@interface SISchemaEnrolledUserState : PBCodable {

	NSString* _siriLinkedSpeechID;
	SISchemaPersonalization* _personalization;

}

@property (nonatomic,copy) NSString * siriLinkedSpeechID;                            //@synthesize siriLinkedSpeechID=_siriLinkedSpeechID - In the implementation block
@property (nonatomic,retain) SISchemaPersonalization * personalization;              //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaPersonalization *)personalization;
-(void)setPersonalization:(SISchemaPersonalization *)arg1 ;
-(void)setSiriLinkedSpeechID:(NSString *)arg1 ;
-(NSString *)siriLinkedSpeechID;
@end

