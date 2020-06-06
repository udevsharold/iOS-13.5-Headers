/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLBatchExtractionStrategyStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, CPLBatchExtractionStrategy, NSString, NSObject, NSDate, CPLPlatformObject;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage> {

	NSMutableDictionary* _propertiesPerClass;
	CPLBatchExtractionStrategy* _extractionStrategy;
	NSString* _lastStrategyName;
	NSObject*<OS_dispatch_queue> _uploadRateQueue;
	NSObject*<OS_dispatch_queue> _timingStatisticQueue;
	NSDate* _lastUploadRateUpdateDate;
	NSMutableDictionary* _timingStatistics;
	double _lastApproximativeUploadRate;

}

@property (nonatomic,retain) CPLBatchExtractionStrategy * extractionStrategy; 
@property (nonatomic,readonly) unsigned long long maximumResourceSizePerBatch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)isEmpty;
-(id)status;
-(unsigned long long)scopeType;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(BOOL)arg3 ;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3 ;
-(id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 ;
-(id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2 ;
-(id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2 ;
-(id)allChangesWithScopeIdentifier:(id)arg1 ;
-(BOOL)removeChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasChangesInScopeWithIdentifier:(id)arg1 ;
-(unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithScopeFilter:(id)arg1 ;
-(BOOL)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_propertiesForChange:(id)arg1 ;
-(id)_completeChange:(id)arg1 ;
-(BOOL)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1 ;
-(BOOL)discardChangeWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllChangesWithError:(id*)arg1 ;
-(BOOL)storeExtractedBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id*)arg2 error:(id*)arg3 ;
-(id)storedExtractedBatch;
-(void)setExtractionStrategy:(CPLBatchExtractionStrategy *)arg1 ;
-(CPLBatchExtractionStrategy *)extractionStrategy;
-(void)updateApproximativeUploadRate:(double)arg1 ;
-(unsigned long long)maximumResourceSizePerBatch;
-(void)updateTimingStatisticForKey:(id)arg1 duration:(double)arg2 recordCount:(unsigned long long)arg3 error:(BOOL)arg4 cancelled:(BOOL)arg5 ;
-(id)_timingStatisticStatuses;
@end

