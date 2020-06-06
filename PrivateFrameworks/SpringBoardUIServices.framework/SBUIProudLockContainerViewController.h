/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIProudLockContainerViewControllerOrientationProvider.h>

@protocol SBUIProudLockContainerViewControllerOrientationProvider, SBUIProudLockContainerViewControllerDelegate, SBUIProudLockContainerViewControllerLockStatusProvider;
@class SBUIProudLockIconView, _UILegibilitySettings, UIView;

@interface SBUIProudLockContainerViewController : UIViewController <SBUIProudLockContainerViewControllerOrientationProvider> {

	long long _desiredIconState;
	unsigned long long _desiredCoachingCondition;
	int _unlockSource;
	SBUIProudLockIconView* _testProudLockIconView;
	id<SBUIProudLockContainerViewControllerOrientationProvider> _orientationProvider;
	BOOL _authenticated;
	BOOL _screenOn;
	BOOL _suppressScanningState;
	BOOL _suppressNotLooking;
	BOOL _guidanceTextVisible;
	BOOL _canShowScanningState;
	BOOL _shouldShowScanningState;
	BOOL _canShowCoachingCondition;
	BOOL _canLeaveCoachingCondition;
	BOOL _hasSeenFaceSinceScreenOn;
	BOOL _canShowCameraCovered;
	id<SBUIProudLockContainerViewControllerDelegate> _delegate;
	_UILegibilitySettings* _legibilitySettings;
	id<SBUIProudLockContainerViewControllerLockStatusProvider> _authenticationInformationProvider;
	/*^block*/id _unlockCompletion;
	unsigned long long _forceCount;
	SCD_Struct_SB2 _configuration;

}

