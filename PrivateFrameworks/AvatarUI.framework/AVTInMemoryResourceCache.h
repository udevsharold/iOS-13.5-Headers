/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/AVTResourceCache.h>

@protocol OS_dispatch_queue, AVTUILogger;
@class NSCache, NSMutableArray, NSObject, NSString;

@interface AVTInMemoryResourceCache : NSObject <NSCacheDelegate, AVTResourceCache> {

	NSCache* _storage;
	NSMutableArray* _orderedEntries;
	NSObject*<OS_dispatch_queue> _storageLock;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) NSCache * storage;                                     //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * orderedEntries;                       //@synthesize orderedEntries=_orderedEntries - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> storageLock;              //@synthesize storageLock=_storageLock - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyForItem:(id)arg1 scope:(id)arg2 ;
+(unsigned long long)costForItem:(id)arg1 scope:(id)arg2 ;
-(void)dealloc;
-(void)clearCache;
-(NSCache *)storage;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id<AVTUILogger>)logger;
-(NSObject*<OS_dispatch_queue>)storageLock;
-(id)_resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(void)performStorageWork:(/*^block*/id)arg1 ;
-(id)observeChangesForItem:(id)arg1 key:(id)arg2 ;
-(void)nts_evictObjectsToFreeUpCost:(unsigned long long)arg1 ;
-(NSMutableArray *)orderedEntries;
-(void)handleChangeForItemForKey:(id)arg1 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(void)evictResourceFromCache:(id)arg1 scope:(id)arg2 ;
-(id)initWithLockProvider:(/*^block*/id)arg1 totalCostLimit:(unsigned long long)arg2 logger:(id)arg3 ;
@end

