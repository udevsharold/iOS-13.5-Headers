/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying> {

	NSString* _bundleIdentifier;
	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasUserPrivacySettings; 
@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasBundleIdentifier;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(BOOL)hasUserPrivacySettings;
-(CKDPUserPrivacySettings *)userPrivacySettings;
@end

