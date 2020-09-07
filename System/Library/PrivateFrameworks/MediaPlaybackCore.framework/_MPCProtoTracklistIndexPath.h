/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {

	long long _containerIndex;
	long long _itemIndex;
	SCD_Struct_MP22 _has;

}

@property (assign,nonatomic) BOOL hasContainerIndex; 
@property (assign,nonatomic) long long containerIndex;              //@synthesize containerIndex=_containerIndex - In the implementation block
@property (assign,nonatomic) BOOL hasItemIndex; 
@property (assign,nonatomic) long long itemIndex;                   //@synthesize itemIndex=_itemIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)itemIndex;
-(void)setItemIndex:(long long)arg1 ;
-(void)setContainerIndex:(long long)arg1 ;
-(void)setHasContainerIndex:(BOOL)arg1 ;
-(BOOL)hasContainerIndex;
-(void)setHasItemIndex:(BOOL)arg1 ;
-(BOOL)hasItemIndex;
-(long long)containerIndex;
@end
