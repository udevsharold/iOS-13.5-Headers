/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWInferenceSchedulerJobList, BWInferenceSchedulerGraph;

@interface BWInferenceSchedulerFramebuffer : NSObject {

	os_unfair_lock_s framebufferLock;
	Ai failedJobStatus;
	BWInferenceSchedulerJobList* _jobs;
	BWInferenceSchedulerGraph* _graph;

}

@property (nonatomic,readonly) BWInferenceSchedulerJobList * jobs;              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,readonly) BWInferenceSchedulerGraph * graph;               //@synthesize graph=_graph - In the implementation block
-(void)dealloc;
-(BWInferenceSchedulerGraph *)graph;
-(BWInferenceSchedulerJobList *)jobs;
-(void)resetJobStatesWithPreventionBlock:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 jobList:(id)arg2 ;
@end

