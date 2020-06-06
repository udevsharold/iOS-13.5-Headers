/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMNoteInvitationShareRelationship : FATObject {

	NSString* _displayName;
	NSNumber* _recipientIdentityId;
	NSNumber* _privilege;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * recipientIdentityId;              //@synthesize recipientIdentityId=_recipientIdentityId - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                        //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                     //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientIdentityId;
-(void)setRecipientIdentityId:(NSNumber *)arg1 ;
@end
