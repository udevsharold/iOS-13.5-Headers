/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload {

	NSString* _accessType;
	NSString* _securityType;
	NSString* _password;

}

@property (nonatomic,retain) NSString * accessType;                //@synthesize accessType=_accessType - In the implementation block
@property (nonatomic,retain) NSString * securityType;              //@synthesize securityType=_securityType - In the implementation block
@property (nonatomic,retain) NSString * password;                  //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAccessType:(NSString *)arg1 ;
-(NSString *)accessType;
-(void)setSecurityType:(NSString *)arg1 ;
-(NSString *)securityType;
@end

