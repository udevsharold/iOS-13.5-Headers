/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKAsyncTransaction : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionBlock;
	unsigned long long _state;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)completionBlock;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)commit;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCallbackQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAsyncOperationWithBlock:(/*^block*/id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensureTransactionData;
@end

