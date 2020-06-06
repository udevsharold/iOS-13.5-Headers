/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityHistogramBin : PBCodable <NSCopying> {

	unsigned long long _hits;
	NSString* _bin;
	SCD_Struct_Wi1 _has;

}

@property (nonatomic,readonly) BOOL hasBin; 
@property (nonatomic,retain) NSString * bin;                       //@synthesize bin=_bin - In the implementation block
@property (assign,nonatomic) BOOL hasHits; 
@property (assign,nonatomic) unsigned long long hits;              //@synthesize hits=_hits - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)hits;
-(void)setBin:(NSString *)arg1 ;
-(BOOL)hasBin;
-(void)setHits:(unsigned long long)arg1 ;
-(void)setHasHits:(BOOL)arg1 ;
-(BOOL)hasHits;
-(NSString *)bin;
@end

