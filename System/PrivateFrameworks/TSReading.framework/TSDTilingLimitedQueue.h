/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TSReading/TSReading-Structs.h>
@class NSObject;

@interface TSDTilingLimitedQueue : NSObject {

	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	unsigned long long mLimit;
	unsigned long long mReaderCount;
	os_unfair_lock_s mSpinLock;

}
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
@end
