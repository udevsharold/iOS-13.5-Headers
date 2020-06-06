/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsDNSTotalFailure : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dnsServers;
	int _networkType;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                           //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasDnsServers; 
@property (assign,nonatomic) unsigned dnsServers;                       //@synthesize dnsServers=_dnsServers - In the implementation block
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
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)dnsServers;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setDnsServers:(unsigned)arg1 ;
-(void)setHasDnsServers:(BOOL)arg1 ;
-(BOOL)hasDnsServers;
@end

