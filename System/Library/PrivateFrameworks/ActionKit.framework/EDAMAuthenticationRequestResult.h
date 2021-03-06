/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject {

	NSNumber* _userId;
	NSString* _userEmail;
	NSNumber* _result;

}

@property (nonatomic,retain) NSNumber * userId;                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * userEmail;              //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSNumber * result;                 //@synthesize result=_result - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)result;
-(void)setResult:(NSNumber *)arg1 ;
-(NSString *)userEmail;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
@end

