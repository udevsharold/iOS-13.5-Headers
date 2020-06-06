/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFDispatchQueueExtension.h>

@protocol OS_os_transaction;
@class PFDispatchQueue, NSObject;

@interface PFDispatchQueueOSTransactionExtension : PFDispatchQueueExtension {

	PFDispatchQueue* _queue;
	NSObject*<OS_os_transaction> _currentTransaction;
	unsigned long long _transactionUseCount;
	os_unfair_lock_s _lock;

}
-(id)init;
-(id)description;
-(void)installOnQueue:(id)arg1 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(id)newBlockInfo;
-(void)_blockCompleted;
-(void)dispatchTransactionName:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)dispatchTransactionName:(id)arg1 qos:(unsigned)arg2 async:(/*^block*/id)arg3 ;
-(void)dispatchTransactionName:(id)arg1 asyncWithCurrentQOS:(/*^block*/id)arg2 ;
@end

