/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

	NSOperationQueue* _queue;
	long long _priority;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3 ;
@end

