/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <ToneLibrary/ToneLibrary-Structs.h>
@class NSObject, NSString, AVAudioPCMBuffer, AVAudioEngine, AVAudioInputNode, AVAudioUnitEQ, AVAudioUnitReverb;

@interface TLAttentionAwarenessEffectProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	AVAudioPCMBuffer* _destinationPCMBuffer;
	AVAudioEngine* _engine;
	AVAudioInputNode* _inputNode;
	AudioBufferList* _inputNodeInputBufferList;
	AVAudioUnitEQ* _lowPassFilter;
	AVAudioUnitReverb* _reverb;
	SCD_Struct_TL2 _effectParameters;
	NSObject*<OS_dispatch_source> _effectMixFadingTimer;

}

@property (assign,nonatomic) SCD_Struct_TL2 effectParameters; 
-(void)dealloc;
-(void)stop;
-(BOOL)start;
-(SCD_Struct_TL2)effectParameters;
-(void)setEffectParameters:(SCD_Struct_TL2)arg1 ;
-(void)setEffectParameters:(SCD_Struct_TL2)arg1 effectMixFadeDuration:(double)arg2 ;
-(id)initWithProcessingFormat:(id)arg1 framesPerRender:(unsigned)arg2 effectParameters:(SCD_Struct_TL2)arg3 ;
-(AudioBufferList*)render:(AudioBufferList*)arg1 numberOfFrames:(unsigned)arg2 ;
-(void)_assertRunningOnAccessQueue;
-(void)_applyEffectParameters:(SCD_Struct_TL2)arg1 includingEffectMix:(BOOL)arg2 ;
-(float)_sanitizeEffectMix:(float)arg1 ;
-(void)_applyEffectMix:(float)arg1 ;
-(float)_currentEffectMix;
-(void)_assertNotRunningOnAccessQueue;
@end

