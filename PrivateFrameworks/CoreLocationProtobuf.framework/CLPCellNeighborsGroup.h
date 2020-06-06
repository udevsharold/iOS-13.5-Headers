/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable <NSCopying> {

	NSMutableArray* _cdmaNeighbors;
	NSMutableArray* _gsmNeighbors;
	NSMutableArray* _lteNeighbors;
	NSMutableArray* _scdmaNeighbors;

}

@property (nonatomic,retain) NSMutableArray * gsmNeighbors;                //@synthesize gsmNeighbors=_gsmNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * scdmaNeighbors;              //@synthesize scdmaNeighbors=_scdmaNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdmaNeighbors;               //@synthesize cdmaNeighbors=_cdmaNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * lteNeighbors;                //@synthesize lteNeighbors=_lteNeighbors - In the implementation block
+(Class)gsmNeighborsType;
+(Class)scdmaNeighborsType;
+(Class)cdmaNeighborsType;
+(Class)lteNeighborsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addGsmNeighbors:(id)arg1 ;
-(void)addScdmaNeighbors:(id)arg1 ;
-(void)addCdmaNeighbors:(id)arg1 ;
-(void)addLteNeighbors:(id)arg1 ;
-(unsigned long long)gsmNeighborsCount;
-(void)clearGsmNeighbors;
-(id)gsmNeighborsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)scdmaNeighborsCount;
-(void)clearScdmaNeighbors;
-(id)scdmaNeighborsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cdmaNeighborsCount;
-(void)clearCdmaNeighbors;
-(id)cdmaNeighborsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lteNeighborsCount;
-(void)clearLteNeighbors;
-(id)lteNeighborsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)gsmNeighbors;
-(void)setGsmNeighbors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)scdmaNeighbors;
-(void)setScdmaNeighbors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cdmaNeighbors;
-(void)setCdmaNeighbors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lteNeighbors;
-(void)setLteNeighbors:(NSMutableArray *)arg1 ;
@end

