/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSensorDelegate.h>
#import <ARKit/ARTechniqueDelegate.h>
#import <ARKit/ARWorldTrackingTechniqueObserver.h>
#import <ARKit/ARDevicePerformanceMonitorDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue, ARSessionDelegate;
@class ARTechnique, ARWorldTrackingTechnique, AREnvironmentTexturingTechnique, ARRecordingTechniquePublic, NSObject, ARFrame, ARFrameContext, NSHashTable, CMMotionManager, ARSessionMetrics, NSDate, ARRenderSyncScheduler, ARImageSensor, ARLocationSensor, ARProximitySensor, NSArray, ARDevicePerformanceMonitor, ARDevicePerformanceLevel, ARTrackedRaycastPostProcessor, ARBKSAccelerometer, ARVideoFormat, ARImageData, ARDepthPointCloudCoalescer, NSPointerArray, ARParentTechnique, NSUUID, ARConfiguration, ARQATracer, ARDeviceOrientationData, ARLocationData, NSString;

@interface ARSession : NSObject <ARSensorDelegate, ARTechniqueDelegate, ARWorldTrackingTechniqueObserver, ARDevicePerformanceMonitorDelegate> {

	ARTechnique* _renderingTechnique;
	ARWorldTrackingTechnique* _worldTrackingTechnique;
	AREnvironmentTexturingTechnique* _environmentTexturingTechnique;
	BOOL _forceEnvironmentTexturingToManualMode;
	ARRecordingTechniquePublic* _recordingTechnique;
	BOOL _configuredForWorldTracking;
	BOOL _vioFusionEnabled;
	NSObject*<OS_dispatch_semaphore> _lastPredictedFrameSemaphore;
	SCD_Struct_AR1 _lastPredictedFrameTransform;
	ARFrame* _lastProcessedFrame;
	NSObject*<OS_dispatch_semaphore> _lastProcessedFrameSemaphore;
	ARFrameContext* _nextFrameContext;
	NSObject*<OS_dispatch_semaphore> _nextFrameContextSemaphore;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_semaphore> _observersSemaphore;
	id _thermalStateObserver;
	long long _thermalState;
	int _peakPowerPressureToken;
	unsigned _peakPowerPressureLevel;
	CMMotionManager* _motionManger;
	ARSessionMetrics* _metrics;
	double _defaultRelocalizationDuration;
	NSDate* _relocalizationTimeoutDate;
	BOOL _relocalizationRequested;
	double _currentTrackingStartingTimestamp;
	long long _featurePointAccumulationCount;
	ARRenderSyncScheduler* _resultRequestScheduler;
	ARRenderSyncScheduler* _secondaryResultRequestScheduler;
	NSObject*<OS_dispatch_queue> _prepareTechniquesQueue;
	ARImageSensor* _imageSensor;
	ARLocationSensor* _locationSensor;
	ARProximitySensor* _proximitySensor;
	SCD_Struct_AR1 _cyclopToCameraTransform;
	BOOL _hasCyclopToCameraTransform;
	NSObject*<OS_dispatch_semaphore> _cyclopToCameraSemaphore;
	NSArray* resultDatasOfSecondaryFrameContexts;
	NSObject*<OS_dispatch_semaphore> _resultDataOfSecondaryFrameContextsSemaphore;
	ARDevicePerformanceMonitor* _deviceConditionMonitor;
	ARDevicePerformanceLevel* _lastKnownDeviceCondition;
	ARTrackedRaycastPostProcessor* _trackedRaycastPostProcessor;
	ARBKSAccelerometer* _bksAccelerometer;
	ARVideoFormat* _primaryVideoFormat;
	ARImageData* _latestUltraWideImageData;
	ARDepthPointCloudCoalescer* _depthPointCloudCoalescer;
	NSPointerArray* _weakFrames;
	BOOL _relocalizing;
	ARParentTechnique* _dontUseDirectlyTechnique;
	ARParentTechnique* _dontUseDirectlySecondaryTechnique;
	NSUUID* _identifier;
	id<ARSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	unsigned long long _state;
	ARConfiguration* _configurationInternal;
	NSArray* _availableSensors;
	unsigned long long _runningSensors;
	unsigned long long _pausedSensors;
	unsigned long long _powerUsage;
	ARQATracer* _tracer;
	ARDeviceOrientationData* _latestDeviceOrientationData;
	ARLocationData* _latestLocationData;

}

