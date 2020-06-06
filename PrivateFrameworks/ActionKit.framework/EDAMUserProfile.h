/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:41 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, EDAMBusinessUserAttributes;

@interface EDAMUserProfile : FATObject {

	NSNumber* _id;
	NSString* _name;
	NSString* _email;
	NSString* _username;
	EDAMBusinessUserAttributes* _attributes;
	NSNumber* _joined;
	NSNumber* _photoLastUpdated;
	NSString* _photoUrl;
	NSNumber* _role;

}

@property (nonatomic,retain) NSNumber * id;                                        //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * email;                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * username;                                  //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) EDAMBusinessUserAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSNumber * joined;                                    //@synthesize joined=_joined - In the implementation block
@property (nonatomic,retain) NSNumber * photoLastUpdated;                          //@synthesize photoLastUpdated=_photoLastUpdated - In the implementation block
@property (nonatomic,retain) NSString * photoUrl;                                  //@synthesize photoUrl=_photoUrl - In the implementation block
@property (nonatomic,retain) NSNumber * role;                                      //@synthesize role=_role - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(NSNumber *)role;
-(void)setName:(NSString *)arg1 ;
-(EDAMBusinessUserAttributes *)attributes;
-(void)setAttributes:(EDAMBusinessUserAttributes *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(NSNumber *)arg1 ;
-(NSNumber *)id;
-(void)setId:(NSNumber *)arg1 ;
-(NSNumber *)joined;
-(void)setJoined:(NSNumber *)arg1 ;
-(NSString *)photoUrl;
-(void)setPhotoUrl:(NSString *)arg1 ;
-(NSNumber *)photoLastUpdated;
-(void)setPhotoLastUpdated:(NSNumber *)arg1 ;
@end

