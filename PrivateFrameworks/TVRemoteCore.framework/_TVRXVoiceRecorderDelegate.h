/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRXVoiceRecorderDelegate <NSObject>
@optional
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2;
-(void)voidRecorderDidStop:(id)arg1;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2;

@end

