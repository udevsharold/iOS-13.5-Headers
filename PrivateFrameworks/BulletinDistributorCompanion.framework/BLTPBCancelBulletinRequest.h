/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying> {

	double _date;
	unsigned _feed;
	NSString* _publisherMatchID;
	NSString* _universalSectionID;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) BOOL hasUniversalSectionID; 
@property (nonatomic,retain) NSString * universalSectionID;              //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (assign,nonatomic) BOOL hasFeed; 
@property (assign,nonatomic) unsigned feed;                              //@synthesize feed=_feed - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                //@synthesize date=_date - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(unsigned)feed;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(NSString *)publisherMatchID;
-(void)setFeed:(unsigned)arg1 ;
-(BOOL)hasUniversalSectionID;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(BOOL)hasPublisherMatchID;
-(void)setHasFeed:(BOOL)arg1 ;
-(BOOL)hasFeed;
@end

