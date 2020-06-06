/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSString, NSError;

@interface STYUserScenarioCache : NSObject {

	NSMutableDictionary* _scenarioObjects;
	NSDictionary* _bundleIdForAppName;
	NSString* _hwModel;
	NSError* _badConfigError;
	NSError* _bundledIdLookupFailedrror;
	NSDictionary* _responsivenessThresholdsForWhitelistedSubsystems;
	NSDictionary* _responsivenessThresholdsForWhitelistedCategories;
	NSDictionary* _responsivenessThresholdsForWhitelistedNames;
	NSDictionary* _animationThresholdsForWhitelistedSubsystems;
	NSDictionary* _animationThresholdsForWhitelistedCategories;
	NSDictionary* _animationThresholdsForWhitelistedNames;
	NSMutableDictionary* _lifecycleScenarios;

}

@property (retain) NSMutableDictionary * scenarioObjects;                                        //@synthesize scenarioObjects=_scenarioObjects - In the implementation block
@property (retain) NSDictionary * bundleIdForAppName;                                            //@synthesize bundleIdForAppName=_bundleIdForAppName - In the implementation block
@property (retain) NSString * hwModel;                                                           //@synthesize hwModel=_hwModel - In the implementation block
@property (retain) NSError * badConfigError;                                                     //@synthesize badConfigError=_badConfigError - In the implementation block
@property (retain) NSError * bundledIdLookupFailedrror;                                          //@synthesize bundledIdLookupFailedrror=_bundledIdLookupFailedrror - In the implementation block
@property (retain) NSDictionary * responsivenessThresholdsForWhitelistedSubsystems;              //@synthesize responsivenessThresholdsForWhitelistedSubsystems=_responsivenessThresholdsForWhitelistedSubsystems - In the implementation block
@property (retain) NSDictionary * responsivenessThresholdsForWhitelistedCategories;              //@synthesize responsivenessThresholdsForWhitelistedCategories=_responsivenessThresholdsForWhitelistedCategories - In the implementation block
@property (retain) NSDictionary * responsivenessThresholdsForWhitelistedNames;                   //@synthesize responsivenessThresholdsForWhitelistedNames=_responsivenessThresholdsForWhitelistedNames - In the implementation block
@property (retain) NSDictionary * animationThresholdsForWhitelistedSubsystems;                   //@synthesize animationThresholdsForWhitelistedSubsystems=_animationThresholdsForWhitelistedSubsystems - In the implementation block
@property (retain) NSDictionary * animationThresholdsForWhitelistedCategories;                   //@synthesize animationThresholdsForWhitelistedCategories=_animationThresholdsForWhitelistedCategories - In the implementation block
@property (retain) NSDictionary * animationThresholdsForWhitelistedNames;                        //@synthesize animationThresholdsForWhitelistedNames=_animationThresholdsForWhitelistedNames - In the implementation block
@property (retain) NSMutableDictionary * lifecycleScenarios;                                     //@synthesize lifecycleScenarios=_lifecycleScenarios - In the implementation block
+(id)sharedCache;
+(id)internalResourceBundle;
-(id)initWithPlatform:(id)arg1 ;
-(float)latencyGoalsForSignpostInterval:(id)arg1 ;
-(float)framerateGoalsForSignpostInterval:(id)arg1 ;
-(id)scenarioFromSignpostEvent:(id)arg1 error:(id*)arg2 ;
-(id)scenarioFromSignpostInterval:(id)arg1 error:(id*)arg2 ;
-(BOOL)setupWhitelistedScenarios:(id)arg1 bundles:(id)arg2 ;
-(void)setupBundleIdWhitelists:(id)arg1 bundles:(id)arg2 ;
-(BOOL)setupWhitelistedResponsivenessScenarios:(id)arg1 bundles:(id)arg2 ;
-(BOOL)setupWhitelistedAnimationScenarios:(id)arg1 bundles:(id)arg2 ;
-(id)loadWhitelist:(id)arg1 platform:(id)arg2 bundles:(id)arg3 ;
-(BOOL)isAnimationScenarioWhitelisted:(id)arg1 error:(id*)arg2 ;
-(BOOL)isResponsivenessScenarioWhitelisted:(id)arg1 error:(id*)arg2 ;
-(BOOL)processWhitelisted:(id)arg1 error:(id*)arg2 ;
-(BOOL)scenarioWhitelisted:(id)arg1 error:(id*)arg2 ;
-(id)scenarioIdForSignpostInterval:(id)arg1 ;
-(id)scenarioGroupForSignpostInterval:(id)arg1 ;
-(id)processBundleIdForSignpostInterval:(id)arg1 ;
-(int)processIdForSignpostEvent:(id)arg1 ;
-(BOOL)kpiIsLatency:(id)arg1 ;
-(id)scenarioForFrontboardLaunchWatchdog:(id)arg1 ;
-(id)bundleIdForProcessName:(id)arg1 ;
-(id)scenarioIdForSignpostEmittedEvent:(id)arg1 ;
-(id)appNameFromBundleId:(id)arg1 ;
-(NSMutableDictionary *)scenarioObjects;
-(void)setScenarioObjects:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)bundleIdForAppName;
-(void)setBundleIdForAppName:(NSDictionary *)arg1 ;
-(NSString *)hwModel;
-(void)setHwModel:(NSString *)arg1 ;
-(NSError *)badConfigError;
-(void)setBadConfigError:(NSError *)arg1 ;
-(NSError *)bundledIdLookupFailedrror;
-(void)setBundledIdLookupFailedrror:(NSError *)arg1 ;
-(NSDictionary *)responsivenessThresholdsForWhitelistedSubsystems;
-(void)setResponsivenessThresholdsForWhitelistedSubsystems:(NSDictionary *)arg1 ;
-(NSDictionary *)responsivenessThresholdsForWhitelistedCategories;
-(void)setResponsivenessThresholdsForWhitelistedCategories:(NSDictionary *)arg1 ;
-(NSDictionary *)responsivenessThresholdsForWhitelistedNames;
-(void)setResponsivenessThresholdsForWhitelistedNames:(NSDictionary *)arg1 ;
-(NSDictionary *)animationThresholdsForWhitelistedSubsystems;
-(void)setAnimationThresholdsForWhitelistedSubsystems:(NSDictionary *)arg1 ;
-(NSDictionary *)animationThresholdsForWhitelistedCategories;
-(void)setAnimationThresholdsForWhitelistedCategories:(NSDictionary *)arg1 ;
-(NSDictionary *)animationThresholdsForWhitelistedNames;
-(void)setAnimationThresholdsForWhitelistedNames:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)lifecycleScenarios;
-(void)setLifecycleScenarios:(NSMutableDictionary *)arg1 ;
@end

