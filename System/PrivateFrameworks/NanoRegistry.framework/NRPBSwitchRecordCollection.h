/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBSwitchRecordCollection : PBCodable <NSCopying> {

	NSMutableArray* _records;

}

@property (nonatomic,retain) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
+(Class)recordsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)records;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
@end

