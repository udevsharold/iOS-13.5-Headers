/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSBeginTextToSpeechStreamingResponse.h>

@class NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSMutableBeginTextToSpeechStreamingResponse : OPTTSBeginTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) long long audio_type; 
@property (nonatomic,copy) OPTTSAudioDescription * decoder_description; 
@property (nonatomic,copy) OPTTSAudioDescription * playback_description; 
@property (nonatomic,copy) OPTTSTextToSpeechMeta * meta_info; 
@property (assign,nonatomic) float streaming_playback_buffer_size_in_seconds; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stream_id;
-(NSString *)speech_id;
-(NSString *)session_id;
-(long long)audio_type;
-(OPTTSTextToSpeechMeta *)meta_info;
-(int)error_code;
-(NSString *)error_str;
-(OPTTSAudioDescription *)decoder_description;
-(OPTTSAudioDescription *)playback_description;
-(float)streaming_playback_buffer_size_in_seconds;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setAudio_type:(long long)arg1 ;
-(void)setStream_id:(NSString *)arg1 ;
-(void)setMeta_info:(OPTTSTextToSpeechMeta *)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)setDecoder_description:(OPTTSAudioDescription *)arg1 ;
-(void)setPlayback_description:(OPTTSAudioDescription *)arg1 ;
-(void)setStreaming_playback_buffer_size_in_seconds:(float)arg1 ;
@end

