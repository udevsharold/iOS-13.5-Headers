/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AccessibilitySettingsLoader : NSObject
+(void)initialize;
+(void)_update;
+(void)update;
+(void)updateITunesSettings;
+(void)_resetD22ReduceMotion;
+(void)_registerZoomNotificationListeners;
+(void)_registerSpeakThisNotificationListeners;
+(void)_updateAccessibilitySpeakCorrections;
+(void)_updateITunesSettings;
+(void)_updateAssistiveTouchInformation;
-(id)init;
-(void)_webKitInitialized;
-(void)_initializeImmediateAccessibilitySettings;
-(void)_initializeDelayedAccessibilitySettings;
-(void)_accessibilityUserChangedRouteNotification:(id)arg1 ;
@end

