/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(void)overlayTappedPictureInPictureButton:(id)arg1;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2;
-(BOOL)overlayShouldAcceptSkipForwardEvent:(id)arg1;
-(BOOL)overlayShouldAcceptSkipBackwardEvent:(id)arg1;

@end

