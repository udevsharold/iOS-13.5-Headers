/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SYVectorClock : PBCodable <NSCopying> {

	NSMutableArray* _clocks;

}

@property (nonatomic,retain) NSMutableArray * clocks;              //@synthesize clocks=_clocks - In the implementation block
+(void)initialize;
+(Class)clocksType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)clocks;
-(void)setClocks:(NSMutableArray *)arg1 ;
-(id)initWithJSONRepresentation:(id)arg1 ;
-(unsigned long long)clocksCount;
-(void)incrementClockForPeerID:(id)arg1 ;
-(BOOL)hasClockForPeer:(id)arg1 ;
-(id)clockForPeer:(id)arg1 ;
-(void)addClocks:(id)arg1 ;
-(unsigned long long)clockValueForPeerID:(id)arg1 ;
-(unsigned long long)clockValueForPeer:(id)arg1 ;
-(void)setClockValue:(unsigned long long)arg1 forPeer:(id)arg2 ;
-(void)increaseClockForPeerID:(id)arg1 by:(unsigned long long)arg2 ;
-(BOOL)_setTheory_isEqual:(id)arg1 ;
-(BOOL)hasClockForPeerID:(id)arg1 ;
-(id)clockForPeerID:(id)arg1 ;
-(void)setClockValue:(unsigned long long)arg1 forPeerID:(id)arg2 ;
-(id)compactDictionaryRepresentation;
-(void)increaseClockForPeer:(id)arg1 by:(unsigned long long)arg2 ;
-(void)incrementClockForPeer:(id)arg1 ;
-(void)clearClocks;
-(id)clocksAtIndex:(unsigned long long)arg1 ;
@end

