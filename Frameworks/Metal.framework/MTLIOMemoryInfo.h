/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {

	void* memlist_key;
	MTLIOAccelResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)shutdown;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeDataSource:(void*)arg1 ;
-(void)addResourceToList:(id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(CFArrayRef)annotationList;
@end

