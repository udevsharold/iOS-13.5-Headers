/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStageInputOutputDescriptor.h>

@class MTLBufferLayoutDescriptorArrayInternal, MTLAttributeDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {

	MTLBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLAttributeDescriptorArrayInternal* _attributeArray;
	unsigned long long _indexBufferIndex;
	unsigned long long _indexType;

}
+(id)vertexDescriptor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(void)reset;
-(unsigned long long)indexType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(id)layouts;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)indexBufferIndex;
-(void)setIndexBufferIndex:(unsigned long long)arg1 ;
-(id)newSerializedDescriptor;
-(BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2 ;
@end

