/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSSettingsInterface.h>

@protocol VUIJSSettingsInterface <JSExport>
@required
-(id)userPreferences;
-(BOOL)sportsScoreSpoilersAllowed;
-(BOOL)privateModeEnabled;
-(id)consentedBrands;
-(id)deniedBrands;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1;

@end


@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>
-(void)dealloc;
-(id)userPreferences;
-(id)initWithAppContext:(id)arg1 ;
-(BOOL)sportsScoreSpoilersAllowed;
-(void)_handleSettingsDidChange:(id)arg1 ;
-(BOOL)privateModeEnabled;
-(id)consentedBrands;
-(id)deniedBrands;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1 ;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1 ;
@end

