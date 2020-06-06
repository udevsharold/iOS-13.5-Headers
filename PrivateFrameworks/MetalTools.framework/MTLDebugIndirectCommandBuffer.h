/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@protocol MTLIndirectCommandBuffer;
@class NSMutableArray, MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {

	NSMutableArray* _optimizedRangeList;
	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _maxCommandCount;
	id<MTLIndirectCommandBuffer> _iCB;
	BOOL isRender;

}

@property (readonly) NSMutableArray * optimizedRangeList; 
@property (readonly) MTLIndirectCommandBufferDescriptor * descriptor; 
-(void)dealloc;
-(MTLIndirectCommandBufferDescriptor *)descriptor;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)optimizedRangeList;
-(id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
@end

