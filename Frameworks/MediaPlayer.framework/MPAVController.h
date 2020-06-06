/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVQueueControllerDelegate.h>
#import <libobjc.A.dylib/AVAudioSessionDelegateMediaPlayerOnly.h>

@protocol OS_dispatch_source, MPAVQueueCoordinating, MPAVQueueController;
@class MPAVRoutingController, MPAVRoute, AVPlayerLayer, MPVideoView, NSString, NSObject, MPAVItem, NSArray, NSMutableArray, NSMapTable, NSNotification, NSMutableSet, MPAVPolicyEnforcer, MPQueuePlayer, AVPictureInPictureController, MPQueueFeeder;

@interface MPAVController : NSObject <MPAVRoutingControllerDelegate, MPAVQueueControllerDelegate, AVAudioSessionDelegateMediaPlayerOnly> {

	BOOL _currentItemHasFinishedDownloading;
	BOOL _didResolveError;
	BOOL _disableAirPlayMirroringDuringPlayback;
	BOOL _shouldPreventStateChangesForRateChange;
	unsigned long long _stallBackgroundTaskIdentifier;
	BOOL _usesAudioOnlyModeForExternalPlayback;
	long long _playbackMode;
	BOOL _valid;
	BOOL _allowsItemErrorResolution;
	MPAVRoutingController* _routingController;
	MPAVRoute* _pickedRoute;
	AVPlayerLayer* _videoLayer;
	unsigned long long _videoLayerUsageCount;
	MPVideoView* _videoView;
	id _periodicTimeObserverToken;
	unsigned long long _tickTimerEnabled;
	CFRunLoopTimerRef _tickTimer;
	double _tickInterval;
	CFRunLoopTimerRef _currentItemBookkeepingTimer;
	long long _indexChangeDirection;
	NSString* _contentItemIDAtDeath;
	long long _lastDisconnectReason;
	double _lastKnownTimeBeforeDeath;
	double _lastPlaybackIndexChangeTime;
	double _lastSetTime;
	double _lastSetTimeChangeTime;
	unsigned _hasDelayedCurrentTimeToSet : 1;
	unsigned _forceDelayedCurrentTimeToSet : 1;
	double _delayedCurrentTimeToSet;
	SCD_Struct_MP5 _pendingCurrentTime;
	long long _delayedCurrentTimeOptions;
	unsigned long long _lastSetTimeMarker;
	double _temporaryChapterTime;
	unsigned _autoPlayWhenLikelyToKeepUp : 1;
	unsigned _autoplayDisabledForCurrentItem : 1;
	BOOL _autoPlayBackgroundTaskAssertionEnabled;
	long long _autoPlayBackgroundTaskCount;
	BOOL _appHasBeenSuspended;
	unsigned long long _deactivationReasons;
	unsigned long long _autoPlayBackgroundTaskIdentifier;
	NSObject*<OS_dispatch_source> _autoPlayTimeoutSource;
	double _nextFadeOutDuration;
	BOOL _hasPendingRate;
	BOOL _hasSentTracePlaybackStartDidFinish;
	MPAVItem* _pendingRateItem;
	float _pendingRate;
	BOOL _pendingChangeForScanning;
	id _boundaryTimeObserver;
	NSArray* _boundaryTimes;
	unsigned long long _boundaryTimeIndexLastPosted;
	NSMutableArray* _observerInfos;
	NSMapTable* _observerInfoToCoreMediaObserver;
	float _rateBeforeSeek;
	float _inflightSeekRate;
	unsigned long long _scanLevel;
	long long _scanDirection;
	long long _resetRateAfterSeekingUpdateDisabled;
	long long _seeklessState;
	unsigned _isSeekingOrScrubbing : 1;
	unsigned _resetRateAfterSeeking : 1;
	unsigned _activeRewindHoldingAtStart : 1;
	double _lastSeekableEnd;
	double _whenSawSeekableEnd;
	double _maxSeekableFwd;
	double _seekFwdSlop;
	double _lastSeekableStart;
	double _whenSawSeekableStart;
	double _maxSeekableRev;
	double _seekRevSlop;
	unsigned _canSeekRev : 1;
	unsigned _canSeekFwd : 1;
	unsigned _alwaysPlayWheneverPossible : 1;
	unsigned _stopAtEnd : 1;
	unsigned _didReachEnd : 1;
	unsigned _pausedDuringInterruption : 1;
	unsigned _resumePlaybackWhenActive : 1;
	unsigned _useApplicationAudioSession : 1;
	unsigned _playInBackgroundUserDefaultEnabled : 1;
	unsigned _canPlayFastForward : 1;
	unsigned _canPlayFastReverse : 1;
	unsigned _shouldAutoclearDisplayOverride : 1;
	long long _state;
	long long _displayOverridePlaybackState;
	unsigned long long _bufferingState;
	NSNotification* _delayedPlaybackStateNotification;
	NSObject*<OS_dispatch_source> _stallTimerSource;
	BOOL _hasProvidedAudibleLikelyToKeepUp;
	BOOL _hasProvidedAudiblePlay;
	BOOL _isReloadingForPlaybackContextChange;
	double _itemInitialBookmarkTime;
	float _rateBeforeResignActive;
	long long _ubiquitousBookkeepingDisabledCount;
	double _secondsSinceUbiquitousCheckpoint;
	Class _videoViewClass;
	double _lastInterruptionEnd;
	BOOL _shouldEnforceHDCP;
	NSMutableSet* _clientsWantingExternalPlayback;
	long long _currentItemRevisionID;
	BOOL _muted;
	BOOL _shouldPostCompatibilityNotifications;
	BOOL _useAirPlayMusicMode;
	BOOL _managesAirPlayBehaviors;
	BOOL _shouldConnectToAVPlayer;
	BOOL _automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
	BOOL _wantsPictureInPicture;
	long long _lastDirection;
	MPAVPolicyEnforcer* _policyEnforcer;
	long long _actionAfterQueueLoadOverride;
	MPQueuePlayer* _queuePlayer;
	id<MPAVQueueCoordinating> _queueCoordinator;
	id<MPAVQueueController> _queueController;
	NSString* _identifier;
	long long _stateBeforeInterruption;
	AVPictureInPictureController* _pictureInPictureController;

}

