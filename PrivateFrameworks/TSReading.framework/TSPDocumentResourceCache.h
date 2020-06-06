/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TSPDocumentResourceCache : NSObject {

	NSURL* _cacheURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _entries;
	long long _maxCacheSizeInBytes;

}

@property (assign,nonatomic) long long maxCacheSizeInBytes;              //@synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes - In the implementation block
+(id)sharedCache;
+(id)defaultCacheURL;
-(id)init;
-(void)clearCache;
-(id)initWithCacheURL:(id)arg1 ;
-(void)reloadEntries;
-(id)entryForDigestString:(id)arg1 ;
-(void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1 ;
-(void)enumerateEntriesFromCacheURLWithHandler:(/*^block*/id)arg1 ;
-(id)URLForDocumentResourceDigestString:(id)arg1 ;
-(BOOL)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(BOOL)arg5 ;
-(BOOL)beginDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)endDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)shrinkCache;
-(long long)maxCacheSizeInBytes;
-(void)setMaxCacheSizeInBytes:(long long)arg1 ;
@end

