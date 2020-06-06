/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDStringKeyDataValueStoring.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, NSMutableDictionary;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _archivingQueue;
	BOOL _needToPersist;
	NSObject*<OS_os_log> _log;
	NSMutableDictionary* _dictionary;
	void* _mappedMem;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
+(id)sharedInstance;
+(id)defaultName;
+(unsigned long long)defaultSize;
+(id)log;
+(void*)openOrCreateSharedMemoryWithName:(id)arg1 size:(unsigned long long)arg2 ;
+(id)readKeyedDataDictionaryFromMemory:(void*)arg1 size:(unsigned long long)arg2 ;
+(id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2 ;
-(id)description;
-(id)allKeys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)size;
-(id)valueForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 size:(unsigned long long)arg2 ;
-(id)errorForExceedingSizeLimits;
-(BOOL)persistToShMemWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)asyncPersistToShMemWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)removeDataForKeys:(id)arg1 ;
-(BOOL)removeDataForKey:(id)arg1 ;
-(void*)memoryPointer;
@end

