/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/VCTextSender.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCAudioIOSource.h>
#import <libobjc.A.dylib/VCAudioIODelegate.h>

@protocol VCMediaStreamDelegate, OS_dispatch_queue;
@class NSObject, VCAudioPayload, VCAudioIO, NSString;

@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate> {

	int _clientPid;
	AudioStreamBasicDescription vpioFormat;
	unsigned _vpioSamplesPerFrame;
	int deviceRole;
	BOOL isValid;
	NSObject*<VCMediaStreamDelegate> delegate;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	opaque_pthread_mutex_t sessionLock;
	int _state;
	VCAudioPayload* _currentAudioPayload;
	VCAudioIO* _audioIO;
	SoundDec_t* _decoder;
	opaqueCMSimpleQueueRef _charQueue;
	tagVCMemoryPool* _characterPool;
	id _textStream;

}

@property (assign,nonatomic) NSObject*<VCMediaStreamDelegate> delegate; 
@property (assign) BOOL isValid; 
@property (assign) int deviceRole; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isValid;
-(NSObject*<VCMediaStreamDelegate>)delegate;
-(void)setDelegate:(NSObject*<VCMediaStreamDelegate>)arg1 ;
-(void)lock;
-(void)unlock;
-(void)stop;
-(void)start;
-(void)setPause:(BOOL)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)sendText:(id)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didSuspendAudioIO:(id)arg1 ;
-(void)didResumeAudioIO:(id)arg1 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1 ;
-(id)initWithMode:(long long)arg1 clientPid:(int)arg2 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(void)startVirtualTTYWithCompletionHandler:(/*^block*/id)arg1 ;
@end

