/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer {

	BOOL _sdof;

}

@property (assign) BOOL sdof;              //@synthesize sdof=_sdof - In the implementation block
+(id)analyzer;
-(void)_copyBufferFrom:(char*)arg1 fromStride:(long long)arg2 toPtr:(float*)arg3 toStride:(long long)arg4 toWidth:(int)arg5 toHeight:(int)arg6 ;
-(BOOL)sdof;
-(float)calculateScoreFromNetworkOutput:(float*)arg1 outChannel:(int)arg2 outHeight:(int)arg3 outWidth:(int)arg4 textureness:(char*)arg5 contrast:(float)arg6 imgWidth:(int)arg7 ;
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)computeSharpnessScore:(float*)arg1 textureness:(char*)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(/*^block*/id)arg5 ;
-(void)setSdof:(BOOL)arg1 ;
-(int)scaleRegion:(CGRect*)arg1 ofImage:(CVBufferRef)arg2 toData:(float*)arg3 withWidth:(int)arg4 andHeight:(int)arg5 ;
-(int)computeCNNBasedSharpness:(CVBufferRef)arg1 sharpnessScore:(float*)arg2 textureScore:(float*)arg3 contrast:(float)arg4 cancel:(/*^block*/id)arg5 ;
@end

