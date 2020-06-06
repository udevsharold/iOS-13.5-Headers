/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFFuture.h>

@protocol EFScheduler;
@class NSConditionLock, EFPromise;

@interface EFLazyFuture : EFFuture {

	NSConditionLock* _stateLock;
	id<EFScheduler> _scheduler;
	/*^block*/id _block;
	EFPromise* _promise;

}
-(BOOL)run;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(id)initWithScheduler:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)resultIfAvailable:(id*)arg1 ;
-(BOOL)tryCancel;
@end

