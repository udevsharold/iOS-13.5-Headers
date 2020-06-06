/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying> {

	NSMutableArray* _scores;

}

@property (nonatomic,retain) NSMutableArray * scores;              //@synthesize scores=_scores - In the implementation block
+(Class)scoresType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)scores;
-(void)setScores:(NSMutableArray *)arg1 ;
-(void)addScores:(id)arg1 ;
-(void)clearScores;
-(unsigned long long)scoresCount;
-(id)scoresAtIndex:(unsigned long long)arg1 ;
@end

