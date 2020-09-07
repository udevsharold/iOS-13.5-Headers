/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNGazeAnalysis : NSObject {

	float* _inputData;
	VCPCNNModelEspresso* _modelEspresso;

}
+(id)sharedModel:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(CGRect)arg5 ;
-(int)detectEyeOpennessForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 eyeOpenness:(BOOL*)arg3 ;
@end
