/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable <NSCopying> {

	CKDPListPosition* _left;
	CKDPListPosition* _right;

}

@property (nonatomic,readonly) BOOL hasLeft; 
@property (nonatomic,retain) CKDPListPosition * left;               //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) BOOL hasRight; 
@property (nonatomic,retain) CKDPListPosition * right;              //@synthesize right=_right - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPListPosition *)left;
-(void)writeTo:(id)arg1 ;
-(void)setLeft:(CKDPListPosition *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPListPosition *)right;
-(void)setRight:(CKDPListPosition *)arg1 ;
-(BOOL)hasLeft;
-(BOOL)hasRight;
@end

