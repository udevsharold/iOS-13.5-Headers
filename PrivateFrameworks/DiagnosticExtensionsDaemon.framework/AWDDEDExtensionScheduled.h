/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDDEDExtensionScheduled : PBCodable <NSCopying> {

	unsigned long long _delay;
	unsigned long long _timestamp;
	NSString* _extension;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) NSString * extension;                      //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) unsigned long long delay;                  //@synthesize delay=_delay - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)delay;
-(void)setDelay:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(BOOL)hasExtension;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasDelay:(BOOL)arg1 ;
-(BOOL)hasDelay;
@end

