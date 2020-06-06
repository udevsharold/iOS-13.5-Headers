/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, IMNicknameAvatarImage;

@interface IMNickname : NSObject <NSCopying, NSSecureCoding> {

	NSString* _firstName;
	NSString* _lastName;
	IMNicknameAvatarImage* _avatar;
	NSString* _displayName;
	NSString* _handle;
	NSString* _recordID;

}

@property (nonatomic,copy) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) IMNicknameAvatarImage * avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSString * nameHash; 
@property (nonatomic,readonly) NSString * imageHash; 
+(BOOL)supportsSecureCoding;
+(id)uniqueFilePathForWritingImageData;
+(id)nameHashWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)handle;
-(id)dictionaryRepresentation;
-(id)dataRepresentation;
-(NSString *)displayName;
-(NSString *)recordID;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(IMNicknameAvatarImage *)avatar;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 avatar:(id)arg3 ;
-(id)publicDictionaryRepresentation;
-(id)_imageHashCreatedInChunks;
-(NSString *)nameHash;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(id)initWithMeContact:(id)arg1 ;
-(id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)arg1 ;
-(id)publicDictionaryRepresentationWithoutAvatar;
-(NSString *)imageHash;
-(id)_sharingState;
-(BOOL)isUpdateFromNickname:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)updateNameFromContact:(id)arg1 ;
-(void)setAvatar:(IMNicknameAvatarImage *)arg1 ;
@end

