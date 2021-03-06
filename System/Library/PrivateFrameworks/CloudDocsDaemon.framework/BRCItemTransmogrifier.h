/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class BRCAccountSession, NSObject, NSMutableArray, NSOperationQueue, NSMutableDictionary;

@interface BRCItemTransmogrifier : NSObject {

	BRCAccountSession* _session;
	NSObject*<OS_dispatch_source> _pendingRenamesTimer;
	NSMutableArray* _pendingRenames;
	NSOperationQueue* _queue;
	NSMutableDictionary* _pendingTransmogirifcations;

}
-(id)queue;
-(id)initWithSession:(id)arg1 ;
-(BOOL)addOperation:(id)arg1 forItem:(id)arg2 ;
-(void)removeOperationsForItem:(id)arg1 ;
-(void)_finishDirectoryToPackageTransmogrification:(id)arg1 relpath:(id)arg2 ;
-(double)_renameDelayForZone:(id)arg1 ;
-(double)_renameItem:(id)arg1 ;
-(void)_scheduleRenameAfter:(double)arg1 onQueue:(id)arg2 ;
-(void)_renameItems;
-(void)scheduleDirectoryToPackageTransmogrification:(id)arg1 absolutePath:(id)arg2 ;
-(void)scheduleBouncedDirectoryRename:(id)arg1 ;
@end

