/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNData.h>

@interface VCPCNNDataGPU : VCPCNNData
-(int)allocBuffers:(BOOL)arg1 ;
-(int)reallocGPUTemporalBuffers;
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)bufferAllocGPU;
@end
