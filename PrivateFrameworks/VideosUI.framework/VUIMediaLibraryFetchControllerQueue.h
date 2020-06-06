/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUINowPlayingObserverDelegate.h>

@protocol VUIMediaLibraryFetchControllerQueueDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, VUIMediaLibrary, VUIMediaLibraryFetchControllerQueueOperation, VUIDelayOperation, NSOperationQueue, VUINowPlayingObserver, NSArray, NSString;

@interface VUIMediaLibraryFetchControllerQueue : NSObject <VUINowPlayingObserverDelegate> {

	BOOL _paused;
	BOOL _shouldFetchOnResume;
	id<VUIMediaLibraryFetchControllerQueueDelegate> _delegate;
	NSMutableArray* _mutableFetchControllers;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	VUIMediaLibrary* _mediaLibrary;
	unsigned long long _mediaLibraryRevision;
	VUIMediaLibraryFetchControllerQueueOperation* _currentFetchOperation;
	VUIDelayOperation* _delayContentsChangeOperation;
	NSOperationQueue* _serialFetchOperationQueue;
	VUINowPlayingObserver* _nowPlayingObserver;

}

@property (nonatomic,retain) NSMutableArray * mutableFetchControllers;                                          //@synthesize mutableFetchControllers=_mutableFetchControllers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;                        //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                       //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchOnResume;                                                          //@synthesize shouldFetchOnResume=_shouldFetchOnResume - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibraryRevision;                                           //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
@property (nonatomic,retain) VUIMediaLibraryFetchControllerQueueOperation * currentFetchOperation;              //@synthesize currentFetchOperation=_currentFetchOperation - In the implementation block
@property (nonatomic,retain) VUIDelayOperation * delayContentsChangeOperation;                                  //@synthesize delayContentsChangeOperation=_delayContentsChangeOperation - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialFetchOperationQueue;                                      //@synthesize serialFetchOperationQueue=_serialFetchOperationQueue - In the implementation block
@property (nonatomic,retain) VUINowPlayingObserver * nowPlayingObserver;                                        //@synthesize nowPlayingObserver=_nowPlayingObserver - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMediaLibraryFetchControllerQueueDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fetchControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultQueueWithMediaLibrary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<VUIMediaLibraryFetchControllerQueueDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaLibraryFetchControllerQueueDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(void)pauseFetching;
-(void)resumeFetching;
-(id)initWithMediaLibrary:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)fetchControllers;
-(unsigned long long)mediaLibraryRevision;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
-(void)addFetchController:(id)arg1 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_removeStateObserverForFetchControllers:(id)arg1 ;
-(NSMutableArray *)mutableFetchControllers;
-(void)_enqueueSyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)addFetchControllers:(id)arg1 ;
-(void)_addStateObserverForFetchControllers:(id)arg1 ;
-(void)_enqueueControllerFetchOperation;
-(void)removeFetchControllers:(id)arg1 ;
-(void)_enqueueAsyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)_handleMediaLibraryContentsChange;
-(VUIDelayOperation *)delayContentsChangeOperation;
-(void)_delayContentsChangeOperationDidComplete:(id)arg1 ;
-(void)setDelayContentsChangeOperation:(VUIDelayOperation *)arg1 ;
-(VUIMediaLibraryFetchControllerQueueOperation *)currentFetchOperation;
-(void)setCurrentFetchOperation:(VUIMediaLibraryFetchControllerQueueOperation *)arg1 ;
-(void)_notifyDelegateFetchDidComplete;
-(void)setShouldFetchOnResume:(BOOL)arg1 ;
-(void)_queueOperationDidComplete:(id)arg1 ;
-(NSOperationQueue *)serialFetchOperationQueue;
-(BOOL)shouldFetchOnResume;
-(void)nowPlayingObserver:(id)arg1 latestObservationDidChange:(id)arg2 ;
-(void)removeFetchController:(id)arg1 ;
-(void)_enqueueProcessingQueueBlock:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)setMutableFetchControllers:(NSMutableArray *)arg1 ;
-(void)setSerialFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(VUINowPlayingObserver *)nowPlayingObserver;
-(void)setNowPlayingObserver:(VUINowPlayingObserver *)arg1 ;
@end

