/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelResource.h>

@protocol MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder;
@class MTLIOAccelBuffer, MTLIndirectCommandBufferDescriptor;

@interface MTLIOAccelIndirectCommandBuffer : MTLIOAccelResource {

	MTLIOAccelBuffer* _privateICBuffer;
	unsigned long long _maxCommandCount;
	unsigned long long _commandBufferType;
	id<MTLIndirectComputeCommandEncoder> _privateIndirectComputeEncoder;
	id<MTLIndirectRenderCommandEncoder> _privateIndirectRenderEncoder;
	MTLIndirectCommandBufferDescriptor* _descriptor;
	MTLIndirectCommandBufferHeader _internalHeader;

}

@property (readonly) MTLIOAccelBuffer * privateICBuffer; 
@property (readonly) unsigned long long commandBufferType; 
@property (readonly) MTLIndirectCommandBufferDescriptor * descriptor; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long size; 
-(void)dealloc;
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)storageMode;
-(MTLIndirectCommandBufferDescriptor *)descriptor;
-(BOOL)isComplete;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)waitUntilComplete;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 ;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2 ;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)resetWithRange:(NSRange)arg1 ;
-(unsigned long long)commandBufferType;
-(MTLIOAccelBuffer *)privateICBuffer;
-(BOOL)isAliasable;
-(void)makeAliasable;
@end

