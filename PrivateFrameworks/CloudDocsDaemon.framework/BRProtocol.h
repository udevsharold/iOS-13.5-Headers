/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRProtocol <CKXPCShareDaemon>
@required
-(oneway void)updatePrivilegesDescriptor;
-(void)currentAccountCreateWithID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)currentAccountLogoutWithReply:(/*^block*/id)arg1;
-(void)getContainersNeedingUpload:(/*^block*/id)arg1;
-(void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(/*^block*/id)arg2;
-(void)hasOptimizeStorageWithReply:(/*^block*/id)arg1;
-(void)setStorageOpimizationEnabled:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)getEvictableSpaceWithReply:(/*^block*/id)arg1;
-(void)evictOldDocumentsWithReply:(/*^block*/id)arg1;
-(void)moveBRSecurityBookmarkAtURL:(id)arg1 toURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)trashItemAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toModifyRecordAccessAtURL:(id)arg2 allowAccess:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)startOperation:(id)arg1 toCopyParticipantTokenAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toCopyShortTokenAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toCopyEtagAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(/*^block*/id)arg4;
-(void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toCopyDocumentURLForRecordID:(id)arg2 syncIfNeeded:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)startOperation:(id)arg1 toPrepFolderForSharingAt:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toProcessSubitemsAtURL:(id)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)startOperation:(id)arg1 toCopyShareInfoAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toDownloadItemAtURL:(id)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(BOOL)arg4 reply:(/*^block*/id)arg5;
-(oneway void)updateContainerMetadataForID:(id)arg1;
-(void)getContainerURLForID:(id)arg1 forProcess:(SCD_Struct_BR21)arg2 reply:(/*^block*/id)arg3;
-(void)getContainerURLForID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)forceSyncContainerID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(BOOL)arg2 requestedTTL:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)registerInitialSyncBarrierForID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)thumbnailChangedForItemAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 includeAllItems:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)removeItemFromDisk:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getTotalApplicationDocumentUsageWithReply:(/*^block*/id)arg1;
-(void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)addExternalDocumentReferenceTo:(id)arg1 inContainer:(id)arg2 underParent:(id)arg3 reply:(/*^block*/id)arg4;
-(void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(BOOL)arg2 readonly:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)copyCurrentUserIdentifierWithReply:(/*^block*/id)arg1;
-(void)copyCurrentUserNameAndEmailWithReply:(/*^block*/id)arg1;
-(void)copyCurrentUserNameAndDisplayHandleWithReply:(/*^block*/id)arg1;
-(void)createSharingInfoForURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)copyBulkShareIDsAtURLs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)getMigrationStatusForPrimaryiCloudAccount:(/*^block*/id)arg1;
-(void)getApplicationStatusForProcess:(SCD_Struct_BR21)arg1 reply:(/*^block*/id)arg2;
-(void)getApplicationStatus:(/*^block*/id)arg1;
-(void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getLastSyncDateWithReply:(/*^block*/id)arg1;
-(void)getLocalizedLastSyncWithReply:(/*^block*/id)arg1;
-(void)checkIfFolderSharingEnabledWithReply:(/*^block*/id)arg1;
-(void)boostFilePresenterAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(/*^block*/id)arg2;
-(void)updateItemFromURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getQueryItemForURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setupInstanceWithDict:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resetBudgets:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dumpCoordinationInfoTo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performSelfCheck:(id)arg1 reply:(/*^block*/id)arg2;
-(void)printStatus:(id)arg1 containerID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)gatherInformationForPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 brokenStructure:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)healthStatusStringForContainer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)zoneNameForContainer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)_t_waitUntilIdle:(id)arg1 reply:(/*^block*/id)arg2;
-(void)computePurgeableSpaceForAllUrgenciesWithReply:(/*^block*/id)arg1;
-(void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(/*^block*/id)arg3;
-(void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(/*^block*/id)arg3;
-(void)dropSpotlightIndexWithReply:(/*^block*/id)arg1;
-(void)readerThrottleBackoffForDocumentAtPath:(id)arg1 containerID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)waitForFileSystemChangeProcessingWithReply:(/*^block*/id)arg1;
-(void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getContainersByID:(/*^block*/id)arg1;
-(void)getContainerForURL:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)checkinAskClientIfUsingUbiquity:(BOOL)arg1;
-(void)presyncContainerWithID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)deleteAllContentsOfContainerID:(id)arg1 onClient:(BOOL)arg2 onServer:(BOOL)arg3 wait:(BOOL)arg4 reply:(/*^block*/id)arg5;
-(void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)jetsamCloudDocsAppsWithReply:(/*^block*/id)arg1;
-(void)getBookmarkDataForURL:(id)arg1 onlyAllowItemKnowByServer:(BOOL)arg2 allowAccessByBundleID:(id)arg3 reply:(/*^block*/id)arg4;
-(void)resolveBookmarkDataToURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resolveFileObjectIDsToContentRecordIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resolveFileObjectIDToURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getContainerStatusWithID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getContainerLastServerUpdateWithID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getIsContainerWithIDOverQuota:(id)arg1 reply:(/*^block*/id)arg2;
-(void)currentNotifRankWithReply:(/*^block*/id)arg1;
-(void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(/*^block*/id)arg2;
-(void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getCreatorNameComponentsForURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)overwriteAccessTimeForItemAtURL:(id)arg1 atime:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)currentSyncedRootURLsWithReply:(/*^block*/id)arg1;
-(void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)capabilityWhenTryingToReparentItemAtURL:(id)arg1 toNewParent:(id)arg2 reply:(/*^block*/id)arg3;
-(void)checkIfItemIsShareableWithInode:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)getShareOptionsOfItemIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getURLForItemIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_blockSyncUpOfItemWithID:(id)arg1 containerID:(id)arg2 withPendingUpgradeToOSName:(id)arg3 reply:(/*^block*/id)arg4;
-(void)_t_blockSyncForContainerID:(id)arg1 withPendingUpgradeToOSName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)_t_removeAllSyncUpBlockingForContainerID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_pauseSyncDownOfContainer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_resumeSyncDownOfContainer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_pauseSyncUpOfContainer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_resumeSyncUpOfContainer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_setFSEventProcessingState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)_t_resetZoneForContainerID:(id)arg1 waitUntilIdle:(BOOL)arg2 includingSharedZones:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)_t_resetAllZonesWithReply:(/*^block*/id)arg1;
-(void)_t_suspendUploadsForContainerID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_resumeUploadsForContainerID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_suspendDownloadsForContainerID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_resumeDownloadsForContainerID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_copyGlobalProgressInfoWithReply:(/*^block*/id)arg1;
-(void)_t_waitForLostScanToFinishWithReply:(/*^block*/id)arg1;
-(void)_t_noopWithReply:(/*^block*/id)arg1;
-(void)_t_getPCSChainStateAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_migrateAllZonesToClouddocsWithReset:(BOOL)arg1 onlyPrepare:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)_t_copyItemIDFromItemAtURL:(id)arg1 toItemAtURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)_t_isAutomaticallyEvictable:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_getPerfValuesWithReply:(/*^block*/id)arg1;
-(void)lookupExcludedFilenamesForLogoutWithReply:(/*^block*/id)arg1;
-(void)lookupExcludedExtensionsForLogoutWithReply:(/*^block*/id)arg1;
-(void)lookupMinFileSizeForThumbnailTransferWithReply:(/*^block*/id)arg1;
-(void)_t_addPackageExtension:(id)arg1 reply:(/*^block*/id)arg2;
-(void)_t_removePackageExtension:(id)arg1 reply:(/*^block*/id)arg2;
-(void)scheduleDeepScanForContainer:(id)arg1 reply:(/*^block*/id)arg2;

@end