@property (nonatomic,retain) MPAVPolicyEnforcer * policyEnforcer;                                                     //@synthesize policyEnforcer=_policyEnforcer - In the implementation block
@property (assign,nonatomic) long long actionAfterQueueLoadOverride;                                                  //@synthesize actionAfterQueueLoadOverride=_actionAfterQueueLoadOverride - In the implementation block
@property (nonatomic,readonly) MPQueuePlayer * avPlayer; 
@property (nonatomic,retain) MPQueuePlayer * queuePlayer;                                                             //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) id<MPAVQueueCoordinating> queueCoordinator;                                              //@synthesize queueCoordinator=_queueCoordinator - In the implementation block
@property (nonatomic,retain) id<MPAVQueueController> queueController;                                                 //@synthesize queueController=_queueController - In the implementation block
@property (nonatomic,readonly) long long externalPlaybackType; 
@property (assign,nonatomic) BOOL ubiquitousBookkeepingEnabled; 
@property (assign,nonatomic) BOOL alwaysPlayWheneverPossible; 
@property (assign,nonatomic) long long displayOverridePlaybackState;                                                  //@synthesize displayOverridePlaybackState=_displayOverridePlaybackState - In the implementation block
@property (assign,nonatomic) BOOL disableAirPlayMirroringDuringPlayback; 
@property (nonatomic,readonly) double durationOfCurrentItemIfAvailable; 
@property (assign,nonatomic) double nextFadeOutDuration;                                                              //@synthesize nextFadeOutDuration=_nextFadeOutDuration - In the implementation block
@property (nonatomic,readonly) double playableDurationOfCurrentItemIfAvailable; 
@property (assign,nonatomic) BOOL stopAtEnd; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (getter=isExternalPlaybackActive,nonatomic,readonly) BOOL externalPlaybackActive; 
@property (assign,nonatomic) BOOL shouldEnforceHDCP;                                                                  //@synthesize shouldEnforceHDCP=_shouldEnforceHDCP - In the implementation block
@property (nonatomic,readonly) BOOL showPlaybackStateOverlaysOnTVOut; 
@property (assign,setter=setDestinationIsTVOut:,nonatomic) BOOL destinationIsTVOut; 
@property (assign,nonatomic) BOOL useApplicationAudioSession; 
@property (assign,nonatomic) BOOL shouldPostCompatibilityNotifications;                                               //@synthesize shouldPostCompatibilityNotifications=_shouldPostCompatibilityNotifications - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (assign,nonatomic) long long state;                                                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long _displayPlaybackState; 
@property (nonatomic,readonly) BOOL shouldDisplayAsPlaying; 
@property (assign,nonatomic) BOOL useAirPlayMusicMode;                                                                //@synthesize useAirPlayMusicMode=_useAirPlayMusicMode - In the implementation block
@property (assign,nonatomic) BOOL managesAirPlayBehaviors;                                                            //@synthesize managesAirPlayBehaviors=_managesAirPlayBehaviors - In the implementation block
@property (nonatomic,readonly) float rate; 
@property (nonatomic,readonly) BOOL shouldConnectToAVPlayer;                                                          //@synthesize shouldConnectToAVPlayer=_shouldConnectToAVPlayer - In the implementation block
@property (nonatomic,readonly) long long stateBeforeInterruption;                                                     //@synthesize stateBeforeInterruption=_stateBeforeInterruption - In the implementation block
@property (assign,nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;              //@synthesize automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds=_automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds - In the implementation block
@property (assign,nonatomic) BOOL wantsPictureInPicture;                                                              //@synthesize wantsPictureInPicture=_wantsPictureInPicture - In the implementation block
@property (nonatomic,readonly) AVPictureInPictureController * pictureInPictureController;                             //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (nonatomic,readonly) MPQueueFeeder * feeder; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPAVRoutingController * routingController; 
@property (nonatomic,readonly) long long lastDirection;                                                               //@synthesize lastDirection=_lastDirection - In the implementation block
@property (nonatomic,readonly) BOOL hasVolumeControl; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) BOOL muted;                                                                            //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) unsigned long long bufferingState;                                                     //@synthesize bufferingState=_bufferingState - In the implementation block
@property (getter=isCurrentItemReady,nonatomic,readonly) BOOL currentItemReady; 
@property (assign,nonatomic) long long playbackMode;                                                                  //@synthesize playbackMode=_playbackMode - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_itemKeysToObserve;
+(id)_playerKeysToObserve;
+(BOOL)prefersApplicationAudioSession;
+(BOOL)isNetworkSupportedPath:(id)arg1 ;
+(id)keyPathsForValuesAffectingCurrentItem;
+(BOOL)outputSupportsAC3;
+(BOOL)automaticallyNotifiesObserversOfPlaylistManager;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)preferredLanguages;
-(NSString *)identifier;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)state;
-(void)setActive:(BOOL)arg1 ;
-(void)_contentsChanged;
-(void)setState:(long long)arg1 ;
-(MPAVItem *)currentItem;
-(void)_setState:(long long)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(void)play;
-(double)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)isPlaying;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(BOOL)muted;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)removeTimeObserver:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(long long)externalPlaybackType;
-(BOOL)allowsExternalPlayback;
-(MPVideoView *)videoView;
-(NSString *)externalPlaybackVideoGravity;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 ;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(BOOL)canPlayFastReverse;
-(void)beginInterruption;
-(void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)setUseApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)useApplicationAudioSession;
-(MPQueueFeeder *)feeder;
-(double)timeOfSeekableStart;
-(double)timeOfSeekableEnd;
-(long long)playbackMode;
-(id)_pickedRoute;
-(void)queueControllerDidChangeContents:(id)arg1 ;
-(void)queueController:(id)arg1 failedToLoadItem:(id)arg2 ;
-(void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2 ;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1 ;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1 ;
-(void)beginSeek:(int)arg1 ;
-(void)_clearLastSetTimeIfPlayerTimeIsValid;
-(BOOL)_hasValidPlayerTime;
-(void)_updateLastSetTimeForCurrentItemIfNeeded;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 ;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 force:(BOOL)arg4 error:(id*)arg5 ;
-(void)endSeek;
-(BOOL)isSeekingOrScrubbing;
-(double)currentTimeForBookmarking;
-(void)endPlayback;
-(void)pauseWithFadeout:(float)arg1 ;
-(void)_pauseWithFadeout:(float)arg1 forScanning:(BOOL)arg2 ;
-(void)playWithOptions:(unsigned long long)arg1 ;
-(void)_playWithOptions:(unsigned long long)arg1 allowsEnablingAutoPlay:(BOOL)arg2 ;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(void)togglePlayback;
-(void)togglePlaybackWithOptions:(unsigned long long)arg1 ;
-(BOOL)forceRestartPlaybackIfNecessary;
-(void)beginTickTimerWithInterval:(double)arg1 ;
-(void)endTickTimer;
-(BOOL)isTickTimerEnabled;
-(void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2 ;
-(void)setClient:(id)arg1 wantsToAllowExternalPlayback:(BOOL)arg2 shouldIgnorePlaybackQueueTransactions:(BOOL)arg3 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(BOOL)_showsPlayingWhenInState:(long long)arg1 ;
-(long long)_seeklessStateForState:(long long)arg1 ;
-(BOOL)shouldDisplayAsPlaying;
-(BOOL)alwaysPlayWheneverPossible;
-(void)setAlwaysPlayWheneverPossible:(BOOL)arg1 ;
-(BOOL)disableAirPlayMirroringDuringPlayback;
-(void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg1 ;
-(void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 ;
-(void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)setNextFadeOutDuration:(double)arg1 ;
-(BOOL)setRate:(float)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2 withItem:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasVolumeControl;
-(BOOL)stopAtEnd;
-(void)setStopAtEnd:(BOOL)arg1 ;
-(MPAVRoutingController *)routingController;
-(void)setUseAirPlayMusicMode:(BOOL)arg1 ;
-(void)setWantsPictureInPicture:(BOOL)arg1 ;
-(void)setManagesAirPlayBehaviors:(BOOL)arg1 ;
-(BOOL)isCurrentItemReady;
-(void)disableAutoplayForCurrentItem;
-(void)enableAutoplayForCurrentItem;
-(MPQueuePlayer *)avPlayer;
-(void)beginUsingVideoLayer;
-(void)endUsingVideoLayer;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(id)_playerAVAudioSession;
-(BOOL)becomeActiveWithError:(id*)arg1 ;
-(void)setCurrentTime:(double)arg1 options:(long long)arg2 ;
-(void)setCurrentTime:(double)arg1 options:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)_setLastSetTime:(double)arg1 ;
-(BOOL)destinationIsTVOut;
-(void)setDestinationIsTVOut:(BOOL)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateBookkeepingNow;
-(void)finalizeBookkeepingNow;
-(BOOL)shouldHaveNoActionAtEndForState:(long long)arg1 ;
-(BOOL)showPlaybackStateOverlaysOnTVOut;
-(double)durationOfCurrentItemIfAvailable;
-(double)playableDurationOfCurrentItemIfAvailable;
-(double)timeOfPlayableStart;
-(double)timeOfPlayableEnd;
-(BOOL)isLiveStreaming;
-(BOOL)canSeekBackwards;
-(BOOL)canSeekForwards;
-(BOOL)canSkipToSeekableEnd;
-(void)skipToSeekableStart;
-(void)skipToSeekableEnd;
-(void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1 ;
-(void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_itemAssetIsLoadedNotification:(id)arg1 ;
-(void)_itemBookmarkTimeDidChangeNotification:(id)arg1 ;
-(void)_itemHasFinishedDownloadingDidChangeNotification:(id)arg1 ;
-(void)_updateStateForPlaybackPrevention;
-(void)_itemTimeMarkersAvailableNotification:(id)arg1 ;
-(void)_itemMediaSelectionCriteriaDidLoadNotification:(id)arg1 ;
-(void)_itemTypeAvailableNotification:(id)arg1 ;
-(void)_itemDidChange:(id)arg1 ;
-(id)_playerFailedToQueueNotification:(id)arg1 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_itemFailedToPlayToEnd:(id)arg1 ;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)_itemWillChange:(id)arg1 ;
-(void)setUbiquitousBookkeepingEnabled:(BOOL)arg1 ;
-(BOOL)ubiquitousBookkeepingEnabled;
-(void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(BOOL)arg1 ;
-(void)_updateCurrentItemBookkeepingForTimerCallback;
-(void)_rateDidChange:(id)arg1 ;
-(void)_configureAudioSession;
-(void)_connectAVPlayer;
-(void)_disconnectAVPlayerWithReason:(long long)arg1 ;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)_streamBufferFull:(id)arg1 ;
-(void)_streamLikelyToKeepUp:(id)arg1 ;
-(void)_streamRanDry:(id)arg1 ;
-(void)_streamUnlikelyToKeepUp:(id)arg1 ;
-(void)_timeHasJumpedNotification:(id)arg1 ;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(void)airPlayVideoEnded;
-(void)airPlayFailedRentalDownloadRequired;
-(void)_airPlayFailedUnsupportedVideoFormatForDeviceWithError:(id)arg1 ;
-(void)_canPlayFastForwardDidChange:(id)arg1 ;
-(void)_canPlayFastReverseDidChange:(id)arg1 ;
-(void)_timedMetadataDidChange:(id)arg1 ;
-(void)_tracksDidChange:(id)arg1 ;
-(void)_durationDidChange:(id)arg1 ;
-(void)_readyForDisplayDidChange:(id)arg1 ;
-(BOOL)_shouldPausePlaybackForDeactivationReasons:(unsigned long long)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_audioSessionMediaServicesWereResetNotification:(id)arg1 ;
-(void)_itemPlayerItemWillChangeNotification:(id)arg1 ;
-(void)_itemPlayerItemDidChangeNotification:(id)arg1 ;
-(void)_delayedPlaybackIndexChange;
-(void)_delayedUpdateScanningRate;
-(void)_delayedUpdateTimeMarker;
-(void)_verifyDisplayProtection;
-(void)_applyAirPlayMusicMode;
-(void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)_cancelStallTimer;
-(BOOL)_changeChapterTimeMarkerIndexBy:(long long)arg1 ;
-(void)_clearVideoLayer:(BOOL)arg1 ;
-(double)_currentTimeWithPreloadedPlayerTime:(BOOL)arg1 value:(SCD_Struct_MP5)arg2 ;
-(BOOL)_shouldProvideAudiblePlaybackPerformance;
-(void)_unregisterForPlayer:(id)arg1 ;
-(void)setPlaylistManager:(id)arg1 ;
-(void)setQueueController:(id<MPAVQueueController>)arg1 ;
-(void)_endSeekAndChangeRate:(BOOL)arg1 ;
-(void)_prepareToPlayItem:(id)arg1 ;
-(id)embeddedDataTimesForItem:(id)arg1 ;
-(unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1 ;
-(void)_checkForBoundaryTimeCrossing;
-(void)_reloadTimeMarkerObservationsForItem:(id)arg1 ;
-(void)_registerForAVItemNotifications:(id)arg1 ;
-(void)_resetInternalState;
-(void)_setAutoPlayBackgroundTaskAssertionEnabled:(BOOL)arg1 ;
-(void)_attemptAutoPlay;
-(BOOL)_hasEnoughDataToPlay;
-(void)_setBufferingState:(unsigned long long)arg1 ;
-(void)_setActionAtEndAttributeForState:(long long)arg1 ;
-(void)_delayedPostPlaybackStateChangedNotification;
-(void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(BOOL)arg3 ;
-(void)autoclearDisplayOverride;
-(void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1 ;
-(void)setDisplayOverridePlaybackState:(long long)arg1 ;
-(long long)_displayPlaybackState;
-(void)_scheduleUpdateCurrentItemBookkeepingTimer;
-(void)_pauseBookkeepingTimer;
-(void)_resumeBookkeepingTimer;
-(void)_cancelUpdateCurrentItemBookkeepingTimer;
-(void)_configureUpdateCurrentItemBookkeepingTimer;
-(void)_clearResetRateAfterSeeking;
-(void)_setAllowsItemErrorResolution:(BOOL)arg1 ;
-(BOOL)_isVideoLayerAttachedToPlayer;
-(void)_setVideoLayerAttachedToPlayer:(BOOL)arg1 force:(BOOL)arg2 pauseIfNecessary:(BOOL)arg3 ;
-(void)_setValid:(BOOL)arg1 ;
-(void)_unregisterForAVItemNotifications:(id)arg1 ;
-(void)_updateCurrentItemHasFinishedDownloading;
-(void)_updateProgress:(CFRunLoopTimerRef)arg1 ;
-(void)setRateForScanning:(float)arg1 ;
-(void)_updateHasProtectedContentForItem:(id)arg1 ;
-(void)_updateScanningRate;
-(void)_updateTypeForItem:(id)arg1 ;
-(void)_delayedSetCurrentTime;
-(void)_updateSeekingIntervalsForStreaming;
-(void)_clearSeekingIntervalsForStreaming;
-(id)_extractImageFromMetadata:(id)arg1 ;
-(void)_pauseTickTimer;
-(void)_resumeTickTimer;
-(void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2 ;
-(void)playbackHasStartedForItem:(id)arg1 ;
-(void)handlePlaybackErrorWithUserInfo:(id)arg1 ;
-(BOOL)_canPlayItem:(id)arg1 ;
-(void)_handlePlaybackErrorResolutionType:(long long)arg1 forItem:(id)arg2 playbackError:(id)arg3 resolutionError:(id)arg4 ;
-(void)_pausePlaybackIfNecessary;
-(void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)arg1 ;
-(void)_resumePlaybackIfNecessary;
-(void)_updateCurrentItemDurationSnapshotWithPlayerTime:(SCD_Struct_MP5)arg1 ;
-(void)_updateDirectionForChangeDelta:(long long)arg1 ;
-(void)_queueDidEndWithReason:(id)arg1 lastItem:(id)arg2 ;
-(void)_itemDidSignificantlyChangeElapsedTime:(double)arg1 rate:(float)arg2 ;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)displayOverridePlaybackState;
-(long long)lastDirection;
-(unsigned long long)bufferingState;
-(void)setPlaybackMode:(long long)arg1 ;
-(MPAVPolicyEnforcer *)policyEnforcer;
-(void)setPolicyEnforcer:(MPAVPolicyEnforcer *)arg1 ;
-(long long)actionAfterQueueLoadOverride;
-(void)setActionAfterQueueLoadOverride:(long long)arg1 ;
-(MPQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(MPQueuePlayer *)arg1 ;
-(id<MPAVQueueCoordinating>)queueCoordinator;
-(void)setQueueCoordinator:(id<MPAVQueueCoordinating>)arg1 ;
-(id<MPAVQueueController>)queueController;
-(double)nextFadeOutDuration;
-(BOOL)shouldEnforceHDCP;
-(void)setShouldEnforceHDCP:(BOOL)arg1 ;
-(BOOL)shouldPostCompatibilityNotifications;
-(void)setShouldPostCompatibilityNotifications:(BOOL)arg1 ;
-(BOOL)useAirPlayMusicMode;
-(BOOL)managesAirPlayBehaviors;
-(BOOL)shouldConnectToAVPlayer;
-(long long)stateBeforeInterruption;
-(BOOL)automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
-(void)setAutomaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds:(BOOL)arg1 ;
-(BOOL)wantsPictureInPicture;
-(AVPictureInPictureController *)pictureInPictureController;
@end

