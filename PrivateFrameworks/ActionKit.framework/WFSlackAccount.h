/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFOAuth2Account.h>

@class NSString;

@interface WFSlackAccount : WFOAuth2Account {

	NSString* _username;
	NSString* _teamName;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * teamName;              //@synthesize teamName=_teamName - In the implementation block
+(id)clientID;
+(id)scopes;
+(id)sessionManager;
+(id)clientSecret;
+(id)localizedServiceName;
+(id)serviceID;
+(BOOL)allowsMultipleAccounts;
+(id)redirectURI;
-(id)localizedName;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)teamName;
-(void)setTeamName:(NSString *)arg1 ;
@end

