/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAbstractCommand.h>
@class _SFPBCommandValue, NSData;


@protocol _SFPBAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBCommandValue * value; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBCommandValue *)value;
-(void)setValue:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBCommandValue, NSData, NSString;

@interface _SFPBAbstractCommand : PBCodable <_SFPBAbstractCommand, NSSecureCoding> {

	int _type;
	_SFPBCommandValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBCommandValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBCommandValue *)value;
-(void)setValue:(_SFPBCommandValue *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

