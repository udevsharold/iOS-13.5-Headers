/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (assign) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@optional
-(void)addPerfSampleHandler:(/*^block*/id)arg1;
-(void)setStatEnabled:(BOOL)arg1;
-(void)setStatLocations:(unsigned long long)arg1;
-(void)setStatOptions:(unsigned long long)arg1;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
-(id)availableCounters;
-(id)availableCountersAndDict;
-(int)requestCounters:(id)arg1;
-(id)getRequestedCounters;
-(id)subdivideCounterList:(id)arg1;
-(id)counterInfo;
-(BOOL)isStatEnabled;
-(unsigned long long)getStatOptions;
-(unsigned long long)getStatLocations;

@required
-(void)finish;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1;
-(BOOL)setGPUPriority:(unsigned long long)arg1;
-(void)setCompletionQueue:(id)arg1;
-(void)setSubmissionQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)qosLevel;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(BOOL)commitSynchronously;
-(BOOL)disableCrossQueueHazardTracking;
-(BOOL)skipRender;
-(void)setSkipRender:(BOOL)arg1;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1;
-(BOOL)isOpenGLQueue;
-(void)setIsOpenGLQueue:(BOOL)arg1;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1;

@end

