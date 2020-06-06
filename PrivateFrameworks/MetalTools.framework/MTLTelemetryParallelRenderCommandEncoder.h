/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLTelemetryDevice, MTLTelemetryCommandBuffer, MTLRenderPassDescriptor;

@interface MTLTelemetryParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	MTLTelemetryDevice* _telemetryDevice;
	MTLTelemetryCommandBuffer* _telemetryCommandBuffer;
	MTLRenderPassDescriptor* _descriptor;
	unsigned _encoderCount;

}
-(void)endEncoding;
-(id)renderCommandEncoder;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
@end

