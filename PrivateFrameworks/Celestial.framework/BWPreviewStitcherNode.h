/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWPreviewStitcherDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSData, NSObject, BWPixelBufferPool, FigCaptureMachPortSendRight, NSString, BWRamp, CIContext, BWSpringSimulation, NSMutableDictionary;

@interface BWPreviewStitcherNode : BWNode {

	SCD_Struct_BW19 _outputDimensions;
	double _primaryCaptureRectYInset;
	int _primaryCaptureRectPixelInset;
	double _primaryCaptureRectCenterX;
	int _primaryCaptureRectCenterXPixelOffset;
	int _primaryCaptureRectCenterXPixelOffsetFudge;
	BOOL _previewsWideBeforeSlaveStreamStarts;
	NSData* _superWideCameraViewMatrix;
	NSData* _telephotoCameraViewMatrix;
	CGPoint _superWideOpticalCenterOffset;
	CGPoint _wideOpticalCenterOffset;
	CGPoint _teleOpticalCenterOffset;
	float _superWidePixelsPerMicron;
	float _widePixelsPerMicron;
	float _telePixelsPerMicron;
	float _superWideBaseZoomFactor;
	float _wideBaseZoomFactor;
	float _teleBaseZoomFactor;
	float _superWideCorrectedBaseZoomFactor;
	float _wideBaseZoomFactorOverride;
	BOOL _wideBaseZoomFactorDynamicOverrideEnabled;
	float _wideBaseZoomFactorDynamicOverride;
	float _wideBaseZoomFactorDynamicOverrideScaled;
	float _wideBaseZoomFactorOverrideMacro;
	float _widePinholeFocalLengthInfinity;
	float _widePinholeFocalLengthMacro;
	float _dynamicWideBaseZoomFactorSmoothingFactor;
	float _teleBaseZoomFactorOverride;
	SCD_Struct_BW19 _sensorBinningFactor;
	unsigned _bravoShiftCorrectionFlags;
	SCD_Struct_BW107 _superWideToWideShiftState;
	SCD_Struct_BW107 _wideToTeleShiftState;
	float _shiftSmoothingFactor;
	BOOL _applyShift;
	CGPoint _superWideToWideBravoShift;
	CGPoint _wideToTeleBravoShift;
	OpaqueVTImageRotationSessionRef _rotationSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	id<BWPreviewStitcherDelegate> _delegate;
	BOOL _stoppingForModeSwitch;
	os_unfair_lock_s _configurationLock;
	BOOL _deviceIsStationary;
	BOOL _pendingRegistrationAfterDeviceBecomesStationary;
	BOOL _registrationEnabled;
	int _lastRegisteredFrameCaptureID;
	BOOL _lastRegistrationEnabled;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	os_unfair_lock_s _shiftCorrectionsUpdateLock;
	BWPreviewStitcherShiftCorrection _wideToTeleShiftCorrections[3];
	BWPreviewStitcherShiftCorrection _superWideToWideShiftCorrections[3];
	BWPixelBufferPool* _registrationPool;
	OpaqueVTImageRotationSessionRef _registrationRotationSession;
	int _registrationFrameSkipCount;
	int _registrationUpdateRampFrameCount;
	BOOL _registerFirstFrame;
	double _primaryCameraAspectRatio;
	float _lastPrimaryCameraAspectRatio;
	FigCaptureMachPortSendRight* _fencePortSendRight;
	long long _fencePortGenerationCount;
	BOOL _displaysWidestCameraOnly;
	BOOL _displaysPrimaryCameraOnly;
	BOOL _drawWiderCameraOnly;
	BOOL _currentZoomRequiresWiderCamera;
	BOOL _lastZoomingOrSwitchingCameras;
	float _rampZoomFactorOfInterest;
	float _rampStartZoomFactor;
	NSString* _lastRecommendedMasterPortType;
	NSString* _lastNarrowerPortType;
	BOOL _lastNarrowerCameraIsTele;
	BWRamp* _teleOpacityRamp;
	BWPixelBufferPool* _teleOpacityPool;
	SCD_Struct_BW19 _teleOpacityPoolDimensions;
	CIContext* _teleOpacityCIContext;
	int _screenScale;
	BOOL _frameRateBasedRampsEnabled;
	NSObject*<OS_dispatch_queue> _ciPreheatingQueue;
	NSObject*<OS_dispatch_group> _ciPreheatingGroup;
	BOOL _havePreheatedCI;
	SCD_Struct_BW2 _firstFramePTS;
	BOOL _edgeFeatheringEnabled;
	BOOL _showFeatherGradient;
	float _edgeFeatheringAspectCompensation;
	float _zoomInFeatheringInnerRadiusStart;
	float _zoomInFeatheringInnerRadiusEnd;
	float _zoomInFeatheringOuterRadiusStart;
	float _zoomInFeatheringOuterRadiusEnd;
	float _zoomOutFeatheringInnerRadiusStart;
	float _zoomOutFeatheringInnerRadiusEnd;
	float _zoomOutFeatheringOuterRadiusStart;
	float _zoomOutFeatheringOuterRadiusEnd;
	BOOL _featherEdgesForOpacityRamp;
	opaqueCMSampleBufferRef _lastSampleBuffer;
	SCD_Struct_BW2 _lastRenderedPTS;
	BOOL _multiCameraStitchingEnabled;
	BOOL _aspectRatioChanging;
	long long _lastRenderTime;
	float _additionalZoomFactor;
	float _additionalZoomFactorSpringStartFactor;
	SCD_Struct_BW2 _additionalZoomFactorSpringStartPTS;
	BWSpringSimulation* _additionalZoomFactorSpring;
	NSMutableDictionary* _blackFilledBorderRectsBySurfaceID;
	int _overCaptureStatus;
	BWSmartCameraScene _wideFocusDistanceFarEnoughForStitching;
	BOOL _hideSuperWideOverCaptureWhenTooClose;
	BOOL _superWideOccludedByWide;
	BOOL _superWideDrawingSuspendedUntilFocusImproves;
	BOOL _hideSuperWideStitchingWhenTooClose;
	BOOL _hidePartialOverCapture;
	BOOL _deviceTooHotDimmingEnabled;
	int _wideFallbackMode;
	BWSmartCameraScene _wideFocusDistanceFarEnoughToUseTele;
	BOOL _wideFocusingOneShot;
	BOOL _teleFocusingOneShot;
	BWRamp* _wideFallbackShiftRamp;
	CGPoint _wideFallbackRecenteringShiftOffset;
	BOOL _wantWideFallbackDueToTeleAEAF;
	BOOL _wideFallbackShiftRampTargetValueIsWide;

}

