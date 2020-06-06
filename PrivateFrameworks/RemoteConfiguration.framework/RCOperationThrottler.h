/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottler
@property (assign) BOOL suspended; 
@required
-(void)setSuspended:(BOOL)arg1;
-(BOOL)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface RCOperationThrottler : NSObject <RCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
@end

