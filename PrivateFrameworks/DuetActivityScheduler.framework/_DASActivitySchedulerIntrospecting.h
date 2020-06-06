/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DASActivitySchedulerIntrospecting <NSObject>
@required
-(id)policies;
-(id)submittedActivities;
-(void)forceRunActivities:(id)arg1;
-(void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;
-(void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;
-(void)enterTestModeWithParameters:(id)arg1;
-(id)runningActivities;
-(id)delayedRunningActivities;
-(id)runningGroupActivities;
-(BOOL)deferActivities:(id)arg1;
-(id)scoresForActivityWithName:(id)arg1;
-(id)activityRunStatistics;
-(id)currentPredictions;
-(double)remainingBalanceForBudgetWithName:(id)arg1;
-(id)blockingPoliciesWithParameters:(id)arg1;
-(void)pauseWithParameters:(id)arg1;

@end

