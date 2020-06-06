/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, AVWeakReference;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _attributes;
	BOOL _levelMeteringEnabled;
	BOOL _isConnected;
	NSString* _localizedName;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;

}
+(void)initialize;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)localizedName;
-(id)uniqueID;
-(id)deviceType;
-(BOOL)isConnected;
-(BOOL)hasMediaType:(id)arg1 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(id)modelID;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(BOOL)isInUseByAnotherApplication;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(void)audioInputDevicesDidChangeHandler:(id)arg1 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1 ;
@end