@property (assign,nonatomic) id<BWPreviewStitcherDelegate> delegate; 
@property (assign) BOOL displaysWidestCameraOnly; 
@property (assign,nonatomic) BOOL stoppingForModeSwitch;                          //@synthesize stoppingForModeSwitch=_stoppingForModeSwitch - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<BWPreviewStitcherDelegate>)delegate;
-(void)setDelegate:(id<BWPreviewStitcherDelegate>)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setOutputDimensions:(SCD_Struct_BW19)arg1 ;
-(void)setStoppingForModeSwitch:(BOOL)arg1 ;
-(SCD_Struct_BW19)outputDimensions;
-(void)setDisplaysWidestCameraOnly:(BOOL)arg1 ;
-(id)initWithCameraInfoByPortType:(id)arg1 sensorBinningFactor:(SCD_Struct_BW19)arg2 ;
-(void)_restitchAndEmitLastInputForAspectAndCenterChange;
-(BOOL)_displaysPrimaryCameraOnly;
-(float)_wideBaseZoomFactorWithOverrideLocked;
-(float)wideFocusDistance;
-(id)_primaryCameraPortType;
-(float)_wideFallbackRecenteringStrength;
-(void)_preheatCIRenderingAsync;
-(BOOL)_updateZoomStatusFromWideSampleBuffer:(opaqueCMSampleBufferRef)arg1 teleSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(CGPoint)_computeBravoWideToTeleShiftFromWideSampleBuffer:(opaqueCMSampleBufferRef)arg1 teleSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BOOL)_currentlyZoomingOrSwitchingCameras;
-(void)_updateShiftCorrectionsAsyncFromComputedShift:(CGPoint)arg1 byRegisteringWide:(opaqueCMSampleBufferRef)arg2 tele:(opaqueCMSampleBufferRef)arg3 centerBias:(BOOL)arg4 ;
-(void)_updateAndGetWideRegionShifts:(CGPoint*)arg1 teleShift:(CGPoint*)arg2 wideIsSuperWide:(BOOL)arg3 forComputedShift:(CGPoint)arg4 registrationEnabled:(BOOL)arg5 currentFrameRate:(float)arg6 ;
-(void)_updateOverCaptureStatusWithWiderSampleBuffer:(opaqueCMSampleBufferRef)arg1 narrowerSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(opaqueCMSampleBufferRef)_newStitchedSampleBufferFromWide:(opaqueCMSampleBufferRef)arg1 tele:(opaqueCMSampleBufferRef)arg2 wideRegionsShifts:(CGPoint*)arg3 teleShift:(CGPoint)arg4 primaryCaptureRectOut:(CGRect*)arg5 primaryCaptureRectBeforeCroppingOut:(CGRect*)arg6 ;
-(void)_setOverCaptureStatus:(int)arg1 ;
-(void)_waitForCIPreheatingToFinish;
-(float)_wideBaseZoomFactorWithOverride;
-(BOOL)_currentlyRampingZoom;
-(BOOL)_currentlySwitchingCameras;
-(BOOL)displaysWidestCameraOnly;
-(float)_teleBaseZoomFactorWithOverride;
-(BOOL)_haveSuperWideCamera;
-(void)_getInputRect:(CGRect*)arg1 outputRect:(CGRect*)arg2 inputShiftAppliedInOutputRect:(CGPoint*)arg3 toTransferPixelBuffer:(CVBufferRef)arg4 rect:(CGRect)arg5 intoPixelBuffer:(CVBufferRef)arg6 rect:(CGRect)arg7 withInputShift:(CGPoint)arg8 shiftOutsideBoundingRectAllowed:(BOOL)arg9 scale:(float)arg10 ;
-(CGRect)_transferPixelBuffer:(CVBufferRef)arg1 rect:(CGRect)arg2 intoPixelBuffer:(CVBufferRef)arg3 rect:(CGRect)arg4 withInputShift:(CGPoint)arg5 scale:(float)arg6 inputSourceRectOut:(CGRect*)arg7 ;
-(id)_teleOpacityPool;
-(void)_renderOpacityRampToPixelBuffer:(CVBufferRef)arg1 bounds:(CGRect)arg2 withWidePixelBuffer:(CVBufferRef)arg3 telePixelBuffer:(CVBufferRef)arg4 zoomingIn:(BOOL)arg5 progress:(float)arg6 ;
-(float)_scaleFactorAppliedForPixelBuffer:(CVBufferRef)arg1 usedSourceRect:(CGRect)arg2 primaryCaptureRectAspectRatio:(double)arg3 metadata:(id)arg4 ;
-(void)_callDelegateWithAppliedWiderShift:(CGPoint)arg1 narrowerShift:(CGPoint)arg2 widerScaleFactor:(float)arg3 narrowerScaleFactor:(float)arg4 widerPixelBuffer:(CVBufferRef)arg5 narrowerPixelBuffer:(CVBufferRef)arg6 widerPortType:(id)arg7 narrowerPortType:(id)arg8 ;
-(BOOL)_haveTeleCamera;
-(BOOL)_currentlyRunningShortZoomRampOrNotRampingZoom;
-(id)overCaptureStatusString;
-(int)_cameraDisplayTransitionFrameCountForCameraFallbackChange:(BOOL)arg1 currentFrameRate:(float)arg2 ;
-(int)_wideFallbackShiftRampFrameCount;
-(int)_scale30FPSFrameCount:(int)arg1 toFrameRate:(float)arg2 ;
-(int)_zoomOutOpacityRampFrameCount;
-(int)_zoomInOpacityRampFrameCount;
-(int)_wideFallbackOpacityRampFrameCount;
-(BOOL)_haveSuperBravo;
-(CGPoint)_shiftCorrectionForComputedShift:(CGPoint)arg1 forLeftStrip:(BOOL)arg2 byRegisteringWide:(opaqueCMSampleBufferRef)arg3 tele:(opaqueCMSampleBufferRef)arg4 centerBias:(BOOL)arg5 err:(int*)arg6 ;
-(id)initWithStitchingDisabled;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 center:(CGPoint)arg2 fencePortSendRight:(id)arg3 ;
-(void)rampToAdditionalZoomFactor:(double)arg1 ;
-(void)setPrimaryCameraAspectRatio:(double)arg1 ;
-(double)primaryCameraAspectRatio;
-(void)setPrimaryCaptureRectYInset:(double)arg1 ;
-(double)primaryCaptureRectYInset;
-(void)setPrimaryCaptureRectCenterX:(double)arg1 ;
-(double)primaryCaptureRectCenterX;
-(void)setPreviewsWideBeforeSlaveStreamStarts:(BOOL)arg1 ;
-(BOOL)previewsWideBeforeSlaveStreamStarts;
-(float)wideBaseZoomFactor;
-(id)focusingDescription;
-(id)primaryCameraShortDisplayName;
-(BOOL)tooCloseFor1xStitching;
-(BOOL)centerRegistrationValid;
-(id)wideFallbackDescription;
-(BOOL)stoppingForModeSwitch;
@end

