/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject {

	NSMutableDictionary* _settingsDictionary;
	BOOL _synchronizeScheduled;
	BOOL _invalidatesClosedWindows;

}

@property (nonatomic,readonly) BOOL hasPrivateBrowsingWindow; 
@property (assign,nonatomic) BOOL invalidatesClosedWindows;                //@synthesize invalidatesClosedWindows=_invalidatesClosedWindows - In the implementation block
+(id)settings;
+(void)setSharedSettings:(id)arg1 ;
-(id)init;
-(void)synchronize;
-(BOOL)hasPrivateBrowsingWindow;
-(void)_initializeSettingsDictionaryIfNeeded;
-(id)_numberForKey:(id)arg1 windowUUID:(id)arg2 ;
-(id)_stringForKey:(id)arg1 windowUUID:(id)arg2 ;
-(BOOL)_boolValueForKey:(id)arg1 windowUUID:(id)arg2 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 windowUUID:(id)arg3 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 windowUUID:(id)arg3 ;
-(void)_synchronizeNow;
-(void)validateWindowSettingsWithUUIDs:(id)arg1 ;
-(BOOL)privateBrowsingEnabledForWindowWithUUID:(id)arg1 ;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(BOOL)activeDocumentIsValidForWindowWithUUID:(id)arg1 ;
-(void)setActiveDocumentIsValid:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(BOOL)isShowingTabViewForWindowWithUUID:(id)arg1 ;
-(void)setIsShowingTabView:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(id)blankSnapshotGroupIdentifierForPrivateBrowsing:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(void)setBlankSnapshotGroupIdentifier:(id)arg1 forPrivateBrowsing:(BOOL)arg2 forWindowWithUUID:(id)arg3 ;
-(void)removeWindowWithUUID:(id)arg1 ;
-(BOOL)invalidatesClosedWindows;
-(void)setInvalidatesClosedWindows:(BOOL)arg1 ;
@end

