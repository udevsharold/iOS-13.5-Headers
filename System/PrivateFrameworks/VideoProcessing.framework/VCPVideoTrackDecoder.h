/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {

	AVAssetTrack* _track;

}
+(SCD_Struct_VC61)decodeDimensionsForTrack:(id)arg1 ;
-(id)init;
-(long long)status;
-(id)settings;
-(id)initWithTrack:(id)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
@end
