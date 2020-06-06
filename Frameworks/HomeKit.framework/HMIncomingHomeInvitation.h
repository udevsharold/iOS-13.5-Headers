/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMUser, HMHomeManager, NSString, NSUUID;

@interface HMIncomingHomeInvitation : HMHomeInvitation {

	HMUser* _inviter;
	HMHomeManager* _homeManager;

}

@property (assign,nonatomic,__weak) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) HMUser * inviter;                              //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2 ;
+(id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)homeUUID;
-(NSString *)homeName;
-(HMHomeManager *)homeManager;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)initWithInvitationData:(id)arg1 homeManager:(id)arg2 ;
-(void)_acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__configureWithContext:(id)arg1 homeManager:(id)arg2 ;
-(void)acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMUser *)inviter;
@end

