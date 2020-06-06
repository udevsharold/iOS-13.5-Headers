/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMRecentItemsList : NSObject {

	NSObject*<OS_dispatch_queue> _diskWritingQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_guidForFileURL:(id)arg1 ;
-(void)_removeRecentDataPayloadEntry:(id)arg1 forDomain:(id)arg2 ;
-(void)dispatchCacheUpdateWithBlock:(/*^block*/id)arg1 ;
-(void)_addRecentDataPayloadEntry:(id)arg1 toDomain:(id)arg2 ;
-(id)_recentsCacheForDomain:(id)arg1 ;
-(id)_buildLRUCacheUsingArray:(id)arg1 forDomain:(id)arg2 ;
-(void)_removeRecentDataPayloadEntryFromDisk:(id)arg1 forDomain:(id)arg2 ;
-(void)_saveRecentDataPayloadEntryToDisk:(id)arg1 forDomain:(id)arg2 ;
-(void)_updateRecentsCache:(id)arg1 forDomain:(id)arg2 ;
-(long long)cacheSizeForDomain:(id)arg1 ;
-(void)deleteRecentItemWithFileURL:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3 ;
-(void)deleteRecentItemWithData:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3 ;
-(void)deleteAllRecentItemsForDomain:(id)arg1 ;
-(void)deleteRecentsInFirstLaunch;
-(void)addRecentItemWithData:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4 ;
-(void)fetchRecentStickersWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRecentItemsForDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addRecentItemAtFileURL:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4 ;
@end

