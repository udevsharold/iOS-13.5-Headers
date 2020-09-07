/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoPlaybackAttemptTracking <NSObject>
@property (getter=hasAttemptedPlayback,nonatomic,readonly) BOOL attemptedPlayback; 
@property (setter=onPlaybackAttempt:,nonatomic,copy) id playbackAttemptBlock; 
@required
-(id)playbackAttemptBlock;
-(BOOL)hasAttemptedPlayback;
-(void)onPlaybackAttempt:(/*^block*/id)arg1;

@end
