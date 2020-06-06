/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(void)setSAddressMode:(unsigned long long)arg1 ;
-(void)setTAddressMode:(unsigned long long)arg1 ;
-(void)setNormalizedCoordinates:(BOOL)arg1 ;
-(void)setMaxAnisotropy:(unsigned long long)arg1 ;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(void)setRAddressMode:(unsigned long long)arg1 ;
-(void)setLodMinClamp:(float)arg1 ;
-(void)setLodMaxClamp:(float)arg1 ;
-(void)setCompareFunction:(unsigned long long)arg1 ;
-(void)setSupportArgumentBuffers:(BOOL)arg1 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)minFilter;
-(unsigned long long)magFilter;
-(unsigned long long)mipFilter;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(BOOL)lodAverage;
-(void)setLodAverage:(BOOL)arg1 ;
-(unsigned long long)maxAnisotropy;
-(unsigned long long)sAddressMode;
-(unsigned long long)tAddressMode;
-(unsigned long long)rAddressMode;
-(BOOL)normalizedCoordinates;
-(float)lodMinClamp;
-(float)lodMaxClamp;
-(float)lodBias;
-(void)setLodBias:(float)arg1 ;
-(unsigned long long)compareFunction;
-(BOOL)supportArgumentBuffers;
@end

