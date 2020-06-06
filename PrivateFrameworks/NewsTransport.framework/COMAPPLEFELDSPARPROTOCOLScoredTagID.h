/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLScoredTagID : PBCodable <NSCopying> {

	float _score;
	NSString* _tagId;

}

@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) float score;                   //@synthesize score=_score - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(float)score;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)tagId;
-(void)setTagId:(NSString *)arg1 ;
@end

