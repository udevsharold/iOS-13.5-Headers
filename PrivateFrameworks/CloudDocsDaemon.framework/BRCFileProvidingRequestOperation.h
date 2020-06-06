/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCDownloadTracking.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, BRCXPCClient, NSURL, BRCDirectoryItem, BRCTreeEnumerator, NSMutableSet, NSSet, NSMutableArray, NSError, NSString;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass> {

	BRCAccountSession* _session;
	BRCXPCClient* _client;
	NSURL* _url;
	BRCDirectoryItem* _directoryItem;
	BRCTreeEnumerator* _treeEnumerator;
	NSMutableSet* _trackedDocIDs;
	NSSet* _docIDsToCancel;
	NSMutableArray* _callbacks;
	NSError* _lastDownloadError;
	BOOL _isStillEnumeratingDirectory;
	BOOL _isFinished;
	BOOL _isMonitoringReachability;
	NSMutableSet* _appLibrariesMonitored;
	BOOL _isRecursive;
	BOOL _isForBackup;
	BOOL _wantsCurrentVersion;

}

@property (assign,nonatomic) BOOL isRecursive;                      //@synthesize isRecursive=_isRecursive - In the implementation block
@property (assign,nonatomic) BOOL isForBackup;                      //@synthesize isForBackup=_isForBackup - In the implementation block
@property (assign,nonatomic) BOOL wantsCurrentVersion;              //@synthesize wantsCurrentVersion=_wantsCurrentVersion - In the implementation block
@property (nonatomic,readonly) NSSet * trackedDocIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsCurrentVersion;
-(void)setWantsCurrentVersion:(BOOL)arg1 ;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)downloadTrackedForItemWithDocID:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithDirectoryItem:(id)arg1 ;
-(void)addCompletionCallback:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3 ;
-(void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2 ;
-(void)_finishAfterWaitingForDocumentsWithID:(id)arg1 error:(id)arg2 ;
-(BOOL)isForBackup;
-(void)_provideDocument:(id)arg1 ;
-(BOOL)isRecursive;
-(void)_provideDirectoryRecursively:(id)arg1 ;
-(void)_provideURL;
-(void)_provideItem;
-(NSSet *)trackedDocIDs;
-(id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4 ;
-(void)setIsRecursive:(BOOL)arg1 ;
-(void)setIsForBackup:(BOOL)arg1 ;
@end

