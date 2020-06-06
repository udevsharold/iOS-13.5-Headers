/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCPBSpotlightPair : PBCodable <NSCopying> {

	unsigned long long _spotlightHash;
	NSString* _workflowID;

}

@property (nonatomic,retain) NSString * workflowID;                         //@synthesize workflowID=_workflowID - In the implementation block
@property (assign,nonatomic) unsigned long long spotlightHash;              //@synthesize spotlightHash=_spotlightHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
-(unsigned long long)spotlightHash;
-(void)setSpotlightHash:(unsigned long long)arg1 ;
@end

