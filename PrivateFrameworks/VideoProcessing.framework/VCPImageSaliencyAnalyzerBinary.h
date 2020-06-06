/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPImageSaliencyAnalyzer.h>

@class VCPCNNModel, VCPCNNData, NSURL;

@interface VCPImageSaliencyAnalyzerBinary : VCPImageSaliencyAnalyzer {

	VCPCNNModel* _model;
	VCPCNNData* _input;
	NSURL* _modelURL;

}
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(float)outputScaling;
-(int)getSalientRegions:(/*^block*/id)arg1 ;
@end

