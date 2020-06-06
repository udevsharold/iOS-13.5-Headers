/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMOutputComponent.h>

@protocol OS_dispatch_queue, CHHapticPatternPlayer;
@class NSObject, CHHapticEngine;

@interface AXMHapticComponent : AXMOutputComponent {

	NSObject*<OS_dispatch_queue> _queue;
	CHHapticEngine* _engine;
	id<CHHapticPatternPlayer> _player;
	BOOL _supportsHaptics;
	BOOL _supportsAudio;
	BOOL _autoShutdownEnabled;
	id<CHHapticPatternPlayer> __levelPlayer;

}

@property (nonatomic,retain) id<CHHapticPatternPlayer> _levelPlayer;                             //@synthesize _levelPlayer=__levelPlayer - In the implementation block
@property (assign,getter=isAutoShutdownEnabled,nonatomic) BOOL autoShutdownEnabled;              //@synthesize autoShutdownEnabled=_autoShutdownEnabled - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAutoShutdownEnabled:(BOOL)arg1 ;
-(void)stopCurrentHaptics;
-(BOOL)isAutoShutdownEnabled;
-(id<CHHapticPatternPlayer>)_levelPlayer;
-(void)set_levelPlayer:(id<CHHapticPatternPlayer>)arg1 ;
@end

