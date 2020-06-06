/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <ARKit/ARSensor.h>

@protocol OS_dispatch_queue, ARSensorDelegate;
@class ARBufferPopulationMonitor, NSObject, ARParentImageSensorSettings, NSMutableArray, AVCaptureSession, AVCaptureDeviceInput, AVCaptureAudioDataOutput, AVCaptureConnection, NSString;

@interface ARParentImageSensor : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, ARSensor> {

	ARBufferPopulationMonitor* _bufferPopulationMonitor;
	NSObject*<OS_dispatch_queue> _captureQueue;
	BOOL _recordingMode;
	BOOL _running;
	BOOL _interrupted;
	BOOL _unrecoverable;
	ARParentImageSensorSettings* _settings;
	NSMutableArray* _sensors;
	id<ARSensorDelegate> _delegate;
	unsigned long long _powerUsage;
	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _audioInput;
	AVCaptureAudioDataOutput* _audioOutput;
	AVCaptureConnection* _audioConnection;

}

@property (nonatomic,retain) NSMutableArray * sensors;                                   //@synthesize sensors=_sensors - In the implementation block
@property (assign) BOOL running;                                                         //@synthesize running=_running - In the implementation block
@property (assign) BOOL interrupted;                                                     //@synthesize interrupted=_interrupted - In the implementation block
@property (assign) BOOL unrecoverable;                                                   //@synthesize unrecoverable=_unrecoverable - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) ARParentImageSensorSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage;                              //@synthesize powerUsage=_powerUsage - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * captureSession;                        //@synthesize captureSession=_captureSession - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceInput * audioInput;                        //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,readonly) AVCaptureAudioDataOutput * audioOutput;                   //@synthesize audioOutput=_audioOutput - In the implementation block
@property (nonatomic,readonly) AVCaptureConnection * audioConnection;                    //@synthesize audioConnection=_audioConnection - In the implementation block
@property (assign,nonatomic) BOOL recordingMode;                                         //@synthesize recordingMode=_recordingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)running;
-(ARParentImageSensorSettings *)settings;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(AVCaptureSession *)captureSession;
-(AVCaptureAudioDataOutput *)audioOutput;
-(AVCaptureDeviceInput *)audioInput;
-(void)reconfigure:(id)arg1 ;
-(void)_configureAudioCapture;
-(BOOL)canReconfigure:(id)arg1 ;
-(unsigned long long)providedDataTypes;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(BOOL)recordingMode;
-(void)setRecordingMode:(BOOL)arg1 ;
-(void)forceUpdatePowerUsage:(unsigned long long)arg1 ;
-(unsigned long long)powerUsage;
-(void)addSensorForSettings:(id)arg1 ;
-(BOOL)unrecoverable;
-(BOOL)_validateMicrophoneAuthorization;
-(NSMutableArray *)sensors;
-(BOOL)_validateCameraAuthorization;
-(void)captureSessionStateChanged:(id)arg1 ;
-(void)setUnrecoverable:(BOOL)arg1 ;
-(void)updateCaptureDeviceConfigurations:(id)arg1 ;
-(void)setSensors:(NSMutableArray *)arg1 ;
-(AVCaptureConnection *)audioConnection;
@end

