/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/SPUILegibilitySceneSettings.h>

@class _UILegibilitySettings, NSString;

@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
@end