@property (assign,nonatomic,__weak) id<SBUIProudLockContainerViewControllerLockStatusProvider> authenticationInformationProvider;              //@synthesize authenticationInformationProvider=_authenticationInformationProvider - In the implementation block
@property (assign,nonatomic) BOOL canShowScanningState;                                                                                        //@synthesize canShowScanningState=_canShowScanningState - In the implementation block
@property (assign,nonatomic) BOOL shouldShowScanningState;                                                                                     //@synthesize shouldShowScanningState=_shouldShowScanningState - In the implementation block
@property (assign,nonatomic) BOOL canShowCoachingCondition;                                                                                    //@synthesize canShowCoachingCondition=_canShowCoachingCondition - In the implementation block
@property (assign,nonatomic) BOOL canLeaveCoachingCondition;                                                                                   //@synthesize canLeaveCoachingCondition=_canLeaveCoachingCondition - In the implementation block
@property (assign,nonatomic) BOOL hasSeenFaceSinceScreenOn;                                                                                    //@synthesize hasSeenFaceSinceScreenOn=_hasSeenFaceSinceScreenOn - In the implementation block
@property (assign,nonatomic) BOOL canShowCameraCovered;                                                                                        //@synthesize canShowCameraCovered=_canShowCameraCovered - In the implementation block
@property (nonatomic,copy) id unlockCompletion;                                                                                                //@synthesize unlockCompletion=_unlockCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long forceCount;                                                                                    //@synthesize forceCount=_forceCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB2 configuration;                                                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIProudLockContainerViewControllerDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                       //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                        //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isScreenOn,nonatomic) BOOL screenOn;                                                                                  //@synthesize screenOn=_screenOn - In the implementation block
@property (assign,nonatomic) BOOL suppressScanningState;                                                                                       //@synthesize suppressScanningState=_suppressScanningState - In the implementation block
@property (assign,nonatomic) BOOL suppressNotLooking;                                                                                          //@synthesize suppressNotLooking=_suppressNotLooking - In the implementation block
@property (nonatomic,readonly) UIView * cameraCoveredView; 
@property (assign,getter=isGuidanceTextVisible,nonatomic) BOOL guidanceTextVisible;                                                            //@synthesize guidanceTextVisible=_guidanceTextVisible - In the implementation block
@property (nonatomic,readonly) BOOL isPortrait; 
-(id<SBUIProudLockContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBUIProudLockContainerViewControllerDelegate>)arg1 ;
-(void)reset;
-(BOOL)isPortrait;
-(void)setConfiguration:(SCD_Struct_SB2)arg1 ;
-(SCD_Struct_SB2)configuration;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setOrientationProvider:(id)arg1 ;
-(id)initWithAuthenticationInformationProvider:(id)arg1 ;
-(void)setSuppressNotLooking:(BOOL)arg1 ;
-(void)setSuppressScanningState:(BOOL)arg1 ;
-(void)updateLockForBiometricMatchFailure;
-(void)setAuthenticated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)isScreenOn;
-(void)setScreenOn:(BOOL)arg1 ;
-(UIView *)cameraCoveredView;
-(void)setAuthenticationInformationProvider:(id<SBUIProudLockContainerViewControllerLockStatusProvider>)arg1 ;
-(void)_setCounterTransformForOrientation:(long long)arg1 ;
-(void)_setLocalTransformForOrientation:(long long)arg1 ;
-(void)_updateIconViewStateAnimated:(BOOL)arg1 ;
-(void)_startScanningStateTimer;
-(id)_proudLockIconView;
-(unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1 orientation:(long long)arg2 ;
-(void)_setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setScreenOn:(BOOL)arg1 fromUnlockSource:(int)arg2 ;
-(BOOL)_isBiometricLockedOut;
-(void)_allowCameraCoveredImmediately:(BOOL)arg1 ;
-(void)_allowCoachingConditionImmediately:(BOOL)arg1 ;
-(unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1 ;
-(void)_setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setShouldShowScanningState:(BOOL)arg1 ;
-(void)_allowScanningState;
-(void)setCanShowScanningState:(BOOL)arg1 ;
-(void)_clearCoachingCondition;
-(void)_updateIconViewStateAnimated:(BOOL)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCanLeaveCoachingCondition:(BOOL)arg1 ;
-(void)setCanShowCoachingCondition:(BOOL)arg1 ;
-(void)setHasSeenFaceSinceScreenOn:(BOOL)arg1 ;
-(void)setCanShowCameraCovered:(BOOL)arg1 ;
-(void)_performForcedUpdate:(/*^block*/id)arg1 ;
-(BOOL)suppressNotLooking;
-(void)_setIconState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setIconState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 force:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(long long)_actualIconState;
-(void)_handleBiometricEvent:(unsigned long long)arg1 ;
-(void)_updateLockForMatchStarted;
-(void)_updateLockForFaceInView;
-(id<SBUIProudLockContainerViewControllerLockStatusProvider>)authenticationInformationProvider;
-(void)_dontCallThis_updateCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_dontCallThis_showLockIfNeededAnimated:(BOOL)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_iconViewStateForCoachingCondition:(unsigned long long)arg1 ;
-(void)_setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 skipScanningState:(BOOL)arg3 force:(BOOL)arg4 ;
-(BOOL)_canTransitionToState:(long long)arg1 ;
-(void)setUnlockCompletion:(id)arg1 ;
-(void)_allowLeavingCoachingCondition;
-(BOOL)isGuidanceTextVisible;
-(void)_updateScanningState;
-(void)_allowCoachingCondition;
-(BOOL)canShowCoachingCondition;
-(void)_reallyAllowCoachingConditionAnimated:(BOOL)arg1 ;
-(void)_reallyAllowCameraCovered;
-(BOOL)canShowCameraCovered;
-(void)_reallyAllowLeavingCoachingCondition;
-(BOOL)_isShowingCoachingCondition:(unsigned long long)arg1 ;
-(id)orientationProvider;
-(void)updateForScreenWillTurnOff;
-(id)testProudLockIconView;
-(void)setTestProudLockIconView:(id)arg1 ;
-(BOOL)suppressScanningState;
-(void)setGuidanceTextVisible:(BOOL)arg1 ;
-(BOOL)canShowScanningState;
-(BOOL)shouldShowScanningState;
-(BOOL)canLeaveCoachingCondition;
-(BOOL)hasSeenFaceSinceScreenOn;
-(id)unlockCompletion;
-(unsigned long long)forceCount;
-(void)setForceCount:(unsigned long long)arg1 ;
@end

