/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@class NSString, NSNumber;

@interface SASettingShowPassword : SASettingCommand

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSString * appOrWebsiteName; 
@property (nonatomic,copy) NSNumber * shouldPromptForAuthentication; 
@property (nonatomic,copy) NSString * spokenAppOrWebsiteName; 
+(id)showPassword;
+(id)showPasswordWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appOrWebsiteName;
-(void)setAppOrWebsiteName:(NSString *)arg1 ;
-(NSNumber *)shouldPromptForAuthentication;
-(void)setShouldPromptForAuthentication:(NSNumber *)arg1 ;
-(NSString *)spokenAppOrWebsiteName;
-(void)setSpokenAppOrWebsiteName:(NSString *)arg1 ;
@end

