/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob {

	PHAVisionServiceFaceProcessingWorkerJobKeepAlive* _keepAlive;

}
-(float)completionScore;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 ;
-(BOOL)startJob:(id*)arg1 ;
-(BOOL)stopJob:(id*)arg1 ;
-(void)_startJobKeepAlive;
-(void)_stopJobKeepAlive;
-(void)_handleClusteringCompletion;
@end

