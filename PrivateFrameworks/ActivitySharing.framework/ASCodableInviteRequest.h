/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCodableActivityDataPreview, NSString;

@interface ASCodableInviteRequest : PBRequest <NSCopying> {

	ASCodableActivityDataPreview* _activityDataPreview;
	NSString* _handshakeToken;
	NSString* _inviterBuildNumber;
	NSString* _inviterCallerID;
	NSString* _inviterCloudKitAddress;
	unsigned _inviterVersion;
	SCD_Struct_AS1 _has;

}

@property (nonatomic,readonly) BOOL hasHandshakeToken; 
@property (nonatomic,retain) NSString * handshakeToken;                                       //@synthesize handshakeToken=_handshakeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterCloudKitAddress; 
@property (nonatomic,retain) NSString * inviterCloudKitAddress;                               //@synthesize inviterCloudKitAddress=_inviterCloudKitAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterCallerID; 
@property (nonatomic,retain) NSString * inviterCallerID;                                      //@synthesize inviterCallerID=_inviterCallerID - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterBuildNumber; 
@property (nonatomic,retain) NSString * inviterBuildNumber;                                   //@synthesize inviterBuildNumber=_inviterBuildNumber - In the implementation block
@property (assign,nonatomic) BOOL hasInviterVersion; 
@property (assign,nonatomic) unsigned inviterVersion;                                         //@synthesize inviterVersion=_inviterVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityDataPreview; 
@property (nonatomic,retain) ASCodableActivityDataPreview * activityDataPreview;              //@synthesize activityDataPreview=_activityDataPreview - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHandshakeToken:(NSString *)arg1 ;
-(BOOL)hasHandshakeToken;
-(NSString *)handshakeToken;
-(void)setActivityDataPreview:(ASCodableActivityDataPreview *)arg1 ;
-(BOOL)hasActivityDataPreview;
-(ASCodableActivityDataPreview *)activityDataPreview;
-(void)setInviterCloudKitAddress:(NSString *)arg1 ;
-(void)setInviterCallerID:(NSString *)arg1 ;
-(void)setInviterBuildNumber:(NSString *)arg1 ;
-(BOOL)hasInviterCloudKitAddress;
-(BOOL)hasInviterCallerID;
-(BOOL)hasInviterBuildNumber;
-(void)setInviterVersion:(unsigned)arg1 ;
-(void)setHasInviterVersion:(BOOL)arg1 ;
-(BOOL)hasInviterVersion;
-(NSString *)inviterCloudKitAddress;
-(NSString *)inviterCallerID;
-(NSString *)inviterBuildNumber;
-(unsigned)inviterVersion;
@end

