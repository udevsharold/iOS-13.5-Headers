/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _backingDictionary;
	AMSDoubleLinkedList* _backingList;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingDictionary;               //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedList * backingList;                     //@synthesize backingList=_backingList - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)_count;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(unsigned long long)maxSize;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 withCreationBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)backingDictionary;
-(AMSDoubleLinkedList *)backingList;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)allObjectsAndKeys;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBackingList:(AMSDoubleLinkedList *)arg1 ;
@end

