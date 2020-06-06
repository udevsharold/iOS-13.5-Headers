/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerCoordinatorDelegate.h>

@protocol PLBackgroundJobLibraryCoordinatorDelegate;
@class NSMutableArray, PLPhotoLibraryBundlePriorityTuple, PLBackgroundJobWorkerCoordinator, NSString;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {

	NSMutableArray* _pendingPhotoLibraryBundles;
	PLPhotoLibraryBundlePriorityTuple* _currentPhotoLibraryBundle;
	PLBackgroundJobWorkerCoordinator* _workerCoordinator;
	os_unfair_lock_s _lock;
	id<PLBackgroundJobLibraryCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBackgroundJobLibraryCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PLBackgroundJobLibraryCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PLBackgroundJobLibraryCoordinatorDelegate>)arg1 ;
-(BOOL)hasPendingJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)stopBackgroundJobsOnAllBundles;
-(void)startBackgroundJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1 ;
-(id)initWithWorkerCoordinator:(id)arg1 ;
-(void)_submitNextQueuedBundle;
-(void)_handleBundleComplete:(id)arg1 ;
-(void)_handleAllBundlesCompleted;
@end

