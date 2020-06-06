/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioRelayIOControllerSettings : NSObject {

	AudioStreamBasicDescription _audioFormat;
	VCRemoteCodecInfo _remoteCodecInfo;

}

@property (nonatomic,readonly) const AudioStreamBasicDescription* audioFormat; 
@property (nonatomic,readonly) const VCRemoteCodecInfo* remoteCodecInfo; 
@property (nonatomic,readonly) unsigned samplesPerFrame; 
-(const AudioStreamBasicDescription*)audioFormat;
-(unsigned)samplesPerFrame;
-(const VCRemoteCodecInfo*)remoteCodecInfo;
-(id)initWithAudioFormat:(const AudioStreamBasicDescription*)arg1 remoteCodecInfo:(const VCRemoteCodecInfo*)arg2 ;
@end

