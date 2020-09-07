/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/HIDPlugins/PearlEventFilter.plugin/PearlEventFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PearlEventFilter/PearlEventFilter-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBiometricKitPrewarmCamera : PBCodable <NSCopying> {

	unsigned long long _machTimestampInMillisecond;
	long long _prewarmCameraEventSource;
	unsigned long long _timestamp;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPrewarmCameraEventSource; 
@property (assign,nonatomic) long long prewarmCameraEventSource;                         //@synthesize prewarmCameraEventSource=_prewarmCameraEventSource - In the implementation block
@property (assign,nonatomic) BOOL hasMachTimestampInMillisecond; 
@property (assign,nonatomic) unsigned long long machTimestampInMillisecond;              //@synthesize machTimestampInMillisecond=_machTimestampInMillisecond - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setPrewarmCameraEventSource:(long long)arg1 ;
-(void)setHasPrewarmCameraEventSource:(BOOL)arg1 ;
-(BOOL)hasPrewarmCameraEventSource;
-(void)setMachTimestampInMillisecond:(unsigned long long)arg1 ;
-(void)setHasMachTimestampInMillisecond:(BOOL)arg1 ;
-(BOOL)hasMachTimestampInMillisecond;
-(long long)prewarmCameraEventSource;
-(unsigned long long)machTimestampInMillisecond;
@end
