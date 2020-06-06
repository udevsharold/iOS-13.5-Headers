/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying> {

	NSData* _restrictions;
	BOOL _wristDetectionDisabled;
	SCD_Struct_PB2 _has;

}

@property (nonatomic,retain) NSData * restrictions;                       //@synthesize restrictions=_restrictions - In the implementation block
@property (assign,nonatomic) BOOL hasWristDetectionDisabled; 
@property (assign,nonatomic) BOOL wristDetectionDisabled;                 //@synthesize wristDetectionDisabled=_wristDetectionDisabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)restrictions;
-(void)setRestrictions:(NSData *)arg1 ;
-(void)setWristDetectionDisabled:(BOOL)arg1 ;
-(void)setHasWristDetectionDisabled:(BOOL)arg1 ;
-(BOOL)hasWristDetectionDisabled;
-(BOOL)wristDetectionDisabled;
@end

