/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCameraPlaybackEngineObserver <NSObject>
@optional
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
-(void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateMicrophoneEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioVolume:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2;
-(void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2;

@end

