/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _switchCount;
	NSString* _switchFromInterfaceName;
	NSString* _switchToInterfaceName;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchFromInterfaceName; 
@property (nonatomic,retain) NSString * switchFromInterfaceName;              //@synthesize switchFromInterfaceName=_switchFromInterfaceName - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchToInterfaceName; 
@property (nonatomic,retain) NSString * switchToInterfaceName;                //@synthesize switchToInterfaceName=_switchToInterfaceName - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchCount; 
@property (assign,nonatomic) int switchCount;                                 //@synthesize switchCount=_switchCount - In the implementation block
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
-(BOOL)hasSwitchFromInterfaceName;
-(BOOL)hasSwitchToInterfaceName;
-(void)setSwitchCount:(int)arg1 ;
-(void)setHasSwitchCount:(BOOL)arg1 ;
-(BOOL)hasSwitchCount;
-(NSString *)switchFromInterfaceName;
-(void)setSwitchFromInterfaceName:(NSString *)arg1 ;
-(NSString *)switchToInterfaceName;
-(void)setSwitchToInterfaceName:(NSString *)arg1 ;
-(int)switchCount;
@end
