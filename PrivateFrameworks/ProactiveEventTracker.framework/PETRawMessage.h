/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PETRawMessage : PBCodable <NSCopying> {

	NSString* _name;
	NSData* _rawBytes;
	unsigned _typeId;
	SCD_Struct_PE7 _has;

}

@property (assign,nonatomic) BOOL hasTypeId; 
@property (assign,nonatomic) unsigned typeId;                 //@synthesize typeId=_typeId - In the implementation block
@property (nonatomic,readonly) BOOL hasRawBytes; 
@property (nonatomic,retain) NSData * rawBytes;               //@synthesize rawBytes=_rawBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSData *)rawBytes;
-(void)setTypeId:(unsigned)arg1 ;
-(void)setHasTypeId:(BOOL)arg1 ;
-(BOOL)hasTypeId;
-(BOOL)hasRawBytes;
-(unsigned)typeId;
-(void)setRawBytes:(NSData *)arg1 ;
@end

