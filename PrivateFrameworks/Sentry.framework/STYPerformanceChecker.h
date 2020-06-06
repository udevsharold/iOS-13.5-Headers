/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface STYPerformanceChecker : NSObject {

	BOOL _underMemoryPressure;
	BOOL _underThermalPressure;
	NSDictionary* _perfCheckerErrors;
	NSObject*<OS_dispatch_queue> _serialUtilityQueue;

}

@property (retain) NSDictionary * perfCheckerErrors;                             //@synthesize perfCheckerErrors=_perfCheckerErrors - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serialUtilityQueue;              //@synthesize serialUtilityQueue=_serialUtilityQueue - In the implementation block
@property (assign) BOOL underMemoryPressure;                                     //@synthesize underMemoryPressure=_underMemoryPressure - In the implementation block
@property (assign) BOOL underThermalPressure;                                    //@synthesize underThermalPressure=_underThermalPressure - In the implementation block
+(id)sharedPerfChecker;
-(void)dealloc;
-(void)setSerialUtilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialUtilityQueue;
-(void)setPerfCheckerErrors:(NSDictionary *)arg1 ;
-(void)setUnderThermalPressure:(BOOL)arg1 ;
-(void)setUnderMemoryPressure:(BOOL)arg1 ;
-(void)checkFramerateOfAnimationScenario:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkLatencyOfResponsivenessScenario:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportError:(long long)arg1 report:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)triage:(id)arg1 ;
-(void)checkPerformanceOfScenarioReport:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)perfCheckerErrors;
-(BOOL)underMemoryPressure;
-(BOOL)underThermalPressure;
@end

