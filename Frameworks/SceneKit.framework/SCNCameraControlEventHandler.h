/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNEventHandler.h>

@class SCNNode, UIGestureRecognizer;

@interface SCNCameraControlEventHandler : SCNEventHandler {

	SCNNode* _freeViewCameraNode;
	CGPoint _initialPoint;
	C3DMatrix4x4 _initialMatrix;
	float _initialZoom;
	float _originalFovX;
	float _originalFovY;
	float _originalOrthoScale;
	float _zoomFactor;
	 _clickOrigin;
	int _lastGestureFingerCount;
	BOOL _isDraggingWithOneFinger;
	float _roll;
	C3DMatrix4x4 _initialMatrixForRoll;
	UIGestureRecognizer* _pressGesture;
	UIGestureRecognizer* _tapGesture;
	UIGestureRecognizer* _pinchGesture;
	UIGestureRecognizer* _panGesture;
	UIGestureRecognizer* _rotateGesture;
	unsigned long long _stickyAxis;
	C3DSphere _viewedObjectSphere;
	unsigned _isViewedObjectSphereComputed : 1;
	os_unfair_lock_s _stateLock;
	unsigned _enabled : 1;
	unsigned _hasAutomaticCameraTarget : 1;
	unsigned _automaticCameraTargetUpToDate : 1;
	unsigned _inertia : 1;
	unsigned _didEverFocusNode : 1;
	unsigned _allowsTranslation : 1;
	unsigned _pinchShouldMoveCamera : 1;
	unsigned _alternateMode : 1;
	unsigned _upDirIsSet : 1;
	unsigned _gimbalLockMode : 1;
	unsigned _inertiaRunning : 1;
	long long _browseMode;
	 _upDir;
	SCNVector3 _cameraTarget;
	SCNVector3 _autoCameraTarget;
	float _browseScaleFactor;
	double _friction;
	CGPoint _totalDragWithInertia;
	CGPoint _inertiaVelocity;
	double _lastSimulationTime;

}

@property (assign) BOOL gimbalLockMode; 
@property (assign) SCNVector3 gimbalLockVector; 
@property (assign) unsigned long long stickyAxis; 
@property (assign) BOOL enableInertia; 
@property (assign) double friction; 
@property (assign) BOOL allowsTranslation; 
@property (assign) BOOL automaticCameraTarget; 
@property (assign) SCNVector3 cameraTarget; 
+(2)frontVectorWithPointOfView:(id)arg1 ;
+(SCNMatrix4)matrixWithNoRoll:(SCNMatrix4)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)gestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(double)zoomFactor;
-(void)_handlePinch:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(void)_setInertiaRunning:(BOOL)arg1 ;
-(void)clearRoll;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)viewWillDrawAtTime:(double)arg1 ;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(BOOL)wantsRedraw;
-(void)setEnableFreeCamera:(BOOL)arg1 ;
-(id)freeCamera;
-(void)activateFreeCamera;
-(void)invalidateCameraTarget;
-(void)setAutomaticCameraTarget:(BOOL)arg1 ;
-(void)_switchToFreeViewCamera;
-(1)frontVector;
-(double)_browseScale;
-(void)setCameraTarget:(SCNVector3)arg1 ;
-(void)_resetFreeViewCamera;
-(void)_prepareFreeViewCamera;
-(C3DSphereRef)viewedObjectSphere;
-(void)updateBrowseScaleFactor;
-(BOOL)_freeCameraActivated;
-(void)_installFreeViewCameraIfNeeded;
-(void)computeAutomaticTargetPoint;
-(SCNVector3)cameraAutomaticTargetPoint;
-(SCNVector3)cameraTarget;
-(void)zoomBy:(float)arg1 animate:(BOOL)arg2 ;
-(float)_translationCoef;
-(void)focusNode:(id)arg1 ;
-(void)_resetBrowseScaleFactor;
-(void)_rotateWithDrag:(CGPoint)arg1 mode:(long long)arg2 stickyAxis:(unsigned long long)arg3 ;
-(BOOL)_isInertiaRunning;
-(void)_onInertiaTimer;
-(BOOL)_3DConnexionIsPressed;
-(BOOL)computeBoundingSphereOmittingFloorsForNode:(C3DNodeRef)arg1 sphere:(C3DSphereRef)arg2 ;
-(void)_handlePress:(id)arg1 ;
-(void)_handleRotation:(id)arg1 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)beginGesture:(id)arg1 ;
-(void)pinchWithGestureRecognizer:(id)arg1 ;
-(void)panWithGestureRecognizer:(id)arg1 ;
-(void)rotateWithGestureRecognizer:(id)arg1 ;
-(void)_startBrowsingIfNeeded:(CGPoint)arg1 ;
-(void)_beginTranslateAtLocation:(CGPoint)arg1 ;
-(void)endDraggingWithVelocity:(CGPoint)arg1 ;
-(void)_translateTo:(CGPoint)arg1 ;
-(BOOL)allowsTranslation;
-(void)setAllowsTranslation:(BOOL)arg1 ;
-(BOOL)enableInertia;
-(void)setEnableInertia:(BOOL)arg1 ;
-(BOOL)gimbalLockMode;
-(void)setGimbalLockMode:(BOOL)arg1 ;
-(SCNVector3)gimbalLockVector;
-(void)setGimbalLockVector:(SCNVector3)arg1 ;
-(BOOL)automaticCameraTarget;
-(unsigned long long)stickyAxis;
-(void)setStickyAxis:(unsigned long long)arg1 ;
-(void)rotateOf:(double)arg1 ;
-(void)zoomBy:(float)arg1 ;
-(void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)rotateWithVector:(long long)arg1 ;
@end

