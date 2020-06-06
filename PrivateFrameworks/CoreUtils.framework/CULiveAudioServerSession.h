/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAudioConverter, AVAudioEngine, AVAudioFormat, AVAudioPlayerNode, NSObject;

@interface CULiveAudioServerSession : NSObject {

	AVAudioConverter* _audioConverter;
	AVAudioEngine* _audioEngine;
	AVAudioFormat* _audioInputFormat;
	AVAudioFormat* _audioOutputFormat;
	AVAudioPlayerNode* _audioPlayerNode;
	BOOL _playbackStarted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleDataEvent:(id)arg1 ;
-(BOOL)activateAndReturnError:(id*)arg1 ;
@end

