/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	opaqueCMSampleBufferRef _nextSample;
	long long _status;

}
-(void)dealloc;
-(long long)status;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC28*)arg2 ;
@end
