/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADPlayerDelegate <NSObject>
@optional
-(id)viewControllerForActionFromAdPlayer:(id)arg1;
-(void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;

@required
-(void)adPlayerDidTimeout:(id)arg1;
-(void)adPlayerFailedToLoadAsset:(id)arg1;
-(void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
-(void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
-(void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
-(void)adPlayerDidFinishPlayback:(id)arg1;

@end

