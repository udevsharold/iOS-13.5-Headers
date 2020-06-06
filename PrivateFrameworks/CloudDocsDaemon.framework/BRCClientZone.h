/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/BRCZone.h>

@protocol BRCClientZoneDelegate, OS_dispatch_queue, OS_dispatch_source, NSObject;
@class BRCAccountSession, BRCServerZone, BRCZoneRowID, NSString, BRMangledID, BRCPQLConnection, BRCThrottleBase, BRCCreateZoneAndSubscribeOperation, NSObject, NSMutableArray, BRCSyncUpOperation, NSError, BRCSyncDownOperation, BRCSyncOperationThrottle, BRCSyncBudgetThrottle, BRCDeadlineSource, NSMutableIndexSet, NSDate, NSMutableDictionary, NSMutableSet, CKOperationGroup, UMUserSyncTask, brc_task_tracker, NSArray, BRCItemID, NSSet, NSDictionary;

@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone> {

	BRCAccountSession* _session;
	BRCServerZone* _serverZone;
	id<BRCClientZoneDelegate> _delegate;
	BRCZoneRowID* _dbRowID;
	NSString* _zoneName;
	NSString* _ownerName;
	BRMangledID* _mangledID;
	BRCPQLConnection* _db;
	unsigned _state;
	BOOL _activated;
	BOOL _isInitialCreation;
	BRCThrottleBase* _readerThrottle;
	BRCCreateZoneAndSubscribeOperation* _createZoneOperation;
	NSObject*<OS_dispatch_queue> _createZoneQueue;
	NSMutableArray* _zoneCreationCompletionBlocks;
	long long _syncUpRetryAfter;
	AI _syncState;
	BRCSyncUpOperation* _syncUpOperation;
	NSError* _lastSyncUpError;
	BRCSyncDownOperation* _syncDownOperation;
	id _syncDeadlineSourceResumer;
	NSError* _lastSyncDownError;
	BRCSyncOperationThrottle* _syncUpThrottle;
	BRCSyncBudgetThrottle* _syncUpBudget;
	BRCSyncOperationThrottle* _syncDownThrottle;
	BRCDeadlineSource* _syncDeadlineSource;
	NSMutableIndexSet* _appliedTombstoneRanks;
	long long _lastInsertedRank;
	NSDate* _lastSyncDownDate;
	NSDate* _lastAttemptedSyncDownDate;
	NSObject*<OS_dispatch_source> _resetTimer;
	NSMutableDictionary* _syncDownBlockToPerformForBookmarkData;
	BOOL _shouldShowiCloudDriveAppInstallationNotification;
	NSMutableSet* _itemIDsBlockedFromSyncForCZMProcessing;
	NSMutableDictionary* _itemsBlockedByAssociationForCZMProcessing;
	NSMutableArray* _blocksWaitingOnCrossZoneMoveProcessing;
	NSMutableDictionary* _onDiskBlockToPerformForItemID;
	NSMutableDictionary* _downloadedBlockToPerformForItemID;
	NSMutableDictionary* _syncDownBlockToPerformForItemID;
	NSMutableDictionary* _parentsOfCZMFaults;
	NSMutableArray* _nextSyncDownBarriers;
	NSMutableArray* _currentSyncDownBarriers;
	id<NSObject> _hasWorkDidUpdateObserver;
	NSMutableArray* _nextIdleHandlers;
	CKOperationGroup* _syncDownGroup;
	NSMutableArray* _syncDownDependencies;
	NSMutableArray* _allItemsDidUploadTrackers;
	float _syncUpBatchSizeMultiplier;
	UMUserSyncTask* _bubbleSyncTask;
	brc_task_tracker* _taskTracker;
	BOOL _needsSave;
	BOOL _t_syncDownBlocked;
	BOOL _t_syncUpBlocked;
	unsigned long long _requestID;
	NSArray* _syncThrottles;
	NSString* _osNameRequiredToSync;
	NSMutableDictionary* _t_osNamesByItemIDBlockedForSyncUp;
	NSString* _t_syncBlockedUntilOSName;

}

