/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLTelemetryDevice, NSSet;

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {

	unsigned uniqueID;
	MTLTelemetryDevice* device;
	BOOL hasAnisoConstantSampler;
	NSSet* activeFragmentSamplers;
	NSSet* activeFragmentTextures;

}
+(unsigned)generateUniqueID;
-(void)dealloc;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(void)accumulateUsage;
@end

