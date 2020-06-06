/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying> {

	NSMutableArray* _diffs;
	NSMutableArray* _names;

}

@property (nonatomic,retain) NSMutableArray * names;              //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * diffs;              //@synthesize diffs=_diffs - In the implementation block
+(Class)diffsType;
+(Class)namesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)names;
-(NSMutableArray *)diffs;
-(void)clearDiffs;
-(unsigned long long)namesCount;
-(void)clearNames;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)addDiffs:(id)arg1 ;
-(unsigned long long)diffsCount;
-(id)diffsAtIndex:(unsigned long long)arg1 ;
-(void)setDiffs:(NSMutableArray *)arg1 ;
-(void)addNames:(id)arg1 ;
-(id)namesAtIndex:(unsigned long long)arg1 ;
@end

