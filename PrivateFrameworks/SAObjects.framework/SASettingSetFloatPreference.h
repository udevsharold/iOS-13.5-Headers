/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetFloat.h>

@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)setFloatPreference;
+(id)setFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)settingKey;
-(void)setSettingKey:(NSString *)arg1 ;
@end
