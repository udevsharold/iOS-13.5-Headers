/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DMFControlSessionIdentifier, NSString, NSData;

@interface CRKInstructor : NSObject <NSSecureCoding> {

	DMFControlSessionIdentifier* _sessionIdentifier;
	NSString* _userIdentifier;
	NSString* _displayName;
	NSString* _courseName;
	NSData* _imageData;

}

@property (nonatomic,copy) DMFControlSessionIdentifier * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                                    //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                        //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                         //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(DMFControlSessionIdentifier *)sessionIdentifier;
-(void)setSessionIdentifier:(DMFControlSessionIdentifier *)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqualToInstructor:(id)arg1 ;
-(NSString *)courseName;
-(void)setCourseName:(NSString *)arg1 ;
@end

