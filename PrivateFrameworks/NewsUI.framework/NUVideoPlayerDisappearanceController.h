/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol SVVideoViewControllerProviding, SVVideoPlaybackController, SVVideoPlaybackAdvancing, SVVideoQueueProviding;
@class NUVideoAdHistoryEventTracker, NSString;

@interface NUVideoPlayerDisappearanceController : NSObject <NUVideoPlayerEventTracker> {

	NUVideoAdHistoryEventTracker* _adHistoryEventTracker;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoPlaybackController> _playbackController;
	id<SVVideoPlaybackAdvancing> _playbackAdvancer;
	id<SVVideoQueueProviding> _queueProvider;

}

@property (nonatomic,readonly) NUVideoAdHistoryEventTracker * adHistoryEventTracker;                        //@synthesize adHistoryEventTracker=_adHistoryEventTracker - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                            //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVideoPlaybackAdvancing> playbackAdvancer;                        //@synthesize playbackAdvancer=_playbackAdvancer - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVideoQueueProviding> queueProvider;                              //@synthesize queueProvider=_queueProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id<SVVideoPlaybackController>)playbackController;
-(id<SVVideoPlaybackAdvancing>)playbackAdvancer;
-(NUVideoAdHistoryEventTracker *)adHistoryEventTracker;
-(void)videoPlayerDidBecomeInvisible;
-(id)initWithAdHistoryEventTracker:(id)arg1 videoViewControllerProvider:(id)arg2 playbackController:(id)arg3 playbackAdvancer:(id)arg4 queueProvider:(id)arg5 ;
@end

