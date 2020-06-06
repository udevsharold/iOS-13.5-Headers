/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRemoteCommandDelegate_Internal.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MPMRNowPlayingPlayerPathWrapper, MPRemoteCommand, MPSkipIntervalCommand, MPRatingCommand, MPChangePlaybackRateCommand, MPFeedbackCommand, MPChangePlaybackPositionCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPAdvanceShuffleModeCommand, MPAdvanceRepeatModeCommand, MPSetPlaybackQueueCommand, MPInsertIntoPlaybackQueueCommand, MPReorderQueueCommand, MPSetPlaybackSessionCommand, MPChangeQueueEndActionCommand, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {

	NSMutableArray* _activeCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _mediaRemoteCommandHandler;
	BOOL _scheduledSupportedCommandsChangedNotification;
	BOOL _canBeNowPlayingApplication;
	BOOL _handlingPlaybackQueueCommands;
	MPMRNowPlayingPlayerPathWrapper* _playerPath;
	BOOL _disableAutomaticCanBeNowPlaying;
	MPRemoteCommand* _pauseCommand;
	MPRemoteCommand* _playCommand;
	MPRemoteCommand* _stopCommand;
	MPRemoteCommand* _togglePlayPauseCommand;
	MPRemoteCommand* _enableLanguageOptionCommand;
	MPRemoteCommand* _disableLanguageOptionCommand;
	MPRemoteCommand* _nextTrackCommand;
	MPRemoteCommand* _previousTrackCommand;
	MPSkipIntervalCommand* _skipForwardCommand;
	MPSkipIntervalCommand* _skipBackwardCommand;
	MPRemoteCommand* _seekForwardCommand;
	MPRemoteCommand* _seekBackwardCommand;
	MPRatingCommand* _ratingCommand;
	MPChangePlaybackRateCommand* _changePlaybackRateCommand;
	MPFeedbackCommand* _likeCommand;
	MPFeedbackCommand* _dislikeCommand;
	MPFeedbackCommand* _bookmarkCommand;
	MPChangePlaybackPositionCommand* _changePlaybackPositionCommand;
	MPChangeRepeatModeCommand* _changeRepeatModeCommand;
	MPChangeShuffleModeCommand* _changeShuffleModeCommand;
	MPRemoteCommand* _specialSeekForwardCommand;
	MPRemoteCommand* _specialSeekBackwardCommand;
	MPAdvanceShuffleModeCommand* _advanceShuffleModeCommand;
	MPAdvanceRepeatModeCommand* _advanceRepeatModeCommand;
	MPRemoteCommand* _createRadioStationCommand;
	MPSetPlaybackQueueCommand* _setPlaybackQueueCommand;
	MPRemoteCommand* _prepareForSetPlaybackQueueCommand;
	MPInsertIntoPlaybackQueueCommand* _insertIntoPlaybackQueueCommand;
	MPRemoteCommand* _removeFromPlaybackQueueCommand;
	MPReorderQueueCommand* _reorderQueueCommand;
	MPRemoteCommand* _playItemInQueueCommand;
	MPFeedbackCommand* _addNowPlayingItemToLibraryCommand;
	MPFeedbackCommand* _addItemToLibraryCommand;
	MPSetPlaybackSessionCommand* _setPlaybackSessionCommand;
	MPRemoteCommand* _reshuffleCommand;
	MPChangeQueueEndActionCommand* _changeQueueEndActionCommand;
	NSString* _playerID;

}

