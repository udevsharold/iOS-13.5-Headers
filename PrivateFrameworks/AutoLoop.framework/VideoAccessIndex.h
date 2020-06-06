/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class AVAssetTrack, AVAsset, VideoReaderRand;

@interface VideoAccessIndex : NSObject {

	vector<CMTime, std::__1::allocator<CMTime> >* mFrameTimes;
	unsigned numFrames;
	AVAssetTrack* videoTrack;
	AVAsset* asset;
	VideoReaderRand* readerRand;

}

@property (retain) VideoReaderRand * readerRand; 
@property (readonly) AVAssetTrack * videoTrack; 
@property (readonly) AVAsset * asset; 
-(AVAsset *)asset;
-(AVAssetTrack *)videoTrack;
-(int)getFrameAtIndex:(unsigned)arg1 pixBuf:(_CVBuffer*)arg2 ;
-(id)initFromFile:(id)arg1 pixelFormat:(unsigned)arg2 frameTimes:(const vector<CMTime, std::__1::allocator<CMTime> >*)arg3 ;
-(VideoReaderRand *)readerRand;
-(void)setReaderRand:(VideoReaderRand *)arg1 ;
@end

