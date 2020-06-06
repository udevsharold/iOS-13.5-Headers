/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:44 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface JXOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (assign) BOOL isExecuting;                                     //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                      //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)finish;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)willFinish;
-(void)startAndWaitUntilFinished;
@end

