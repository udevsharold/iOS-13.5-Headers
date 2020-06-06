/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying> {

	unsigned long long _metricItemSize;
	unsigned _metricItemCount;
	unsigned _metricItemIdHash;
	unsigned _metricItemQueueTime;
	unsigned _metricItemRetryCount;
	int _metricItemType;
	struct {
		unsigned has_metricItemSize : 1;
		unsigned has_metricItemCount : 1;
		unsigned has_metricItemIdHash : 1;
		unsigned has_metricItemQueueTime : 1;
		unsigned has_metricItemRetryCount : 1;
		unsigned has_metricItemType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMetricItemType; 
@property (assign,nonatomic) int metricItemType; 
@property (assign,nonatomic) BOOL hasMetricItemCount; 
@property (assign,nonatomic) unsigned metricItemCount; 
@property (assign,nonatomic) BOOL hasMetricItemRetryCount; 
@property (assign,nonatomic) unsigned metricItemRetryCount; 
@property (assign,nonatomic) BOOL hasMetricItemSize; 
@property (assign,nonatomic) unsigned long long metricItemSize; 
@property (assign,nonatomic) BOOL hasMetricItemQueueTime; 
@property (assign,nonatomic) unsigned metricItemQueueTime; 
@property (assign,nonatomic) BOOL hasMetricItemIdHash; 
@property (assign,nonatomic) unsigned metricItemIdHash; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)metricItemType;
-(void)setMetricItemType:(int)arg1 ;
-(void)setHasMetricItemType:(BOOL)arg1 ;
-(BOOL)hasMetricItemType;
-(id)metricItemTypeAsString:(int)arg1 ;
-(int)StringAsMetricItemType:(id)arg1 ;
-(unsigned)metricItemCount;
-(void)setMetricItemCount:(unsigned)arg1 ;
-(void)setHasMetricItemCount:(BOOL)arg1 ;
-(BOOL)hasMetricItemCount;
-(unsigned)metricItemRetryCount;
-(void)setMetricItemRetryCount:(unsigned)arg1 ;
-(void)setHasMetricItemRetryCount:(BOOL)arg1 ;
-(BOOL)hasMetricItemRetryCount;
-(unsigned long long)metricItemSize;
-(void)setMetricItemSize:(unsigned long long)arg1 ;
-(void)setHasMetricItemSize:(BOOL)arg1 ;
-(BOOL)hasMetricItemSize;
-(unsigned)metricItemQueueTime;
-(void)setMetricItemQueueTime:(unsigned)arg1 ;
-(void)setHasMetricItemQueueTime:(BOOL)arg1 ;
-(BOOL)hasMetricItemQueueTime;
-(unsigned)metricItemIdHash;
-(void)setMetricItemIdHash:(unsigned)arg1 ;
-(void)setHasMetricItemIdHash:(BOOL)arg1 ;
-(BOOL)hasMetricItemIdHash;
@end

