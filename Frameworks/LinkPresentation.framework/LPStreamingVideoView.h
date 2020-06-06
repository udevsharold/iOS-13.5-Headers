/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideoView.h>

@class AVQueuePlayer, AVPlayerLooper, AVPlayerLayer;

@interface LPStreamingVideoView : LPVideoView {

	AVQueuePlayer* _player;
	AVPlayerLooper* _looper;
	AVPlayerLayer* _playerLayer;
	/*^block*/id _readyForDisplayCallback;
	BOOL _hasCreatedVideoPlayerView;
	BOOL _isWaitingToRetryAfterFailingToPlay;
	unsigned _playbackRetryCountWithoutSuccess;
	BOOL _desiredPlayingState;
	float _desiredVolume;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setPlaying:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(BOOL)shouldAutoPlay;
-(void)destroyPlayer;
-(void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToPlaceholderView;
-(void)didFailToPlay;
-(void)createPlayerIfNeeded;
-(void)layoutComponentView;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(BOOL)releaseDecodingResourcesIfInactive;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(id)createFullScreenVideoViewController;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
@end