@property (nonatomic,readonly) MPRemoteCommand * specialSeekForwardCommand;                                    //@synthesize specialSeekForwardCommand=_specialSeekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * specialSeekBackwardCommand;                                   //@synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceShuffleModeCommand * advanceShuffleModeCommand;                        //@synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceRepeatModeCommand * advanceRepeatModeCommand;                          //@synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * removeFromPlaybackQueueCommand;                               //@synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPReorderQueueCommand * reorderQueueCommand;                                    //@synthesize reorderQueueCommand=_reorderQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playItemInQueueCommand;                                       //@synthesize playItemInQueueCommand=_playItemInQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * createRadioStationCommand;                                    //@synthesize createRadioStationCommand=_createRadioStationCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackQueueCommand * setPlaybackQueueCommand;                            //@synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * prepareForSetPlaybackQueueCommand;                            //@synthesize prepareForSetPlaybackQueueCommand=_prepareForSetPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPInsertIntoPlaybackQueueCommand * insertIntoPlaybackQueueCommand;              //@synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addNowPlayingItemToLibraryCommand;                          //@synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addItemToLibraryCommand;                                    //@synthesize addItemToLibraryCommand=_addItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackSessionCommand * setPlaybackSessionCommand;                        //@synthesize setPlaybackSessionCommand=_setPlaybackSessionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * reshuffleCommand;                                             //@synthesize reshuffleCommand=_reshuffleCommand - In the implementation block
@property (nonatomic,readonly) MPChangeQueueEndActionCommand * changeQueueEndActionCommand;                    //@synthesize changeQueueEndActionCommand=_changeQueueEndActionCommand - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerID;                                                       //@synthesize playerID=_playerID - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticCanBeNowPlaying;                                             //@synthesize disableAutomaticCanBeNowPlaying=_disableAutomaticCanBeNowPlaying - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * pauseCommand;                                                 //@synthesize pauseCommand=_pauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playCommand;                                                  //@synthesize playCommand=_playCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * stopCommand;                                                  //@synthesize stopCommand=_stopCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * togglePlayPauseCommand;                                       //@synthesize togglePlayPauseCommand=_togglePlayPauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * enableLanguageOptionCommand;                                  //@synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * disableLanguageOptionCommand;                                 //@synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;                        //@synthesize changePlaybackRateCommand=_changePlaybackRateCommand - In the implementation block
@property (nonatomic,readonly) MPChangeRepeatModeCommand * changeRepeatModeCommand;                            //@synthesize changeRepeatModeCommand=_changeRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPChangeShuffleModeCommand * changeShuffleModeCommand;                          //@synthesize changeShuffleModeCommand=_changeShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * nextTrackCommand;                                             //@synthesize nextTrackCommand=_nextTrackCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * previousTrackCommand;                                         //@synthesize previousTrackCommand=_previousTrackCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipForwardCommand;                                     //@synthesize skipForwardCommand=_skipForwardCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipBackwardCommand;                                    //@synthesize skipBackwardCommand=_skipBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekForwardCommand;                                           //@synthesize seekForwardCommand=_seekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekBackwardCommand;                                          //@synthesize seekBackwardCommand=_seekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackPositionCommand * changePlaybackPositionCommand;                //@synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand - In the implementation block
@property (nonatomic,readonly) MPRatingCommand * ratingCommand;                                                //@synthesize ratingCommand=_ratingCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * likeCommand;                                                //@synthesize likeCommand=_likeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * dislikeCommand;                                             //@synthesize dislikeCommand=_dislikeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * bookmarkCommand;                                            //@synthesize bookmarkCommand=_bookmarkCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCommandCenter;
+(void)getPendingCommandTypesWithCompletion:(/*^block*/id)arg1 ;
+(long long)_numberOfCommandCentersWithTargets;
+(id)commandCenterForPlayerID:(id)arg1 ;
+(void)updateLaunchCommandsWithConfigurationHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(MPRemoteCommand *)pauseCommand;
-(MPRemoteCommand *)playCommand;
-(MPRemoteCommand *)togglePlayPauseCommand;
-(MPRemoteCommand *)seekBackwardCommand;
-(MPRemoteCommand *)seekForwardCommand;
-(MPChangePlaybackPositionCommand *)changePlaybackPositionCommand;
-(id)initWithPlayerID:(id)arg1 ;
-(NSString *)playerID;
-(void)_scheduleSupportedCommandsChanged;
-(void)_startMediaRemoteSync;
-(void)_stopMediaRemoteSync;
-(id)_activeCommands;
-(void)remoteCommandDidMutatePropagatableProperty:(id)arg1 ;
-(id)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 ;
-(void)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPendingCommandTypesWithCompletion:(/*^block*/id)arg1 ;
-(MPRemoteCommand *)stopCommand;
-(MPRemoteCommand *)enableLanguageOptionCommand;
-(MPRemoteCommand *)disableLanguageOptionCommand;
-(MPRemoteCommand *)nextTrackCommand;
-(MPRemoteCommand *)previousTrackCommand;
-(MPSkipIntervalCommand *)skipForwardCommand;
-(MPSkipIntervalCommand *)skipBackwardCommand;
-(MPRatingCommand *)ratingCommand;
-(MPChangePlaybackRateCommand *)changePlaybackRateCommand;
-(MPFeedbackCommand *)likeCommand;
-(MPFeedbackCommand *)dislikeCommand;
-(MPFeedbackCommand *)bookmarkCommand;
-(MPChangeRepeatModeCommand *)changeRepeatModeCommand;
-(MPChangeShuffleModeCommand *)changeShuffleModeCommand;
-(MPRemoteCommand *)specialSeekForwardCommand;
-(MPRemoteCommand *)specialSeekBackwardCommand;
-(MPAdvanceShuffleModeCommand *)advanceShuffleModeCommand;
-(MPAdvanceRepeatModeCommand *)advanceRepeatModeCommand;
-(MPRemoteCommand *)createRadioStationCommand;
-(MPSetPlaybackQueueCommand *)setPlaybackQueueCommand;
-(MPRemoteCommand *)prepareForSetPlaybackQueueCommand;
-(MPInsertIntoPlaybackQueueCommand *)insertIntoPlaybackQueueCommand;
-(MPRemoteCommand *)removeFromPlaybackQueueCommand;
-(MPReorderQueueCommand *)reorderQueueCommand;
-(MPRemoteCommand *)playItemInQueueCommand;
-(MPFeedbackCommand *)addNowPlayingItemToLibraryCommand;
-(MPFeedbackCommand *)addItemToLibraryCommand;
-(MPSetPlaybackSessionCommand *)setPlaybackSessionCommand;
-(MPRemoteCommand *)reshuffleCommand;
-(MPChangeQueueEndActionCommand *)changeQueueEndActionCommand;
-(id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned)arg2 ;
-(void)_commandTargetsDidChangeNotification:(id)arg1 ;
-(BOOL)disableAutomaticCanBeNowPlaying;
-(void)setDisableAutomaticCanBeNowPlaying:(BOOL)arg1 ;
@end

