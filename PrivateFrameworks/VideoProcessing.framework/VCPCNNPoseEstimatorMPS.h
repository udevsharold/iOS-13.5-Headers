/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {

	VCPCNNModel* _model;
	VCPCNNData* _input;

}
-(id)init;
-(float*)getInputBuffer;
-(int)computePoseScore:(float*)arg1 ;
@end

