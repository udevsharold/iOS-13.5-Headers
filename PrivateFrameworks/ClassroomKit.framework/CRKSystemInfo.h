/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CRKSystemInfo : NSObject {

	NSString* _buildVersion;
	NSString* _systemVersion;

}

@property (nonatomic,copy,readonly) NSString * buildVersion;                                     //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * systemVersion;                                    //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,copy,readonly) NSDate * bootDate; 
@property (getter=isEphemeralMultiUser,nonatomic,readonly) BOOL ephemeralMultiUser; 
+(id)sharedSystemInfo;
-(id)init;
-(NSString *)systemVersion;
-(unsigned long long)platform;
-(BOOL)isEphemeralMultiUser;
-(NSString *)buildVersion;
-(void)populateVersions;
-(NSDate *)bootDate;
@end

