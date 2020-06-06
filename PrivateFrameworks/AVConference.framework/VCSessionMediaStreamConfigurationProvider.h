/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSArray;

@interface VCSessionMediaStreamConfigurationProvider : NSObject {

	NSMutableArray* _allocatedStreamIDs;
	NSMutableArray* _audioStreamConfigurations;
	NSMutableArray* _videoStreamConfigurations;
	long long _highestEncodingResolution;
	BOOL _isEncodingSqaures;

}

@property (nonatomic,readonly) NSArray * audioStreamConfigurations;              //@synthesize audioStreamConfigurations=_audioStreamConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoStreamConfigurations;              //@synthesize videoStreamConfigurations=_videoStreamConfigurations - In the implementation block
@property (nonatomic,readonly) long long highestEncodingResolution;              //@synthesize highestEncodingResolution=_highestEncodingResolution - In the implementation block
@property (nonatomic,readonly) BOOL isEncodingSqaures;                           //@synthesize isEncodingSqaures=_isEncodingSqaures - In the implementation block
+(void)computeMaxNetworkBitrate:(unsigned*)arg1 maxMediaBitrate:(unsigned*)arg2 maxPacketsPerSecond:(float*)arg3 audioStreamIndex:(unsigned)arg4 ;
-(id)init;
-(void)dealloc;
-(unsigned short)generateStreamID;
-(NSArray *)audioStreamConfigurations;
-(NSArray *)videoStreamConfigurations;
-(BOOL)initializeStreams;
-(BOOL)initializeAudioStreams;
-(BOOL)initializeVideoStreams;
-(BOOL)initializeVideoStreamWithConfig:(VCMediaStreamConfigurationProviderVideo*)arg1 streamIndex:(unsigned)arg2 ;
-(BOOL)initializeVideoStreamWithDefaults;
-(int)streamPayloadFromProviderConfig:(VCMediaStreamConfigurationProviderVideo*)arg1 ;
-(BOOL)initializeAudioStreamWithIndex:(unsigned)arg1 supportedAudioRules:(id)arg2 ;
-(id)audioRuleCollectionWithAudioConfig:(VCMediaStreamConfigurationProviderAudio*)arg1 supportedAudioRules:(id)arg2 ;
-(long long)highestEncodingResolution;
-(BOOL)isEncodingSqaures;
@end

