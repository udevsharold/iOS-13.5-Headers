/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSUFlushable;
#import <TSUtility/TSUtility-Structs.h>
@class TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary, NSCondition, TSUMemoryWatcher, NSThread;

@interface TSUFlushingManager : NSObject {

	TSURetainedPointerKeyDictionary* _objects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedObjects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedNewObjects;
	TSUPointerKeyDictionary* _inactiveObjects;
	unsigned _clock;
	BOOL _alwaysFlushing;
	BOOL _stopFlushing;
	BOOL _stopFlushingWhenQueueEmpty;
	BOOL _isFlushing;
	id<TSUFlushable> _flushingObject;
	NSCondition* _cond;
	NSCondition* _isFlushingCond;
	TSUMemoryWatcher* _memoryWatcher;
	NSThread* _bgThread;
	unsigned long long _backgroundTransitionTaskId;
	unsigned long long _activeBgThreadTask;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
+(id)_singletonAlloc;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(void)didReceiveMemoryWarning;
-(void)_startFlushingObjects;
-(void)_stopFlushingObjects;
-(void)advanceClock;
-(void)_didUseObject:(id)arg1 ;
-(TSUFlushableObjectInfo*)eraseInfoForObject:(id)arg1 ;
-(void)insertObjectInfo:(TSUFlushableObjectInfo*)arg1 ;
-(void)_flushAllEligible;
-(void)_bgTaskStarted;
-(void)_backgroundThread:(id)arg1 ;
-(void)_bgThreadActive;
-(void)_bgThreadInactive;
-(void)_bgTaskFinished;
-(BOOL)isNewObject:(TSUFlushableObjectInfo*)arg1 ;
-(void)transferNewObjects;
-(void)protectObject:(id)arg1 ;
-(void)stopProtectingObject:(id)arg1 ;
-(void)doneWithObject:(id)arg1 ;
-(void)unsafeToFlush:(id)arg1 ;
-(void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2 ;
-(void)memoryLevelIncreased:(int)arg1 was:(int)arg2 ;
-(void)memoryLevelDecreased:(int)arg1 was:(int)arg2 ;
-(BOOL)controlsActiveObject:(id)arg1 ;
-(BOOL)controlsInactiveObject:(id)arg1 ;
@end

