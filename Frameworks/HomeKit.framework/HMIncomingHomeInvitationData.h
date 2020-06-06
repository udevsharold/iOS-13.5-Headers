/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviterUserID;
	NSString* _homeName;
	NSUUID* _homeUUID;
	NSString* _inviterName;
	NSUUID* _inviterUUID;

}

@property (nonatomic,copy) NSString * inviterName;                     //@synthesize inviterName=_inviterName - In the implementation block
@property (nonatomic,readonly) NSString * inviterUserID;               //@synthesize inviterUserID=_inviterUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName;               //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * homeUUID;                 //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviterUUID;              //@synthesize inviterUUID=_inviterUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)homeUUID;
-(NSString *)homeName;
-(NSString *)inviterUserID;
-(NSString *)inviterName;
-(NSUUID *)inviterUUID;
-(id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 inviterName:(id)arg3 invitationState:(long long)arg4 homeName:(id)arg5 homeUUID:(id)arg6 expiryDate:(id)arg7 ;
-(void)setInviterName:(NSString *)arg1 ;
@end

