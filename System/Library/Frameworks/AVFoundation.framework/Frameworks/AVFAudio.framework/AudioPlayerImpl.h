/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate, OS_dispatch_queue;
#import <AVFAudio/AVFAudio-Structs.h>
@class NSData, NSURL, NSDictionary, AVAudioFormat, NSArray, AVAudioSession, NSObject;

@interface AudioPlayerImpl : NSObject {

	id<AVAudioPlayerDelegate> _delegate;
	NSData* _data;
	NSURL* _url;
	NSDictionary* _actualSettings;
	AVAudioFormat* _format;
	BOOL _playRetain;
	NSArray* _channelAssignments;
	AVAudioSession* _audioSession;
	BOOL _sessionListenerWasSet;
	unsigned long long _endInterruptionFlags;
	AVAudioPlayerCpp* _localPlayer;
	NSObject*<OS_dispatch_queue> _gcd;

}
-(id)init;
-(void)dealloc;
@end

