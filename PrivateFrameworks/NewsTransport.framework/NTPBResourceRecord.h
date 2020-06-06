/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString;

@interface NTPBResourceRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _encoding;
	NSString* _mimeType;
	NSString* _url;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;              //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasMimeType; 
@property (nonatomic,retain) NSString * mimeType;                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) BOOL hasEncoding; 
@property (nonatomic,retain) NSString * encoding;                //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                     //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(NSString *)encoding;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(BOOL)hasUrl;
-(void)setEncoding:(NSString *)arg1 ;
-(BOOL)hasBase;
-(BOOL)hasMimeType;
-(BOOL)hasEncoding;
@end

