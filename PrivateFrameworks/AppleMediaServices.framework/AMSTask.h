/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AMSPromise;

@interface AMSTask : NSObject {

	BOOL _cancelled;
	long long _runMode;
	NSObject*<OS_dispatch_queue> _performTaskQueue;
	AMSPromise* _promise;
	NSObject*<OS_dispatch_queue> _promiseAccessQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> performTaskQueue;              //@synthesize performTaskQueue=_performTaskQueue - In the implementation block
@property (nonatomic,retain) AMSPromise * promise;                                         //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> promiseAccessQueue;              //@synthesize promiseAccessQueue=_promiseAccessQueue - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) long long runMode;                                            //@synthesize runMode=_runMode - In the implementation block
+(id)taskCacheAccessQueue;
+(id)taskCache;
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isRunning;
-(AMSPromise *)promise;
-(void)setPromise:(AMSPromise *)arg1 ;
-(id)performBinaryTaskWithBlock:(/*^block*/id)arg1 ;
-(id)performTaskWithBlock:(/*^block*/id)arg1 ;
-(void)setRunMode:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)promiseAccessQueue;
-(long long)runMode;
-(NSObject*<OS_dispatch_queue>)performTaskQueue;
-(void)setPromiseAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

