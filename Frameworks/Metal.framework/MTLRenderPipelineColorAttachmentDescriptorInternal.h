/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setDestinationAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setDestinationRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setSourceRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setRgbBlendOperation:(unsigned long long)arg1 ;
-(void)setSourceAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setAlphaBlendOperation:(unsigned long long)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(void)setWriteMask:(unsigned long long)arg1 ;
-(unsigned long long)writeMask;
-(BOOL)isBlendingEnabled;
-(unsigned long long)rgbBlendOperation;
-(unsigned long long)alphaBlendOperation;
-(unsigned long long)sourceRGBBlendFactor;
-(unsigned long long)sourceAlphaBlendFactor;
-(unsigned long long)destinationRGBBlendFactor;
-(unsigned long long)destinationAlphaBlendFactor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
@end

