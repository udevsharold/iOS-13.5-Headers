/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ARKit/ARKit-Structs.h>
@class ARGPUCubemapProjector, ARGPUCubemapConverter, ARGPUCubemapHistogram, ARGPUWarper, NSObject;

@interface ARCubemapGenerator : NSObject {

	ARGPUCubemapProjector* _cubemapProjector;
	ARGPUCubemapConverter* _cubemapConverter;
	ARGPUCubemapHistogram* _cubemapHistogram;
	ARGPUWarper* _gpuWarper;
	NSObject*<OS_dispatch_queue> _cubemapQueue;

}
-(id)init;
-(void)cubemapWithTransform:(SCD_Struct_AR1)arg1 extent:(ARLabHistogram)arg2 lastHistogram:(vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)arg3 fromPlanes:(CVBufferRef)arg4 cameraImage:(SCD_Struct_AR1)arg5 cameraTransform:(SCD_Struct_AR24)arg6 cameraIntrinsics:(double)arg7 cameraExposure:(float)arg8 cameraExposureOffset:(/*^block*/id)arg9 ;
@end

