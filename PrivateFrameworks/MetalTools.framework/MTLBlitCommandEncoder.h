/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBlitCommandEncoder <MTLCommandEncoder>
@required
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT0)arg9;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
-(void)fillBuffer:(id)arg1 range:(NSRange)arg2 value:(unsigned char)arg3;
-(void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT0)arg9;
-(void)generateMipmapsForTexture:(id)arg1;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
-(void)updateFence:(id)arg1;
-(void)waitForFence:(id)arg1;
-(void)optimizeContentsForGPUAccess:(id)arg1;
-(void)optimizeContentsForCPUAccess:(id)arg1;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
-(void)synchronizeResource:(id)arg1;
-(void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
-(void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
-(void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
-(void)resetCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2;
-(void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
-(void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(NSRange)arg2;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 options:(unsigned long long)arg10;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
-(void)getTextureAccessCounters:(id)arg1 region:(SCD_Struct_MT5)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(BOOL)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;
-(void)resetTextureAccessCounters:(id)arg1 region:(SCD_Struct_MT5)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;

@end

