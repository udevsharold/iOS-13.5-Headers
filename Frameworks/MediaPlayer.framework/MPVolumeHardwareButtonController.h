/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVolumeControllerDataSource;
@interface MPVolumeHardwareButtonController : NSObject {

	double _pendingVolumeChange;
	BOOL _debounceVolumeRepeat;
	BOOL _didRegisterForButtonNotifications;
	id<MPVolumeControllerDataSource> _activeDataSource;

}

@property (nonatomic,retain) id<MPVolumeControllerDataSource> activeDataSource;              //@synthesize activeDataSource=_activeDataSource - In the implementation block
+(id)sharedController;
-(id)_init;
-(void)_commitVolumeChange;
-(void)setActiveDataSource:(id<MPVolumeControllerDataSource>)arg1 ;
-(void)_changeVolumeBy:(double)arg1 ;
-(double)_calculateButtonRepeatDelay;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)cancelVolumeEvent;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(void)handleVolumeDownButton;
-(void)handleVolumeUpButton;
-(void)_volumeUpButtonTouchDown:(id)arg1 ;
-(void)_volumeUpButtonTouchUp:(id)arg1 ;
-(void)_volumeDownButtonTouchDown:(id)arg1 ;
-(void)_volumeDownButtonTouchUp:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification;
-(void)_applicationWillResignActiveNotification;
-(void)_registerForButtonNotificationsIfNeeded;
-(void)_unregisterForButtonNotificationsIfNeeded;
-(id<MPVolumeControllerDataSource>)activeDataSource;
@end

