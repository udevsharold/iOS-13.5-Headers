/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>
#import <libobjc.A.dylib/BLTSectionInfoListDelegate.h>
#import <libobjc.A.dylib/BLTSectionConfigurationDelegate.h>
#import <libobjc.A.dylib/BLTSiriActionAppListDelegate.h>

@protocol OS_dispatch_queue;
@class BLTSectionInfoList, BLTSettingSyncSendQueue, BLTSectionInfoSyncCoordinator, NSObject, BLTSectionInfoListBridgeProvider, NSMutableDictionary, BLTSiriActionAppList, BLTWatchKitAppList, NSString;

@interface BLTSettingSync : BLTSettingSyncInternal <BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSiriActionAppListDelegate> {

	BLTSectionInfoList* _sectionInfoList;
	BLTSettingSyncSendQueue* _settingSendQueue;
	unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
	BLTSectionInfoSyncCoordinator* _sectionInfoSyncCoordinator;
	NSObject*<OS_dispatch_queue> _sectionInfoSyncCoordinatorQueue;
	BOOL _initialSyncPerformed;
	BLTSectionInfoListBridgeProvider* _bridgeProvider;
	NSMutableDictionary* _reloadBBCompletions;
	BLTSiriActionAppList* _siriActionAppList;
	BLTWatchKitAppList* _watchKitAppList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3 ;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(void)sendRemoveSectionWithSectionID:(id)arg1 sent:(/*^block*/id)arg2 ;
-(void)removeSectionWithSectionID:(id)arg1 ;
-(void)siriActionAppListUpdated:(id)arg1 ;
-(void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)spoolSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)clearSectionInfoSentCache;
-(id)settingOverrides;
-(id)originalSettings;
-(id)overriddenSettings;
-(id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 ;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3 ;
-(BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1 ;
-(void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2 ;
-(void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2 ;
-(id)settingsDescriptionForSectionIDs:(id)arg1 ;
-(id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 watchKitAppList:(id)arg3 ;
-(void)sendSectionInfosWithSectionIDs:(id)arg1 completion:(/*^block*/id)arg2 spoolToFile:(BOOL)arg3 ;
-(BOOL)isSectionInfoSentCacheEmpty;
-(void)performInitialSyncWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAllSyncComplete;
-(unsigned long long)performSyncIfNeededForSectionID:(id)arg1 gizmoSectionInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_initSettingSyncSendQueueMaxConcurrentSendCount;
-(void)_spoolInitialSync;
-(void)_logNotificationSettings;
-(unsigned long long)_fetchSyncState;
-(void)_storeSyncState:(unsigned long long)arg1 ;
-(unsigned long long)_fetchSettingSyncMaxCountOverride;
-(void)_updateAllBBSectionsWithCompletion:(/*^block*/id)arg1 withProgress:(/*^block*/id)arg2 spoolToFile:(BOOL)arg3 ;
-(void)_sendSpooledSyncWithCompletion:(/*^block*/id)arg1 withProgress:(/*^block*/id)arg2 ;
-(void)_setupSectionInfoListWithCompletion:(/*^block*/id)arg1 ;
-(void)_addReloadBBCompletion:(/*^block*/id)arg1 sectionID:(id)arg2 ;
-(void)_callAndRemoveReloadBBCompletion:(/*^block*/id)arg1 sectionID:(id)arg2 ;
-(id)_filteredAlertingSectionIDs:(id)arg1 ;
-(void)_sendSiriAppListWithInstalled:(id)arg1 removed:(id)arg2 ;
-(void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(BOOL)arg3 ;
-(void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 spoolToFile:(BOOL)arg4 andCompletion:(/*^block*/id)arg5 ;
-(void)_callReloadBBCompletionsForSectionID:(id)arg1 ;
@end

