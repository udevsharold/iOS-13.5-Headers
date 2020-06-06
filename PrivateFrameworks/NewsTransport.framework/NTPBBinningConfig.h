/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBBinningConfig : PBCodable <NSCopying> {

	double _decreaseConsumptionThreshold;
	long long _evaluationFrequency;
	long long _historyLength;
	double _increaseConsumptionThreshold;
	long long _minimumArticleCount;
	int _defaultChannelBin;
	int _defaultTopicBin;
	BOOL _enabled;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationFrequency; 
@property (assign,nonatomic) long long evaluationFrequency;                     //@synthesize evaluationFrequency=_evaluationFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasHistoryLength; 
@property (assign,nonatomic) long long historyLength;                           //@synthesize historyLength=_historyLength - In the implementation block
@property (assign,nonatomic) BOOL hasIncreaseConsumptionThreshold; 
@property (assign,nonatomic) double increaseConsumptionThreshold;               //@synthesize increaseConsumptionThreshold=_increaseConsumptionThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasDecreaseConsumptionThreshold; 
@property (assign,nonatomic) double decreaseConsumptionThreshold;               //@synthesize decreaseConsumptionThreshold=_decreaseConsumptionThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumArticleCount; 
@property (assign,nonatomic) long long minimumArticleCount;                     //@synthesize minimumArticleCount=_minimumArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultTopicBin; 
@property (assign,nonatomic) int defaultTopicBin;                               //@synthesize defaultTopicBin=_defaultTopicBin - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultChannelBin; 
@property (assign,nonatomic) int defaultChannelBin;                             //@synthesize defaultChannelBin=_defaultChannelBin - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(void)setEvaluationFrequency:(long long)arg1 ;
-(void)setHasEvaluationFrequency:(BOOL)arg1 ;
-(BOOL)hasEvaluationFrequency;
-(void)setHistoryLength:(long long)arg1 ;
-(void)setHasHistoryLength:(BOOL)arg1 ;
-(BOOL)hasHistoryLength;
-(void)setIncreaseConsumptionThreshold:(double)arg1 ;
-(void)setHasIncreaseConsumptionThreshold:(BOOL)arg1 ;
-(BOOL)hasIncreaseConsumptionThreshold;
-(void)setDecreaseConsumptionThreshold:(double)arg1 ;
-(void)setHasDecreaseConsumptionThreshold:(BOOL)arg1 ;
-(BOOL)hasDecreaseConsumptionThreshold;
-(void)setMinimumArticleCount:(long long)arg1 ;
-(void)setHasMinimumArticleCount:(BOOL)arg1 ;
-(BOOL)hasMinimumArticleCount;
-(int)defaultTopicBin;
-(void)setDefaultTopicBin:(int)arg1 ;
-(void)setHasDefaultTopicBin:(BOOL)arg1 ;
-(BOOL)hasDefaultTopicBin;
-(int)defaultChannelBin;
-(void)setDefaultChannelBin:(int)arg1 ;
-(void)setHasDefaultChannelBin:(BOOL)arg1 ;
-(BOOL)hasDefaultChannelBin;
-(long long)evaluationFrequency;
-(long long)historyLength;
-(double)increaseConsumptionThreshold;
-(double)decreaseConsumptionThreshold;
-(long long)minimumArticleCount;
@end

