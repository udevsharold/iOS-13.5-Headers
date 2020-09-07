/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewData : PBCodable <NSCopying> {

	NSData* _issueViewingSessionId;

}

@property (nonatomic,readonly) BOOL hasIssueViewingSessionId; 
@property (nonatomic,retain) NSData * issueViewingSessionId;               //@synthesize issueViewingSessionId=_issueViewingSessionId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIssueViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasIssueViewingSessionId;
-(NSData *)issueViewingSessionId;
@end
