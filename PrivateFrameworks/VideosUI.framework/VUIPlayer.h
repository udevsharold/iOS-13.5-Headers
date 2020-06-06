/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlayer.h>

@interface VUIPlayer : TVPPlayer
+(void)initialize;
+(id)savedPreferredAudioLanguageCode;
+(void)setSavedPreferredAudioLanguageCode:(id)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)_networkConfigurationDidChange:(id)arg1 ;
-(void)_videoPlaybackSettingsDidChange:(id)arg1 ;
-(void)_configurePlayerForCurrentNetworkSettingsAndMediaItem;
@end

