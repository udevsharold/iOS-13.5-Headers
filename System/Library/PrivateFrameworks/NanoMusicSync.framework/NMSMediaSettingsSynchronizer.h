/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {

	BOOL _isObserving;
	NSUserDefaults* _mediaPlaybackCoreDefaults;
	NSUserDefaults* _mobileIPodDefaults;
	NSUserDefaults* _nanoMusicSyncDefaults;
	NSUserDefaults* _podcastsDefaults;

}
+(id)sharedSynchronizer;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)endObservingUpdates;
-(void)_createDefaultGreenTeaSettingsIfNecessary;
-(id)_podcastsUserDefaults;
-(void)_syncPodcastDefaultsIfNecessary;
-(id)_podcastsAppGroupPath;
-(void)beginObservingUpdates;
-(void)_reconcileGreenTeaSettingsIfNecessary;
@end
