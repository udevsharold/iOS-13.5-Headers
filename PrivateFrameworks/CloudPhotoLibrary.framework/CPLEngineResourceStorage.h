/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class CPLPlatformObject, NSMutableDictionary, NSURL, NSObject, _CPLPruneRequestCounter, CPLEngineFileStorage, NSString;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {

	NSMutableDictionary* _identitiesToCommit;
	NSMutableDictionary* _identitiesToDelete;
	NSURL* _tempFolderURL;
	NSObject*<OS_dispatch_queue> _pruneStatsQueue;
	_CPLPruneRequestCounter* _pruneRequests;
	_CPLPruneRequestCounter* _purgeabilityCheckRequests;
	BOOL _shouldCreateTempFolder;
	BOOL _shouldCheckFilesForUpload;
	CPLEngineFileStorage* _fileStorage;

}

@property (nonatomic,readonly) CPLEngineFileStorage * fileStorage;              //@synthesize fileStorage=_fileStorage - In the implementation block
@property (assign,nonatomic) BOOL shouldCheckFilesForUpload;                    //@synthesize shouldCheckFilesForUpload=_shouldCheckFilesForUpload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(unsigned long long)sizeOfResourcesToUpload;
-(unsigned long long)scopeType;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)compactWithError:(id*)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)_clearAndCreateTempFolderIfNecessaryWithError:(id*)arg1 ;
-(BOOL)storeResourceForUpload:(id)arg1 shouldCheckResource:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)storeResourceCopyForUpload:(id)arg1 error:(id*)arg2 ;
-(BOOL)dropResourceForUpload:(id)arg1 error:(id*)arg2 ;
-(id)retainFileURLForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasResource:(id)arg1 ;
-(id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)checkIsEmpty;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)statusDictionary;
-(void)notePruningRequestForResource:(id)arg1 realPrune:(BOOL)arg2 successful:(BOOL)arg3 prunedSize:(unsigned long long)arg4 ;
-(void)notePruningRequestForResource:(id)arg1 realPrune:(BOOL)arg2 successful:(BOOL)arg3 ;
-(CPLEngineFileStorage *)fileStorage;
-(BOOL)shouldCheckFilesForUpload;
-(void)setShouldCheckFilesForUpload:(BOOL)arg1 ;
@end

