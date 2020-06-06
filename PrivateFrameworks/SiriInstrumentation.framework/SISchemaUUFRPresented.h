/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaViewContainer, NSString, NSData;

@interface SISchemaUUFRPresented : PBCodable {

	int _errorCode;
	SISchemaViewContainer* _viewContainer;
	NSString* _errorDomain;

}

@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
@end

