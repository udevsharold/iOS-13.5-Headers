/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/ACHAchievementStoreObserving.h>

@protocol OS_dispatch_queue;
@class HDProfile, ACHTemplateStore, ACHAchievementStore, NSObject, NSSet, NSDictionary, NSCalendar, NSDate, NSString;

@interface ACHTemplateSourceScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving> {

	int _significantTimeChangeToken;
	BOOL _initialRunComplete;
	BOOL _achievementStoreDidFinishInitialFetch;
	BOOL _shouldScheduleAfterInitialFetch;
	HDProfile* _profile;
	ACHTemplateStore* _templateStore;
	ACHAchievementStore* _achievementStore;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSSet* _templateSources;
	NSDictionary* _lastRunDateByTemplateSourceIdentifier;
	NSCalendar* _gregorianCalendar;
	NSDate* _currentDateOverride;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ACHTemplateStore * templateStore;                                  //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHAchievementStore * achievementStore;                            //@synthesize achievementStore=_achievementStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                          //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL initialRunComplete;                                           //@synthesize initialRunComplete=_initialRunComplete - In the implementation block
@property (nonatomic,retain) NSSet * templateSources;                                           //@synthesize templateSources=_templateSources - In the implementation block
@property (nonatomic,retain) NSDictionary * lastRunDateByTemplateSourceIdentifier;              //@synthesize lastRunDateByTemplateSourceIdentifier=_lastRunDateByTemplateSourceIdentifier - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorianCalendar;                                    //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (assign,nonatomic) BOOL achievementStoreDidFinishInitialFetch;                        //@synthesize achievementStoreDidFinishInitialFetch=_achievementStoreDidFinishInitialFetch - In the implementation block
@property (assign,nonatomic) BOOL shouldScheduleAfterInitialFetch;                              //@synthesize shouldScheduleAfterInitialFetch=_shouldScheduleAfterInitialFetch - In the implementation block
@property (nonatomic,readonly) unsigned long long _sourceCount; 
@property (nonatomic,retain) NSDate * currentDateOverride;                                      //@synthesize currentDateOverride=_currentDateOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(unsigned long long)_sourceCount;
-(NSCalendar *)gregorianCalendar;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_currentDate;
-(NSDate *)currentDateOverride;
-(void)setCurrentDateOverride:(NSDate *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(void)daemonReady:(id)arg1 ;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)registerTemplateSource:(id)arg1 ;
-(void)deregisterTemplateSource:(id)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
-(void)achievementStore:(id)arg1 didAddAchievements:(id)arg2 ;
-(void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2 ;
-(void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2 ;
-(void)achievementStoreDidFinishInitialFetch:(id)arg1 ;
-(ACHAchievementStore *)achievementStore;
-(BOOL)_runSynchronouslyWithError:(id*)arg1 ;
-(void)setAchievementStore:(ACHAchievementStore *)arg1 ;
-(NSSet *)templateSources;
-(void)setTemplateSources:(NSSet *)arg1 ;
-(BOOL)initialRunComplete;
-(BOOL)_queue_runTemplateSources:(id)arg1 requiringRunnableForDate:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)achievementStoreDidFinishInitialFetch;
-(void)_runAllTemplateSources;
-(void)setShouldScheduleAfterInitialFetch:(BOOL)arg1 ;
-(NSDictionary *)lastRunDateByTemplateSourceIdentifier;
-(void)setInitialRunComplete:(BOOL)arg1 ;
-(id)_runnableSourcesInSources:(id)arg1 forDate:(id)arg2 calendar:(id)arg3 ;
-(void)setLastRunDateByTemplateSourceIdentifier:(NSDictionary *)arg1 ;
-(void)setAchievementStoreDidFinishInitialFetch:(BOOL)arg1 ;
-(BOOL)shouldScheduleAfterInitialFetch;
-(id)initWithProfile:(id)arg1 templateStore:(id)arg2 achievementStore:(id)arg3 ;
-(void)runImmediatelyForTemplateSource:(id)arg1 ;
@end

