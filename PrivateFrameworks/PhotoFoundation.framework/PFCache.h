/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, PFCachePolicy, PFCacheStatistics;

@interface PFCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _contents;
	PFCachePolicy* _policy;
	PFCacheStatistics* _statistics;
	/*^block*/id _willBeRemovedFromCacheHandler;

}

@property (copy) id willBeRemovedFromCacheHandler;              //@synthesize willBeRemovedFromCacheHandler=_willBeRemovedFromCacheHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)statistics;
-(id)initWithPolicy:(id)arg1 ;
-(void)_removeObjectForKey:(id)arg1 notify:(BOOL)arg2 ;
-(void)removeObjectForKeyWithoutNotification:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)_setEntry:(id)arg1 forKey:(id)arg2 ;
-(id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2 ;
-(void)enumerateCacheEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)willBeRemovedFromCacheHandler;
-(void)setWillBeRemovedFromCacheHandler:(id)arg1 ;
@end

