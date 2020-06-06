/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASLock;

@interface ATXBackgroundSaver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	_PASLock* _lock;

}
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)scheduleSave;
-(void)scheduleSaveImmediately;
-(void)_cancelSaveTimerWithLockWitness:(id)arg1 ;
-(void)_cancelSaveTimer;
@end

