/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoVolumeObserving.h>

@class SVPlayer, AVAudioSession, SVKeyValueObserver, NSString;

@interface SVVideoVolumeObserver : NSObject <SVVideoVolumeObserving> {

	BOOL _muted;
	float _volume;
	/*^block*/id _volumeChangeBlock;
	/*^block*/id _muteStateChangeBlock;
	SVPlayer* _player;
	AVAudioSession* _audioSession;
	SVKeyValueObserver* _outputVolumeObserver;
	SVKeyValueObserver* _muteStateObserver;

}

@property (nonatomic,readonly) SVPlayer * player;                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,__weak,readonly) AVAudioSession * audioSession;                       //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * outputVolumeObserver;                  //@synthesize outputVolumeObserver=_outputVolumeObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * muteStateObserver;                     //@synthesize muteStateObserver=_muteStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted;                                                 //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) float volume;                                               //@synthesize volume=_volume - In the implementation block
@property (setter=onVolumeChange:,nonatomic,copy) id volumeChangeBlock;                    //@synthesize volumeChangeBlock=_volumeChangeBlock - In the implementation block
@property (setter=onMuteStateChange:,nonatomic,copy) id muteStateChangeBlock;              //@synthesize muteStateChangeBlock=_muteStateChangeBlock - In the implementation block
-(float)volume;
-(void)volumeChanged:(float)arg1 ;
-(BOOL)muted;
-(SVPlayer *)player;
-(AVAudioSession *)audioSession;
-(void)muteStateChanged:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 audioSession:(id)arg2 ;
-(void)updateWithVolume:(float)arg1 muted:(BOOL)arg2 ;
-(id)volumeChangeBlock;
-(id)muteStateChangeBlock;
-(void)onVolumeChange:(/*^block*/id)arg1 ;
-(void)onMuteStateChange:(/*^block*/id)arg1 ;
-(SVKeyValueObserver *)outputVolumeObserver;
-(SVKeyValueObserver *)muteStateObserver;
@end