@property (nonatomic,retain) BRCServerZone * serverZone;                                              //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,retain) NSDate * lastAttemptedSyncDownDate;                                      //@synthesize lastAttemptedSyncDownDate=_lastAttemptedSyncDownDate - In the implementation block
@property (nonatomic,readonly) NSString * zoneName;                                                   //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) id<BRCClientZoneDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BRCItemID * rootItemID; 
@property (nonatomic,readonly) BRMangledID * mangledID;                                               //@synthesize mangledID=_mangledID - In the implementation block
@property (nonatomic,readonly) BRCPQLConnection * db;                                                 //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) brc_task_tracker * taskTracker;                                        //@synthesize taskTracker=_taskTracker - In the implementation block
@property (nonatomic,readonly) BOOL isCloudDocsZone; 
@property (nonatomic,readonly) NSString * osNameRequiredToSync;                                       //@synthesize osNameRequiredToSync=_osNameRequiredToSync - In the implementation block
@property (nonatomic,readonly) BOOL isForeground; 
@property (nonatomic,readonly) BOOL activated;                                                        //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) unsigned long long currentRequestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (readonly) unsigned syncState; 
@property (nonatomic,readonly) NSArray * syncThrottles;                                               //@synthesize syncThrottles=_syncThrottles - In the implementation block
@property (nonatomic,readonly) BRCDeadlineSource * syncDeadlineSource;                                //@synthesize syncDeadlineSource=_syncDeadlineSource - In the implementation block
@property (nonatomic,readonly) BOOL hasHighPriorityWatchers; 
@property (nonatomic,readonly) long long lastInsertedRank;                                            //@synthesize lastInsertedRank=_lastInsertedRank - In the implementation block
@property (nonatomic,readonly) unsigned syncUpBatchSize; 
@property (nonatomic,readonly) NSMutableDictionary * _t_osNamesByItemIDBlockedForSyncUp;              //@synthesize t_osNamesByItemIDBlockedForSyncUp=_t_osNamesByItemIDBlockedForSyncUp - In the implementation block
@property (nonatomic,readonly) NSString * _t_syncBlockedUntilOSName;                                  //@synthesize t_syncBlockedUntilOSName=_t_syncBlockedUntilOSName - In the implementation block
@property (nonatomic,readonly) BOOL _t_syncDownBlocked;                                               //@synthesize t_syncDownBlocked=_t_syncDownBlocked - In the implementation block
@property (nonatomic,readonly) BOOL _t_syncUpBlocked;                                                 //@synthesize t_syncUpBlocked=_t_syncUpBlocked - In the implementation block
@property (nonatomic,readonly) NSSet * itemIDsBlockedFromSyncForCZMProcessing;                        //@synthesize itemIDsBlockedFromSyncForCZMProcessing=_itemIDsBlockedFromSyncForCZMProcessing - In the implementation block
@property (nonatomic,readonly) NSDictionary * parentsOfCZMFaults;                                     //@synthesize parentsOfCZMFaults=_parentsOfCZMFaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL needsSave;                                                          //@synthesize needsSave=_needsSave - In the implementation block
@property (nonatomic,retain) BRCZoneRowID * dbRowID;                                                  //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)close;
-(id<BRCClientZoneDelegate>)delegate;
-(void)setDelegate:(id<BRCClientZoneDelegate>)arg1 ;
-(void)resume;
-(unsigned)state;
-(BOOL)needsSave;
-(void)setNeedsSave:(BOOL)arg1 ;
-(BRCPQLConnection *)db;
-(BRCAccountSession *)session;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(NSString *)zoneName;
-(id)ownerName;
-(BOOL)activated;
-(BOOL)isForeground;
-(id)allItems;
-(NSMutableDictionary *)plist;
-(unsigned)syncState;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(BRCServerZone *)serverZone;
-(unsigned long long)currentRequestID;
-(BRCZoneRowID *)dbRowID;
-(BOOL)isSharedZone;
-(BRMangledID *)mangledID;
-(void)associateWithServerZone:(id)arg1 offline:(BOOL)arg2 ;
-(id)descriptionWithContext:(id)arg1 ;
-(id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3 ;
-(id)serverItemByItemID:(id)arg1 db:(id)arg2 ;
-(id)itemByDocumentID:(unsigned)arg1 db:(id)arg2 ;
-(id)itemByFileID:(unsigned long long)arg1 db:(id)arg2 ;
-(id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(void)scheduleSyncDown;
-(id)itemByItemID:(id)arg1 db:(id)arg2 ;
-(brc_task_tracker *)taskTracker;
-(id)itemByRowID:(unsigned long long)arg1 ;
-(BOOL)isPrivateZone;
-(id)asPrivateClientZone;
-(BOOL)isEqualToClientZone:(id)arg1 ;
-(void)setDbRowID:(BRCZoneRowID *)arg1 ;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(BOOL)arg6 ;
-(void)_forDBUpgrade_setStateBits:(unsigned)arg1 clearStateBits:(unsigned)arg2 ;
-(void)flushAppliedTombstones;
-(BOOL)isSyncBlockedBecauseAppNotInstalled;
-(BOOL)isSyncBlockedBecauseOSNeedsUpgrade;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2 ;
-(id)asSharedClientZone;
-(void)associateWithServerZone:(id)arg1 ;
-(BOOL)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id*)arg3 ;
-(id)itemByItemID:(id)arg1 ;
-(unsigned)syncUpBatchSize;
-(BOOL)isSyncBlocked;
-(id)syncUpAnalyticsError;
-(id)syncDownAnalyticsError;
-(void)learnCKInfosFromSavedRecords:(id)arg1 isOutOfBandModifyRecords:(BOOL)arg2 ;
-(id)itemByDocumentID:(unsigned)arg1 ;
-(void)beginSyncBubbleActivityIfNecessary;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BRCItemID *)rootItemID;
-(id)serverItemByItemID:(id)arg1 ;
-(id)serverItemByRank:(long long)arg1 ;
-(BOOL)hasCompletedInitialSyncDownOnce;
-(void)signalFaultingWatchersWithError:(id)arg1 ;
-(long long)serverRankByItemID:(id)arg1 ;
-(long long)lastInsertedRank;
-(void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(BOOL)arg3 syncDownDate:(id)arg4 ;
-(long long)throttleHashWithItemID:(id)arg1 ;
-(void)updateWithPlist:(id)arg1 ;
-(unsigned)_activateState:(unsigned)arg1 origState:(unsigned)arg2 ;
-(void)scheduleSyncUp;
-(void)_t_flushIdleBlocksIfNeeded;
-(BOOL)setStateBits:(unsigned)arg1 ;
-(void)clearStateBits:(unsigned)arg1 ;
-(BOOL)hasInitialFaultsLive;
-(BOOL)hasInitialFaultsEverLive;
-(BOOL)shouldSyncMangledID:(id)arg1 ;
-(id)itemByRowID:(unsigned long long)arg1 db:(id)arg2 ;
-(BOOL)isCloudDocsZone;
-(BOOL)handleZoneLevelErrorIfNeeded:(id)arg1 ;
-(/*^block*/id)popDownloadedBlockForItemID:(id)arg1 ;
-(void)scheduleReset:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearSyncStateBits:(unsigned)arg1 ;
-(id)_cancelAllOperationsForReset;
-(void)_reset:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishedReset:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performResetAndWantsUnlink:(BOOL)arg1 clientTruthBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(/*^block*/id)arg1 ;
-(void)_removeTargetedAliasesWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)supportsKeepingClientItemsDuringReset;
-(id)itemsParentedToThisZoneButLivingInAnOtherZone;
-(void)_mkdirAppLibraryIfNeeded:(id)arg1 ;
-(void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_removeAllShareAcceptanceBlocks;
-(void)scheduleResetServerAndClientTruthsForReason:(const char*)arg1 ;
-(void)cancelReset;
-(void)scheduleReset:(unsigned long long)arg1 ;
-(char)itemTypeByItemID:(id)arg1 db:(id)arg2 ;
-(NSDictionary *)parentsOfCZMFaults;
-(NSString *)osNameRequiredToSync;
-(void)scheduleSyncDownFirst;
-(void)scheduleSyncDownForOOBModifyRecordsAck;
-(BRCDeadlineSource *)syncDeadlineSource;
-(void)scheduleSyncDownWithGroup:(id)arg1 ;
-(void)recomputeAllItemsDidUploadState;
-(/*^block*/id)popOnDiskBlockForItemID:(id)arg1 ;
-(void)createCloudKitZoneWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didGCTombstoneRanks:(id)arg1 ;
-(BOOL)_crossZoneMoveDocumentsToZone:(id)arg1 ;
-(id)xattrForSignature:(id)arg1 ;
-(id)itemsEnumeratorWithDB:(id)arg1 ;
-(BOOL)isSyncBlockedOrBrokenStructure;
-(void)clearSyncUpError;
-(unsigned long long)nextSyncUpRequestID;
-(void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2 ;
-(void)setServerZone:(BRCServerZone *)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 whenItemWithIDIsOnDisk:(id)arg2 ;
-(void)_startSync;
-(void)setSyncStateBits:(unsigned)arg1 ;
-(void)scheduleResetServerAndClientTruthsForReason:(const char*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemCountPendingUploadOrSyncUpAndReturnError:(id*)arg1 ;
-(id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id*)arg1 ;
-(void)disconnectNSMDQListenerAsync;
-(id)xattrForSignature:(id)arg1 db:(id)arg2 ;
-(id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3 ;
-(BOOL)existsByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(void)_enumerateFaultsWithBlock:(/*^block*/id)arg1 rowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(id)_faultsEnumeratorFromRow:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(void)_createCloudKitZoneWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeSyncDownDependency:(id)arg1 ;
-(BOOL)hasHighPriorityWatchers;
-(void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3 ;
-(id)syncDownImmediately;
-(id)itemsWithInFlightDiffsEnumerator;
-(void)_markRequestIDAcked;
-(void)_increaseSyncUpBatchSizeAfterSuccess;
-(void)_decreaseSyncUpBatchSizeAfterError;
-(void)_markLatestSyncRequestFailed;
-(NSArray *)syncThrottles;
-(BOOL)_t_isIdle;
-(void)_fixupMissingCrossMovedItems;
-(id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(BOOL)_hasAllItemsDidUploadHandlers;
-(void)_allItemsDidUploadWithError:(id)arg1 ;
-(BOOL)_dumpItemsToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id*)arg3 ;
-(long long)serverRankByItemID:(id)arg1 db:(id)arg2 ;
-(id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2 ;
-(id)documentItemByItemID:(id)arg1 db:(id)arg2 ;
-(id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 db:(id)arg2 ;
-(BOOL)existsByItemID:(id)arg1 db:(id)arg2 ;
-(void)_removeOnDiskBlockToPerformForItemID:(id)arg1 ;
-(void)_removeDownloadedBlockToPerformForItemID:(id)arg1 ;
-(void)_prepareForForegroundSyncDown;
-(void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int*)arg4 containsSize:(BOOL)arg5 context:(id)arg6 ;
-(void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3 ;
-(NSMutableDictionary *)_t_osNamesByItemIDBlockedForSyncUp;
-(NSString *)_t_syncBlockedUntilOSName;
-(void)_finishedProcessingItemThatMovedToThisZone:(id)arg1 ;
-(void)_removeItemFromCZMProcessingIfNotAssociated:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 whenItemWithIDIsDownloaded:(id)arg2 ;
-(id)_refreshItemFromDB:(id)arg1 ;
-(void)_removeItemAndProcess:(id)arg1 ;
-(void)_startDownloadingItemIfNecessary:(id)arg1 ;
-(void)registerAllItemsDidUploadTracker:(id)arg1 ;
-(void)unregisterAllItemsDidUploadTracker:(id)arg1 ;
-(id)itemByFileID:(unsigned long long)arg1 ;
-(id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 ;
-(id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 ;
-(BOOL)existsByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)documentsNotIdleEnumeratorWithDB:(id)arg1 ;
-(void)enumerateFaultsAsyncWithBlock:(/*^block*/id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)didClearOutOfQuota;
-(void)addSyncDownDependency:(id)arg1 ;
-(void)resetSyncBudgetAndThrottle;
-(void)notifyClient:(id)arg1 afterNextSyncDown:(/*^block*/id)arg2 ;
-(void)_t_notifyClient:(id)arg1 whenIdle:(/*^block*/id)arg2 ;
-(void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3 ;
-(void)handleRootRecordDeletion;
-(void)didApplyTombstoneForRank:(long long)arg1 ;
-(BOOL)_resetItemsTable;
-(id)serverItemByRowID:(unsigned long long)arg1 ;
-(id)documentItemByItemID:(id)arg1 ;
-(id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 ;
-(BOOL)existsByItemID:(id)arg1 ;
-(void)_cancelSyncDownFromDBCorruption;
-(BOOL)removeItemOnDiskBlock:(id)arg1 ;
-(BOOL)removeItemIsDownloadedBlock:(id)arg1 ;
-(BOOL)removeSyncDownForItemIDBlock:(id)arg1 ;
-(void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2 ;
-(void)_t_removeItemIDSyncUpBlocking:(id)arg1 ;
-(void)_t_removeAllSyncUpBlocking;
-(void)_t_markBlockedUntilOSName:(id)arg1 ;
-(void)_t_pauseSyncDown;
-(void)_t_resumeSyncDown;
-(void)_t_pauseSyncUp;
-(void)_t_resumeSyncUp;
-(void)itemMovedIntoShareInThisZone:(id)arg1 associatedItemID:(id)arg2 ;
-(void)itemCrossZoneMoved:(id)arg1 withLookup:(id)arg2 ;
-(void)waitForCrossZoneMoveProcessingWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastAttemptedSyncDownDate;
-(void)setLastAttemptedSyncDownDate:(NSDate *)arg1 ;
-(NSSet *)itemIDsBlockedFromSyncForCZMProcessing;
-(BOOL)_t_syncDownBlocked;
-(BOOL)_t_syncUpBlocked;
@end

