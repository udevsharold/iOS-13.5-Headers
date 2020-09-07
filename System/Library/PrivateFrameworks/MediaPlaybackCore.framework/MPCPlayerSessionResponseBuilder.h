/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlayerSessionResponseBuilder <MPCResponseMediaRemoteControllerChaining>
@optional
-(long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(id)arg2;
-(long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(id)arg3;
-(id)sessionPlayerPath:(id)arg1 atIndex:(long long)arg2 chain:(id)arg3;
-(id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;

@end
