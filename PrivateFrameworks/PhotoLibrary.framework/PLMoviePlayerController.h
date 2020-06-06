/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLMoviePlayerControllerDelegate;
@class AVPlayerItem, AVPlayer, PLMoviePlayerView, PLTVOutWindow, NSString;

@interface PLMoviePlayerController : NSObject {

	AVPlayerItem* _playerItem;
	AVPlayer* _player;
	PLMoviePlayerView* _view;
	PLTVOutWindow* _tvOutWindow;
	BOOL _hasPendingTime;
	double _pendingTime;
	unsigned long long _pendingTimeSnapOption;
	BOOL _forceUpdateCurrentTime;
	BOOL _isExternalPlayback;
	BOOL _exited;
	double _lastSetCurrentTimeTime;
	BOOL _isSeeking;
	unsigned long long _backgroundTaskId;
	BOOL _audioSessionActive;
	NSString* _originalAudioCategory;
	BOOL _TVOutEnabled;
	BOOL _forceDisableTVOut;
	BOOL _isPreparedForPlayback;
	BOOL _isActiveController;
	id<PLMoviePlayerControllerDelegate> _delegate;
	unsigned long long _bufferingState;
	unsigned long long _playbackState;

}

@property (assign,nonatomic) BOOL TVOutEnabled;                                                 //@synthesize TVOutEnabled=_TVOutEnabled - In the implementation block
@property (assign,setter=_setForceDisableTVOut:,nonatomic) BOOL forceDisableTVOut;              //@synthesize forceDisableTVOut=_forceDisableTVOut - In the implementation block
@property (assign,nonatomic) BOOL isActiveController;                                           //@synthesize isActiveController=_isActiveController - In the implementation block
@property (assign,nonatomic) id<PLMoviePlayerControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) AVPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) PLMoviePlayerView * view;                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) unsigned long long playbackState;                                //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) unsigned long long bufferingState;                               //@synthesize bufferingState=_bufferingState - In the implementation block
@property (nonatomic,readonly) BOOL isPreparedForPlayback;                                      //@synthesize isPreparedForPlayback=_isPreparedForPlayback - In the implementation block
+(BOOL)_isStreamableAsset:(id)arg1 ;
+(id)AVAssetURLWithPath:(id)arg1 ;
+(BOOL)_isNetworkSupportedPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<PLMoviePlayerControllerDelegate>)delegate;
-(void)setDelegate:(id<PLMoviePlayerControllerDelegate>)arg1 ;
-(void)pause;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)duration;
-(id)_asset;
-(PLMoviePlayerView *)view;
-(void)play;
-(double)currentTime;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(AVPlayer *)player;
-(long long)externalPlaybackType;
-(BOOL)_allowsExternalPlayback;
-(float)playbackRate;
-(void)setCurrentTime:(double)arg1 ;
-(unsigned long long)playbackState;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(void)_setBufferingState:(unsigned long long)arg1 ;
-(unsigned long long)bufferingState;
-(id)_playerKeysToObserve;
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1 ;
-(void)tearDownTVOutWindow;
-(void)_setupTVOutWindow;
-(void)_tearDownTVOutWindow;
-(void)_updateBackgroundViewInformation;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(void)_updateTVOutEnabled;
-(void)_setupPlayer;
-(void)_tearDownPlayer;
-(void)setPlayerItem:(id)arg1 startTime:(double)arg2 ;
-(void)_setPlayerItem:(id)arg1 ;
-(void)_loadAsset:(id)arg1 ;
-(void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2 ;
-(void)_dispatchOnMainThreadWithBlock:(/*^block*/id)arg1 ;
-(void)_playerRateDidChange:(id)arg1 ;
-(void)playFromBeginning;
-(void)playDueToEnoughData;
-(void)pauseDueToInsufficientData;
-(void)resetPlayer;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 ;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_updateFromPendingTime;
-(void)_delayedUpdateFromPendingTime;
-(void)_streamBufferFull;
-(void)_streamLikelyToKeepUp;
-(void)_streamRanDry;
-(void)_streamUnlikelyToKeepUp;
-(void)_setPlaybackState:(unsigned long long)arg1 ;
-(void)_pausePlaybackForNotification;
-(void)_willSuspendNotification:(id)arg1 ;
-(void)_willBeginSuspendAnimationNotification:(id)arg1 ;
-(void)_willResignNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(BOOL)videoOutActive;
-(void)_setForceDisableTVOut:(BOOL)arg1 ;
-(void)_restoreTVOutVideoIfNecessary;
-(void)_displayVideoView;
-(BOOL)isExternalPlayback;
-(void)requestToBecomeActiveController;
-(void)requestToResignAsActiveController;
-(void)didBecomeActiveController;
-(void)willResignAsActiveController;
-(void)_playerItemDidReachEndNotification:(id)arg1 ;
-(void)_playerItemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_playerItemFailedToPlayToEnd:(id)arg1 ;
-(void)_playbackFailedWithError:(id)arg1 ;
-(void)_exitPlayer:(int)arg1 ;
-(BOOL)forceDisableTVOut;
-(BOOL)isPreparedForPlayback;
-(BOOL)isActiveController;
-(void)setIsActiveController:(BOOL)arg1 ;
@end

