/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class NSConditionLock, NSMutableArray, NSString;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator> {

	NSConditionLock* _lock;
	NSMutableArray* _items;
	unsigned long long _numThreads;
	unsigned long long _maxThreads;
	int _threadPriorityTrigger;
	double _threadRecycleTimeout;

}

@property (assign,nonatomic) unsigned long long maxThreadCount; 
@property (assign,nonatomic) int threadPriorityTrigger;                         //@synthesize threadPriorityTrigger=_threadPriorityTrigger - In the implementation block
@property (assign,nonatomic) double threadRecycleTimeout;                       //@synthesize threadRecycleTimeout=_threadRecycleTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long invocationCount; 
@property (nonatomic,readonly) unsigned long long threadCount;                  //@synthesize numThreads=_numThreads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInvocationQueue;
+(void)flushAllInvocationQueues;
-(id)init;
-(void)dealloc;
-(void)removeAllItems;
-(id)copyDiagnosticInformation;
-(void)addInvocation:(id)arg1 ;
-(void)didCancel:(id)arg1 ;
-(id)initWithMaxThreadCount:(unsigned long long)arg1 ;
-(void)setThreadRecycleTimeout:(double)arg1 ;
-(void)_drainQueue:(id)arg1 ;
-(void)setMaxThreadCount:(unsigned long long)arg1 ;
-(unsigned long long)maxThreadCount;
-(unsigned long long)invocationCount;
-(unsigned long long)threadCount;
-(int)threadPriorityTrigger;
-(void)setThreadPriorityTrigger:(int)arg1 ;
-(double)threadRecycleTimeout;
@end

