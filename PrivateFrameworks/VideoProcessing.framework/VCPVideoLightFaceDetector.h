/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoFaceDetector.h>

@class VCPFrameAnalysisStats;

@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {

	int _lastestFaceID;
	int _numFacesLastFrame;
	VCPFrameAnalysisStats* _frameStats;

}
-(void)dealloc;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(id)initWithTransform:(CGAffineTransform)arg1 frameStats:(id)arg2 ;
-(float)minProcessTimeIntervalInSecs;
-(int)detectFaces:(CVBufferRef)arg1 faces:(id)arg2 ;
@end

