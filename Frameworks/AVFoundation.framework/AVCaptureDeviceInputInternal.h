/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCallbackCancellation;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDevice, NSArray, AVWeakReference;

@interface AVCaptureDeviceInputInternal : NSObject {

	AVCaptureDevice* device;
	NSArray* ports;
	NSArray* multiCamPorts;
	BOOL unifiedAutoExposureDefaultsEnabled;
	BOOL builtInMicrophoneStereoAudioCaptureEnabled;
	BOOL visionDataDeliveryEnabled;
	BOOL cameraCalibrationDataDeliveryEnabled;
	float simulatedAperture;
	SCD_Struct_AV7 videoMinFrameDurationOverride;
	float maxGainOverride;
	BOOL ready;
	float portraitLightingEffectStrength;
	AVWeakReference* weakReference;
	id<AVCallbackCancellation> deviceOpenCallbackInvoker;

}
-(void)dealloc;
@end

