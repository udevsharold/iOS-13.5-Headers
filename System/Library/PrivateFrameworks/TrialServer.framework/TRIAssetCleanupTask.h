/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TRIExperimentBaseTask.h>

@interface TRIAssetCleanupTask : TRIExperimentBaseTask
+(id)task;
+(id)taskWithExperimentId:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(BOOL)removeExperimentArtifact:(id)arg1 ;
-(BOOL)removeTreatmentPathsWithExperiment:(id)arg1 ;
-(BOOL)removeExperiment:(id)arg1 ;
-(int)cleanupWithExperiment:(id)arg1 ;
-(int)cleanupWithExperimentId:(id)arg1 ;
@end
