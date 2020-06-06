/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying> {

	double _dateTimeInterval;
	NSData* _deviceIDBytes;
	int _switchIndex;
	SCD_Struct_NR4 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceIDBytes; 
@property (nonatomic,retain) NSData * deviceIDBytes;                //@synthesize deviceIDBytes=_deviceIDBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDateTimeInterval; 
@property (assign,nonatomic) double dateTimeInterval;               //@synthesize dateTimeInterval=_dateTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchIndex; 
@property (assign,nonatomic) int switchIndex;                       //@synthesize switchIndex=_switchIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)switchIndex;
-(void)setSwitchIndex:(int)arg1 ;
-(void)setDeviceIDBytes:(NSData *)arg1 ;
-(BOOL)hasDeviceIDBytes;
-(void)setDateTimeInterval:(double)arg1 ;
-(void)setHasDateTimeInterval:(BOOL)arg1 ;
-(BOOL)hasDateTimeInterval;
-(void)setHasSwitchIndex:(BOOL)arg1 ;
-(BOOL)hasSwitchIndex;
-(NSData *)deviceIDBytes;
-(double)dateTimeInterval;
@end

