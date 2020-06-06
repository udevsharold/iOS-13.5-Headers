/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class HDProfile, ACHEarnedInstanceStore, HDPeriodicActivity, NSMutableDictionary, NSObject, NSString;

@interface ACHAWDSubmissionManager : NSObject <HDPeriodicActivityDelegate> {

	HDProfile* _profile;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	HDPeriodicActivity* _scheduler;
	NSMutableDictionary* _serverConnectionsByComponentId;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;                      //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) HDPeriodicActivity * scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serverConnectionsByComponentId;              //@synthesize serverConnectionsByComponentId=_serverConnectionsByComponentId - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDPeriodicActivity *)scheduler;
-(void)setScheduler:(HDPeriodicActivity *)arg1 ;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(BOOL)_computeAndSubmitAchievementCountMetric;
-(id)_serverConnectionForComponentId:(unsigned)arg1 ;
-(BOOL)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 earnedInstanceStore:(id)arg2 ;
-(NSMutableDictionary *)serverConnectionsByComponentId;
-(void)setServerConnectionsByComponentId:(NSMutableDictionary *)arg1 ;
@end

