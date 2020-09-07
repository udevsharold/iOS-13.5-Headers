/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectArgumentBufferLayout : NSObject {

	MTLIndirectArgumentBufferLayoutPrivate* _private;

}

@property (readonly) BOOL bufferLayoutMatchesFrontEndLayout; 
@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned hashValue; 
@property (readonly) unsigned hashOffset; 
@property (readonly) unsigned hashMask; 
@property (readonly) unsigned hashSignature; 
@property (nonatomic,readonly) id<MTLDeviceSPI> device; 
-(id)init;
-(void)dealloc;
-(unsigned long long)alignment;
-(id<MTLDeviceSPI>)device;
-(unsigned)hashMask;
-(unsigned long long)encodedLength;
-(void)setStructType:(id)arg1 withDevice:(id)arg2 ;
-(void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(BOOL)bufferLayoutMatchesFrontEndLayout;
-(unsigned)hashValue;
-(unsigned)hashOffset;
-(unsigned)hashSignature;
-(unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1 ;
-(id)bufferLayoutForResourceAtIndex:(unsigned long long)arg1 ;
@end
