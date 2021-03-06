/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CKMultiDict : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	unsigned long long _count;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockQueue;              //@synthesize lockQueue=_lockQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;                    //@synthesize dictionary=_dictionary - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(id)allKeys;
-(void)removeAllObjects;
-(NSMutableDictionary *)dictionary;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)peekObjectForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockQueue;
-(void)setLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

