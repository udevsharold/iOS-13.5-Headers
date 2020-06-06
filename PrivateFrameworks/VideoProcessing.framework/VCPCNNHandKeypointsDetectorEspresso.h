/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNHandKeypointsDetector.h>

@class VCPCNNModelEspresso;

@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {

	float* _inputData;
	VCPCNNModelEspresso* _modelEspresso;

}
-(id)init;
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)generateHandKeypoints:(CGPoint*)arg1 ;
@end

