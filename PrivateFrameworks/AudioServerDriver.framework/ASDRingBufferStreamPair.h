/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:11 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDManagedRingBuffer;
@class ASDStream;

@interface ASDRingBufferStreamPair : NSObject {

	ASDStream* _inputStream;
	ASDStream* _outputStream;
	long long _ringBufferFrameCapacity;
	id<ASDManagedRingBuffer> _ringBuffer;

}

@property (nonatomic,readonly) id<ASDManagedRingBuffer> ringBuffer;              //@synthesize ringBuffer=_ringBuffer - In the implementation block
@property (nonatomic,readonly) ASDStream * inputStream;                          //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) ASDStream * outputStream;                         //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) long long ringBufferFrameCapacity;                  //@synthesize ringBufferFrameCapacity=_ringBufferFrameCapacity - In the implementation block
-(ASDStream *)outputStream;
-(ASDStream *)inputStream;
-(id<ASDManagedRingBuffer>)ringBuffer;
-(id)initWithRingBufferFrameCapacity:(long long)arg1 withPlugin:(id)arg2 ;
-(void)setRingBufferFrameCapacity:(long long)arg1 ;
-(long long)ringBufferFrameCapacity;
@end

