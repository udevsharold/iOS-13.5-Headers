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

@interface NWAWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying> {

	unsigned long long _fallbackConnectionCount;
	unsigned long long _totalConnectionCount;
	unsigned long long _totalSuccessfulConnectionCount;
	SCD_Struct_NW12 _has;

}

@property (assign,nonatomic) BOOL hasTotalConnectionCount; 
@property (assign,nonatomic) unsigned long long totalConnectionCount;                        //@synthesize totalConnectionCount=_totalConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulConnectionCount; 
@property (assign,nonatomic) unsigned long long totalSuccessfulConnectionCount;              //@synthesize totalSuccessfulConnectionCount=_totalSuccessfulConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackConnectionCount; 
@property (assign,nonatomic) unsigned long long fallbackConnectionCount;                     //@synthesize fallbackConnectionCount=_fallbackConnectionCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTotalConnectionCount:(unsigned long long)arg1 ;
-(void)setHasTotalConnectionCount:(BOOL)arg1 ;
-(BOOL)hasTotalConnectionCount;
-(void)setTotalSuccessfulConnectionCount:(unsigned long long)arg1 ;
-(void)setHasTotalSuccessfulConnectionCount:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulConnectionCount;
-(void)setFallbackConnectionCount:(unsigned long long)arg1 ;
-(void)setHasFallbackConnectionCount:(BOOL)arg1 ;
-(BOOL)hasFallbackConnectionCount;
-(unsigned long long)totalConnectionCount;
-(unsigned long long)totalSuccessfulConnectionCount;
-(unsigned long long)fallbackConnectionCount;
@end
