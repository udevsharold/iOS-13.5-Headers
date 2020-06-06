/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SignpostCAStallAggregation, SignpostCAInstrumentationProcessor;

@interface SignpostCAStallAggregationBuilder : NSObject {

	unsigned long long _frameLifetimeCount;
	unsigned long long _commitCount;
	unsigned long long _transactionLifetimeCount;
	float _maxDurationSec;
	NSObject*<OS_dispatch_queue> _syncQueue;
	SignpostCAStallAggregation* _stallAggregation;
	SignpostCAInstrumentationProcessor* _caInstrumentationProcessor;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;                                       //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,readonly) SignpostCAStallAggregation * stallAggregation;                                //@synthesize stallAggregation=_stallAggregation - In the implementation block
@property (nonatomic,readonly) SignpostCAInstrumentationProcessor * caInstrumentationProcessor;              //@synthesize caInstrumentationProcessor=_caInstrumentationProcessor - In the implementation block
@property (nonatomic,copy,readonly) SignpostCAStallAggregation * stallAggregationSnapshot; 
@property (assign,nonatomic) float maxDurationSec;                                                           //@synthesize maxDurationSec=_maxDurationSec - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)handleSignpostInterval:(id)arg1 ;
-(void)handleSignpostIntervalBegin:(id)arg1 ;
-(void)handleSignpostEvent:(id)arg1 ;
-(void)handleDeviceReboot;
-(id)newConfiguredExtractor;
-(SignpostCAInstrumentationProcessor *)caInstrumentationProcessor;
-(void)_handleLongCommit:(id)arg1 ;
-(void)_handleLongTransactionLifetime:(id)arg1 ;
-(void)_handleLongFrameLifetime:(id)arg1 ;
-(void)_initializeCAInstrumentationProcessor;
-(SignpostCAStallAggregation *)stallAggregation;
-(float)maxDurationSec;
-(BOOL)_isOverThreshold:(id)arg1 ;
-(void)_processDurationNs:(unsigned long long)arg1 type:(unsigned char)arg2 processExecutablePath:(id)arg3 pid:(int)arg4 aggregateForSystem:(BOOL)arg5 ;
-(void)addSubsystemCategoriesOfInterestToWhitelist:(id)arg1 ;
-(SignpostCAStallAggregation *)stallAggregationSnapshot;
-(void)setMaxDurationSec:(float)arg1 ;
@end

