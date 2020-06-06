/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioFormat, AUAudioUnitBusArray, VCAudioIOControllerClient;

@interface VCSpatialAudioUnit : AUAudioUnit {

	AVAudioFormat* _format;
	AUAudioUnitBusArray* _outputBusArray;
	AUAudioUnitBusArray* _inputBusArray;
	VCAudioIOControllerIOState* _ioState;
	VCAudioIOControllerClient* _client;
	opaqueVCAudioBufferListRef _renderBuffer;
	opaqueVCAudioBufferListRef _tempBuffer;
	double _currentTempBufferSampleTime;

}

@property (assign) opaqueVCAudioBufferListRef renderBuffer;                   //@synthesize renderBuffer=_renderBuffer - In the implementation block
@property (assign) opaqueVCAudioBufferListRef tempBuffer;                     //@synthesize tempBuffer=_tempBuffer - In the implementation block
@property (assign) VCAudioIOControllerIOState* ioState;                       //@synthesize ioState=_ioState - In the implementation block
@property (nonatomic,retain) VCAudioIOControllerClient * client;              //@synthesize client=_client - In the implementation block
+(void)registerAudioUnitDescription;
+(void)instantiate:(/*^block*/id)arg1 ;
-(void)dealloc;
-(VCAudioIOControllerClient *)client;
-(void)setClient:(VCAudioIOControllerClient *)arg1 ;
-(opaqueVCAudioBufferListRef)tempBuffer;
-(void)deallocateRenderResources;
-(id)outputBusses;
-(id)inputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(opaqueVCAudioBufferListRef)renderBuffer;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 client:(id)arg4 ;
-(void)setRenderBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setTempBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(VCAudioIOControllerIOState*)ioState;
-(void)setIoState:(VCAudioIOControllerIOState*)arg1 ;
@end

