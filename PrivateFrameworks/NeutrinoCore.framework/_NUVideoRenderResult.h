/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUVideoRenderResult.h>

@class AVAsset, AVComposition, AVVideoComposition, AVAudioMix, NUImageGeometry, NSString;

@interface _NUVideoRenderResult : _NURenderResult <NUVideoRenderResult> {

	AVAsset* _video;
	AVVideoComposition* _videoComposition;
	AVAudioMix* _audioMix;
	NUImageGeometry* _geometry;

}

@property (retain) AVAsset * video;                                        //@synthesize video=_video - In the implementation block
@property (retain) AVVideoComposition * videoComposition;                  //@synthesize videoComposition=_videoComposition - In the implementation block
@property (retain) AVAudioMix * audioMix;                                  //@synthesize audioMix=_audioMix - In the implementation block
@property (retain) NUImageGeometry * geometry;                             //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) AVComposition * avAsset; 
@property (readonly) AVVideoComposition * avVideoComposition; 
-(NSString *)description;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(AVAudioMix *)audioMix;
-(AVAsset *)video;
-(AVComposition *)avAsset;
-(void)setVideo:(AVAsset *)arg1 ;
-(AVVideoComposition *)avVideoComposition;
@end

