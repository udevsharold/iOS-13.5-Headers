/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLResourceStateCommandEncoder.h>

@class NSString;

@interface MTLToolsResourceStateCommandEncoder : MTLToolsCommandEncoder <MTLResourceStateCommandEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const SCD_Struct_MT5*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(SCD_Struct_MT5)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4 ;
-(void)copyMappingStateFromTexture:(id)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6 ;
@end

