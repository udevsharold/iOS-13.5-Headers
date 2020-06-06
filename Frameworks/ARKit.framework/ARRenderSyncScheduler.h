/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@class ARDisplayLink, ARRollingNumberSeries, NSMutableArray;

@interface ARRenderSyncScheduler : NSObject {

	ARDisplayLink* _displayLink;
	ARRollingNumberSeries* _latencies;
	NSMutableArray* _blocks;
	os_unfair_lock_s _lock;
	BOOL _initialLatencyReached;
	BOOL _reportAdjustments;
	BOOL _schedulingActive;
	double _inputJitterBufferInterval;
	unsigned long long _excessiveCallbackOptions;

}

@property (assign) double inputJitterBufferInterval;                         //@synthesize inputJitterBufferInterval=_inputJitterBufferInterval - In the implementation block
@property (assign) long long expectedFramesPerSecond; 
@property (assign) double vsyncOffset; 
@property (assign) BOOL schedulingActive;                                    //@synthesize schedulingActive=_schedulingActive - In the implementation block
@property (assign) unsigned long long excessiveCallbackOptions;              //@synthesize excessiveCallbackOptions=_excessiveCallbackOptions - In the implementation block
-(id)init;
-(void)_callback;
-(id)initWithExpectedFramesPerSecond:(long long)arg1 ;
-(double)vsyncOffset;
-(void)setVsyncOffset:(double)arg1 ;
-(unsigned long long)excessiveCallbackOptions;
-(void)_tryNextBlockWithTotalTried:(unsigned long long)arg1 ;
-(unsigned long long)_callbackActionForBlockWithLatency:(double)arg1 ;
-(double)inputJitterBufferInterval;
-(long long)expectedFramesPerSecond;
-(void)setExpectedFramesPerSecond:(long long)arg1 ;
-(BOOL)schedulingActive;
-(void)setSchedulingActive:(BOOL)arg1 ;
-(void)submitBlock:(/*^block*/id)arg1 ;
-(void)setInputJitterBufferInterval:(double)arg1 ;
-(void)setExcessiveCallbackOptions:(unsigned long long)arg1 ;
@end

