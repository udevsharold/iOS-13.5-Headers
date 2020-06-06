/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString, BBSectionInfo, NSMutableArray, NPSDomainAccessor, NSMutableDictionary, PSSpecifier;

@interface BPSNotificationAppController : PSListController {

	BOOL _mirrorSettings;
	NSString* _bundleIdentifier;
	BBSectionInfo* _bbSectionInfo;
	NSMutableArray* _notificationApplicationSpecifiers;
	NPSDomainAccessor* _bbAppsSettings;
	NSMutableArray* _notificationSpecifiers;
	NSMutableDictionary* _sectionInfo;
	unsigned long long _settingsMode;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) BBSectionInfo * bbSectionInfo;                                   //@synthesize bbSectionInfo=_bbSectionInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationApplicationSpecifiers;              //@synthesize notificationApplicationSpecifiers=_notificationApplicationSpecifiers - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * bbAppsSettings;                              //@synthesize bbAppsSettings=_bbAppsSettings - In the implementation block
@property (nonatomic,readonly) NSMutableArray * notificationSpecifiers;                       //@synthesize notificationSpecifiers=_notificationSpecifiers - In the implementation block
@property (nonatomic,readonly) BOOL mirrorSettings;                                           //@synthesize mirrorSettings=_mirrorSettings - In the implementation block
@property (nonatomic,readonly) BOOL showAlerts; 
@property (nonatomic,readonly) unsigned long long alertingMode; 
@property (nonatomic,readonly) BOOL showPreview; 
@property (nonatomic,readonly) NSMutableDictionary * sectionInfo;                             //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,readonly) PSSpecifier * previewSwitchSpecifier; 
@property (assign,nonatomic) unsigned long long settingsMode;                                 //@synthesize settingsMode=_settingsMode - In the implementation block
-(id)init;
-(NSString *)bundleIdentifier;
-(id)bundle;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)showPreview;
-(id)applicationBundleIdentifier;
-(long long)alertType;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(NSMutableDictionary *)sectionInfo;
-(id)bulletinBoardSettings;
-(BBSectionInfo *)bbSectionInfo;
-(id)sectionInfoForBBSectionInfo:(id)arg1 ;
-(BOOL)suppressMirrorOption;
-(void)setMirrorSettings:(BOOL)arg1 ;
-(BOOL)caresAboutSubsections;
-(void)updateSubsections;
-(BOOL)suppressAlertSpecifiers;
-(void)removeAlertOptions;
-(BOOL)_suppressSendToNotificationCenterOption;
-(void)removeSendToNotificationCenterOption;
-(unsigned long long)alertingMode;
-(NSMutableArray *)notificationApplicationSpecifiers;
-(void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)soundsValue:(id)arg1 ;
-(void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vibrationValue:(id)arg1 ;
-(void)setNotificationGroupingValue:(id)arg1 specifier:(id)arg2 ;
-(id)notificationGroupingValue:(id)arg1 ;
-(id)applicationGroupSpecifiers;
-(void)removeMirrorOptions;
-(BOOL)suppressAllMirrorSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(unsigned long long)settingsMode;
-(id)customGroupSpecifierForDescription:(id)arg1 ;
-(id)localizedPaneTitle;
-(BOOL)watchHasCapabilitySendToNotificationCenter;
-(BOOL)suppressSendToNotificationCenterOption;
-(void)writeSectionState;
-(void)mirrorSettingsChanged:(BOOL)arg1 ;
-(void)setAlertingMode:(unsigned long long)arg1 ;
-(BOOL)showAlerts;
-(id)localizedPreviewChoiceTitle;
-(void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showPreviewValue:(id)arg1 ;
-(id)glanceSpecifierForIdentifier:(id)arg1 ;
-(void)_showSettingsNotifications;
-(id)notificationGroupTitles;
-(id)notificationGroupValues;
-(PSSpecifier *)previewSwitchSpecifier;
-(BOOL)wantsPreviewChoice;
-(id)localizedPreviewGroupLabel;
-(id)localizedPreviewGroupFooter;
-(void)setBbSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setNotificationApplicationSpecifiers:(NSMutableArray *)arg1 ;
-(NPSDomainAccessor *)bbAppsSettings;
-(void)setBbAppsSettings:(NPSDomainAccessor *)arg1 ;
-(NSMutableArray *)notificationSpecifiers;
-(BOOL)mirrorSettings;
-(void)setSettingsMode:(unsigned long long)arg1 ;
@end

