/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject, NSURL;

@interface CSAudioFileLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _asbd;
	NSURL* _url;
	unsigned _audioLength;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)stopRecording;
-(void)startRecording;
-(void)_closeAudioFile;
-(void)appendAudioData:(id)arg1 ;
@end

