/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLIndirectArgumentEncoder.h>
#import <libobjc.A.dylib/MTLArgumentEncoderSPI.h>

@class _MTLIndirectArgumentBufferLayout, MTLEmulationIndirectArgumentBufferLayout, NSString;

@interface MTLEmulationIndirectArgumentEncoder : _MTLIndirectArgumentEncoder <MTLArgumentEncoderSPI> {

	char* _destination;
	MTLEmulationIndirectArgumentBufferLayout* _emulationLayout;

}

@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long alignment; 
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout; 
-(void)dealloc;
-(unsigned long long)alignment;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)encodedLength;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void*)constantDataAtIndex:(unsigned long long)arg1 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1 ;
-(id)initWithLayout:(id)arg1 device:(id)arg2 ;
@end

