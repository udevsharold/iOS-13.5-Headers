/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable <NSCopying> {

	BLTPBImage* _image;
	NSString* _title;
	BOOL _destructive;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) BLTPBImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL hasDestructive; 
@property (assign,nonatomic) BOOL destructive;                 //@synthesize destructive=_destructive - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BLTPBImage *)image;
-(void)setImage:(BLTPBImage *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)destructive;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(void)setHasDestructive:(BOOL)arg1 ;
-(BOOL)hasDestructive;
@end

