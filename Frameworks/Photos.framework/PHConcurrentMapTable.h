/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface PHConcurrentMapTable : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMapTable* _protectedTable;

}
+(id)mapTable;
-(id)init;
-(unsigned long long)count;
-(id)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_dispatchIsolatedWriteAsync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedWriteSync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedRead:(/*^block*/id)arg1 ;
-(BOOL)tryRemoveObjectForKey:(id)arg1 ;
@end

