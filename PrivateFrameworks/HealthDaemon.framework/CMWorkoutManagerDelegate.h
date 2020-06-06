/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWorkoutManagerDelegate <NSObject>
@optional
-(void)workoutManager:(id)arg1 didFailWorkout:(id)arg2 withError:(id)arg3;
-(void)workoutManagerDidFail:(id)arg1 workout:(id)arg2 error:(id)arg3;
-(void)workoutManager:(id)arg1 didStartWorkout:(id)arg2 atDate:(id)arg3;
-(void)workoutManagerDidStartWorkout:(id)arg1 workout:(id)arg2 startDate:(id)arg3;
-(void)workoutManager:(id)arg1 didStopWorkout:(id)arg2 atDate:(id)arg3;
-(void)workoutManagerDidStopWorkout:(id)arg1 workout:(id)arg2 stopDate:(id)arg3;
-(void)workoutManager:(id)arg1 willPauseWorkout:(id)arg2 atDate:(id)arg3;
-(void)workoutManagerWillPauseWorkout:(id)arg1 workout:(id)arg2 pauseDate:(id)arg3;
-(void)workoutManager:(id)arg1 willResumeWorkout:(id)arg2 atDate:(id)arg3;
-(void)workoutManagerWillResumeWorkout:(id)arg1 workout:(id)arg2 resumeDate:(id)arg3;
-(void)workoutManager:(id)arg1 suggestedStopWorkout:(id)arg2 atDate:(id)arg3;
-(void)workoutManagerSuggestedStop:(id)arg1 workout:(id)arg2 stopDate:(id)arg3;
-(void)workoutManager:(id)arg1 issuedPrediction:(id)arg2;

@end

