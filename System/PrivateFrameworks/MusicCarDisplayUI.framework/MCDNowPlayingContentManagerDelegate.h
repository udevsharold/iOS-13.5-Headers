/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDNowPlayingContentManagerDelegate <NSObject>
@optional
-(void)contentManager:(id)arg1 shouldShowPlaybackQueue:(BOOL)arg2;
-(void)contentManager:(id)arg1 processResponse:(id)arg2 error:(id)arg3;
-(void)contentManagerReloadData:(id)arg1;
-(void)contentManager:(id)arg1 presentViewController:(id)arg2;
-(void)contentManager:(id)arg1 bufferingItem:(BOOL)arg2;
-(void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1;
-(void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
-(void)contentManagerCompletedAllPlayback:(id)arg1;
-(void)contentManager:(id)arg1 sectionName:(id)arg2;
-(void)contentManager:(id)arg1 itemDidChange:(id)arg2 response:(id)arg3;

@end

