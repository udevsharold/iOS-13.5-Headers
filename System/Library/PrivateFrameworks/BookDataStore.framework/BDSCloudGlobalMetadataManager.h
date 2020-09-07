/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCCloudDataSyncManagerDelegate.h>
#import <libobjc.A.dylib/BDSCloudGlobalMetadataManager.h>

@protocol BDSCloudGlobalMetadataManager <NSObject,BDSCloudKitSupportSignOutDeleteWithoutInstance>
@required
-(void)currentCloudSyncVersions:(/*^block*/id)arg1;
-(void)metadatumForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setMetadatum:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteMetadatumForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)metadatumIncludingDeleted:(BOOL)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchMetadataIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)getMetadataChangesSince:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolvedMetadataValueForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)metadataValueForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;

@end


@class BCCloudDataSource, BCCloudDataSyncManager, BCCloudDataManager, NSManagedObjectModel, BCCloudChangeTokenController, NSMutableDictionary, NSString;

@interface BDSCloudGlobalMetadataManager : NSObject <BCCloudDataSyncManagerDelegate, BDSCloudGlobalMetadataManager> {

	BOOL _enableCloudSync;
	BCCloudDataSource* _globalMetadataDataSource;
	BCCloudDataSyncManager* _syncManager;
	BCCloudDataManager* _dataManager;
	NSManagedObjectModel* _objectModel;
	BCCloudChangeTokenController* _changeTokenController;
	NSMutableDictionary* _conflictResolvers;

}

@property (nonatomic,retain) BCCloudDataSource * globalMetadataDataSource;                      //@synthesize globalMetadataDataSource=_globalMetadataDataSource - In the implementation block
@property (nonatomic,retain) BCCloudDataSyncManager * syncManager;                              //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) BCCloudDataManager * dataManager;                                  //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * objectModel;                                //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) BCCloudChangeTokenController * changeTokenController;              //@synthesize changeTokenController=_changeTokenController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conflictResolvers;                           //@synthesize conflictResolvers=_conflictResolvers - In the implementation block
@property (assign,nonatomic) BOOL enableCloudSync;                                              //@synthesize enableCloudSync=_enableCloudSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)entityName;
-(BCCloudDataManager *)dataManager;
-(void)setDataManager:(BCCloudDataManager *)arg1 ;
-(void)setObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectModel *)objectModel;
-(BCCloudDataSyncManager *)syncManager;
-(void)setSyncManager:(BCCloudDataSyncManager *)arg1 ;
-(void)currentCloudSyncVersions:(/*^block*/id)arg1 ;
-(BOOL)enableCloudSync;
-(void)syncManager:(id)arg1 startSyncToCKWithCompletion:(/*^block*/id)arg2 ;
-(void)signalSyncToCKForSyncManager:(id)arg1 ;
-(void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2 ;
-(void)setEnableCloudSync:(BOOL)arg1 ;
-(BCCloudChangeTokenController *)changeTokenController;
-(void)setChangeTokenController:(BCCloudChangeTokenController *)arg1 ;
-(void)updateSyncGenerationFromCloudData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCloudDataSource:(id)arg1 ;
-(NSMutableDictionary *)conflictResolvers;
-(void)setConflictResolvers:(NSMutableDictionary *)arg1 ;
-(void)removeMetadataForSaltedHashedRecordIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)metadatumForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMetadatum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMetadatumForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)metadatumIncludingDeleted:(BOOL)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMetadataIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMetadataChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolvedMetadataValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)metadataValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConflictResolver:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeConflictResolverForKey:(id)arg1 ;
-(BCCloudDataSource *)globalMetadataDataSource;
-(void)setGlobalMetadataDataSource:(BCCloudDataSource *)arg1 ;
@end
