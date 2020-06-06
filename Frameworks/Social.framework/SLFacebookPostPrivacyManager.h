/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject {

	ACAccount* _account;
	NSArray* _privacySettings;

}

@property (retain) SLFacebookPostPrivacySetting * privacySetting; 
-(id)initWithAccount:(id)arg1 ;
-(id)_userDefaultsDict;
-(id)defaultPrivacySetting;
-(id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1 ;
-(void)_setPrivacySettings:(id)arg1 ;
-(void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
-(SLFacebookPostPrivacySetting *)privacySetting;
-(id)privacySettings;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(void)updatePrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