@property (retain) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (retain) ARConfiguration * configurationInternal;                            //@synthesize configurationInternal=_configurationInternal - In the implementation block
@property (retain) ARParentTechnique * technique;                                      //@synthesize dontUseDirectlyTechnique=_dontUseDirectlyTechnique - In the implementation block
@property (retain) ARParentTechnique * secondaryTechnique;                             //@synthesize dontUseDirectlySecondaryTechnique=_dontUseDirectlySecondaryTechnique - In the implementation block
@property (nonatomic,retain) NSArray * availableSensors;                               //@synthesize availableSensors=_availableSensors - In the implementation block
@property (assign,nonatomic) unsigned long long runningSensors;                        //@synthesize runningSensors=_runningSensors - In the implementation block
@property (assign,nonatomic) unsigned long long pausedSensors;                         //@synthesize pausedSensors=_pausedSensors - In the implementation block
@property (assign) unsigned long long powerUsage;                                      //@synthesize powerUsage=_powerUsage - In the implementation block
@property (nonatomic,retain) ARQATracer * tracer;                                      //@synthesize tracer=_tracer - In the implementation block
@property (retain) ARDeviceOrientationData * latestDeviceOrientationData;              //@synthesize latestDeviceOrientationData=_latestDeviceOrientationData - In the implementation block
@property (retain) ARLocationData * latestLocationData;                                //@synthesize latestLocationData=_latestLocationData - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 cyclopToCameraTransform; 
@property (assign) BOOL relocalizing;                                                  //@synthesize relocalizing=_relocalizing - In the implementation block
@property (assign,nonatomic,__weak) id<ARSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) ARFrame * currentFrame; 
@property (nonatomic,copy,readonly) ARConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_fullDescription;
+(void)setRenderType:(unsigned long long)arg1 ;
+(id)_runningSessions;
+(BOOL)_supportsConfiguration:(id)arg1 ;
+(id)_applySessionOverrides:(id)arg1 outError:(id*)arg2 ;
+(void)forceEnvironmentTexturingTechniqueToManualMode:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<ARSessionDelegate>)delegate;
-(void)setDelegate:(id<ARSessionDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)pause;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(ARConfiguration *)configuration;
-(id)_stateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_addObserver:(id)arg1 ;
-(ARFrame *)currentFrame;
-(SCD_Struct_AR1)predictedDeviceTransformAtTimestamp:(double)arg1 ;
-(void)runWithConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(void)runWithConfiguration:(id)arg1 ;
-(void)setTechnique:(ARParentTechnique *)arg1 ;
-(ARParentTechnique *)technique;
-(id)_fullDescription;
-(ARQATracer *)tracer;
-(void)addAnchor:(id)arg1 ;
-(void)removeAnchor:(id)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(id)annotateAnchorToRaycastResults:(id)arg1 ;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sensor:(id)arg1 didOutputSensorData:(id)arg2 ;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(void)sensor:(id)arg1 didFailWithError:(id)arg2 ;
-(unsigned long long)powerUsage;
-(id)replaySensor;
-(void)sensorDidPause:(id)arg1 ;
-(void)sensorDidRestart:(id)arg1 ;
-(double)minimumNotificationTimeWindow;
-(void)deviceConditionMonitor:(id)arg1 deviceConditionChanged:(id)arg2 ;
-(void)technique:(id)arg1 didChangeState:(long long)arg2 ;
-(void)technique:(id)arg1 didOutputCollaborationData:(id)arg2 ;
-(id)raycast:(id)arg1 ;
-(id)trackedRaycast:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)_updatePowerPressureLevelWithToken:(int)arg1 ;
-(void)_updatePowerUsage;
-(void)_updateThermalState:(id)arg1 ;
-(ARConfiguration *)configurationInternal;
-(void)_sessionRequestedRunWithConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_sessionDidFailWithError:(id)arg1 ;
-(BOOL)relocalizing;
-(void)_updateSessionWithConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_updateSessionStateWithConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)pausedSensors;
-(void)_configureInitialThermalPolicy;
-(void)_saveGraphFileForConfiguration:(id)arg1 pFileName:(id*)arg2 ;
-(void)_stopAllSensors;
-(ARParentTechnique *)secondaryTechnique;
-(id)_getObservers;
-(SCD_Struct_AR1)_cameraTransformForResultData:(id)arg1 previousFrame:(id)arg2 ;
-(void)_updatePowerUsageForced:(BOOL)arg1 ;
-(void)_changePowerUsage:(unsigned long long)arg1 forced:(BOOL)arg2 ;
-(NSArray *)availableSensors;
-(void)_setPrimaryTechnique:(id)arg1 secondaryTechnique:(id)arg2 ;
-(void)setupResultRequestSyncScheduler:(id)arg1 forTechnique:(id)arg2 ;
-(void)setupSessionForTechniques:(id)arg1 ;
-(void)setSecondaryTechnique:(ARParentTechnique *)arg1 ;
-(id)adPipelineParameters;
-(BOOL)isUserFaceTracking;
-(void)_updateSensorsWithConfiguration:(id)arg1 ;
-(unsigned long long)runningSensors;
-(void)_stopSensorsWithDataTypes:(unsigned long long)arg1 keepingDataTypes:(unsigned long long)arg2 ;
-(void)setConfigurationInternal:(ARConfiguration *)arg1 ;
-(void)_sessionWillRunWithConfiguration:(id)arg1 ;
-(void)_startSensorsWithDataTypes:(unsigned long long)arg1 ;
-(void)_configureSensorsForRecording;
-(BOOL)_exposeInternalDepthData;
-(void)_updateOriginTransformForFrame:(id)arg1 previousFrame:(id)arg2 modifiers:(unsigned long long)arg3 context:(id)arg4 ;
-(BOOL)is6DofFaceTracking;
-(void)_updateFeaturePointsForFrame:(id)arg1 previousFrame:(id)arg2 trackingStateChanged:(BOOL)arg3 context:(id)arg4 ;
-(void)_updateAnchorsForFrame:(id)arg1 resultDatas:(id)arg2 context:(id)arg3 addedAnchors:(id)arg4 updatedAnchors:(id)arg5 removedAnchors:(id)arg6 ;
-(void)setRelocalizing:(BOOL)arg1 ;
-(void)_sessionShouldAttemptRelocalization;
-(void)_sessionDidRemoveAnchors:(id)arg1 ;
-(void)_sessionDidAddAnchors:(id)arg1 ;
-(void)_sessionDidUpdateAnchors:(id)arg1 ;
-(void)_sessionCameraDidChangeTrackingState:(id)arg1 ;
-(void)_sessionDidUpdateFrame:(id)arg1 ;
-(BOOL)_shouldSkipAnchorCreationForData:(id)arg1 ;
-(void)_sessionDidOutputCollaborationData:(id)arg1 ;
-(void)setRunningSensors:(unsigned long long)arg1 ;
-(void)setAvailableSensors:(NSArray *)arg1 ;
-(id)_imageSensorForConfiguration:(id)arg1 existingSensor:(id)arg2 ;
-(void)_replaceOrAddSensor:(id)arg1 ;
-(ARLocationData *)latestLocationData;
-(void)setPausedSensors:(unsigned long long)arg1 ;
-(BOOL)isPrimaryImageData:(id)arg1 ;
-(void)_sessionDidOutputAudioData:(id)arg1 ;
-(void)setLatestDeviceOrientationData:(ARDeviceOrientationData *)arg1 ;
-(id)_currentFrameContext;
-(ARDeviceOrientationData *)latestDeviceOrientationData;
-(void)setLatestLocationData:(ARLocationData *)arg1 ;
-(void)_interruptSession;
-(void)_endInterruption;
-(void)_enforceThermalMitigationPolicyForDeviceCondition:(id)arg1 ;
-(BOOL)wantsPredictedAnchorTracking;
-(void)setWorldOrigin:(SCD_Struct_AR1)arg1 ;
-(void)forceEnvironmentTexturingToManualMode:(BOOL)arg1 ;
-(void)getCurrentWorldMapWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createReferenceObjectWithTransform:(SCD_Struct_AR1)arg1 center:(/*^block*/id)arg2 ;
-(SCD_Struct_AR1)originTransform;
-(void)setOriginTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)cyclopToCameraTransform;
-(void)setCyclopToCameraTransform:(SCD_Struct_AR1)arg1 ;
-(void)_changePowerUsage:(unsigned long long)arg1 ;
-(id)frameWithCameraImage;
-(void)updateWithCollaborationData:(id)arg1 ;
-(void)_setPrimaryTechnique:(id)arg1 ;
-(void)_updateTechniquesWithPerformanceLevel:(id)arg1 ;
-(void)setTracer:(ARQATracer *)arg1 ;
@end

