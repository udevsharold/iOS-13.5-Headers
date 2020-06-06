/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSafariBookmarksSyncAgentProtocol <WBSCyclerCloudBookmarksAssistant>
@required
-(void)registerForPushNotificationsIfNeeded;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1;
-(void)userDidUpdateBookmarkDatabase;
-(void)userAccountDidChange:(long long)arg1;
-(void)fetchUserIdentityWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)beginMigrationFromDAV;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1;

@end

