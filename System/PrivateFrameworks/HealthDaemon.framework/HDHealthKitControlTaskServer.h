/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>

@interface HDHealthKitControlTaskServer : HDStandardTaskServer
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_condensedWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_condensableWorkoutsWithCompletion:(/*^block*/id)arg1 ;
@end
