/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(id<CMWorkoutManagerDelegate>)delegate;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(CMWorkoutManagerInternal *)_internal;
-(void)startWorkout:(id)arg1 ;
-(void)stopWorkout:(id)arg1 ;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)setSuggestedStopTimeout:(double)arg1 ;
-(void)userDismissedWorkoutAlert;
@end

