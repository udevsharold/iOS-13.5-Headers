/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoVolumeObserving <NSObject>
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
@property (setter=onVolumeChange:,nonatomic,copy) id volumeChangeBlock; 
@property (setter=onMuteStateChange:,nonatomic,copy) id muteStateChangeBlock; 
@required
-(float)volume;
-(BOOL)muted;
-(id)volumeChangeBlock;
-(id)muteStateChangeBlock;
-(void)onVolumeChange:(/*^block*/id)arg1;
-(void)onMuteStateChange:(/*^block*/id)arg1;

@end

