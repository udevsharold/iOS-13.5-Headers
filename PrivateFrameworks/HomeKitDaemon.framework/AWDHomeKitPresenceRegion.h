/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceRegion : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numPresenceAuthUsers;
	unsigned _numPresenceRegionValidUsers;
	unsigned _numUsers;
	BOOL _primaryResident;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumUsers; 
@property (assign,nonatomic) unsigned numUsers;                                 //@synthesize numUsers=_numUsers - In the implementation block
@property (assign,nonatomic) BOOL hasNumPresenceAuthUsers; 
@property (assign,nonatomic) unsigned numPresenceAuthUsers;                     //@synthesize numPresenceAuthUsers=_numPresenceAuthUsers - In the implementation block
@property (assign,nonatomic) BOOL hasNumPresenceRegionValidUsers; 
@property (assign,nonatomic) unsigned numPresenceRegionValidUsers;              //@synthesize numPresenceRegionValidUsers=_numPresenceRegionValidUsers - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryResident; 
@property (assign,nonatomic) BOOL primaryResident;                              //@synthesize primaryResident=_primaryResident - In the implementation block
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
-(unsigned)numUsers;
-(void)setNumUsers:(unsigned)arg1 ;
-(void)setNumPresenceAuthUsers:(unsigned)arg1 ;
-(void)setNumPresenceRegionValidUsers:(unsigned)arg1 ;
-(unsigned)numPresenceAuthUsers;
-(unsigned)numPresenceRegionValidUsers;
-(void)setPrimaryResident:(BOOL)arg1 ;
-(void)setHasNumUsers:(BOOL)arg1 ;
-(BOOL)hasNumUsers;
-(void)setHasNumPresenceAuthUsers:(BOOL)arg1 ;
-(BOOL)hasNumPresenceAuthUsers;
-(void)setHasNumPresenceRegionValidUsers:(BOOL)arg1 ;
-(BOOL)hasNumPresenceRegionValidUsers;
-(void)setHasPrimaryResident:(BOOL)arg1 ;
-(BOOL)hasPrimaryResident;
-(BOOL)primaryResident;
@end

