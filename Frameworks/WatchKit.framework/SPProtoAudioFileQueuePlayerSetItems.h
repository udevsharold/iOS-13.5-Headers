/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying> {

	NSString* _identifier;
	NSMutableArray* _playerItemIdentifiers;

}

@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * playerItemIdentifiers;              //@synthesize playerItemIdentifiers=_playerItemIdentifiers - In the implementation block
+(Class)playerItemIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addPlayerItemIdentifiers:(id)arg1 ;
-(unsigned long long)playerItemIdentifiersCount;
-(void)clearPlayerItemIdentifiers;
-(id)playerItemIdentifiersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)playerItemIdentifiers;
-(void)setPlayerItemIdentifiers:(NSMutableArray *)arg1 ;
-(id)sockPuppetMessage;
@end

