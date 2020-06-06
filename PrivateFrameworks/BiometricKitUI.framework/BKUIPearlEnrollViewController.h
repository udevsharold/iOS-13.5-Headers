/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BKEnrollOperationDelegate.h>
#import <libobjc.A.dylib/BKEnrollPearlOperationDelegate.h>
#import <libobjc.A.dylib/BKUIPearlEnrollViewDelegate.h>
#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, BKUIPearlEnrollViewControllerDelegate;
@class BKUIPearlEnrollControllerPreloadedState, BKDevicePearl, BKEnrollPearlOperation, NSMutableArray, BKUIPearlEnrollView, UIScrollView, BKUIPearlInstructionView, NSArray, NSMutableDictionary, UIButton, UIView, NSLayoutConstraint, _UIBackdropView, UILabel, NSString, LAContext, NSObject, NSDate, NSTimer, SFClient, BKUIPearlAudioSession, AVHapticPlayer, BKIdentity, UILayoutGuide;

@interface BKUIPearlEnrollViewController : UIViewController <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, BKUIPearlEnrollViewDelegate, LAUIDelegate> {

	BKUIPearlEnrollControllerPreloadedState* _preloadedState;
	BKDevicePearl* _device;
	BKEnrollPearlOperation* _enrollOperation;
	NSMutableArray* _poseStatus;
	BOOL _bioCaptureComplete;
	double _bioKitCompletion;
	BKUIPearlEnrollView* _enrollView;
	UIScrollView* _scrollView;
	BKUIPearlInstructionView* _instructionView;
	BKUIPearlInstructionView* _animatingInstructionView;
	NSArray* _instructionViewConstraints;
	NSMutableDictionary* _customInstructionStrings;
	NSMutableDictionary* _customDetailStrings;
	UIButton* _nextStateButton;
	UIView* _nextStateButtonContainer;
	NSLayoutConstraint* _nextStateButtonContainerHorizontalPositionConstraint;
	UIButton* _escapeHatchButton;
	UIView* _buttonTray;
	_UIBackdropView* _darkTrayBackdrop;
	_UIBackdropView* _lightTrayBackdrop;
	NSLayoutConstraint* _buttonTrayToNextStateButtonContainerTopConstraint;
	UILabel* _debugLabel;
	NSString* _progressString;
	NSString* _statusString;
	LAContext* _authContext;
	int _state;
	int _previousState;
	BOOL _suspended;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_semaphore> _stateSema;
	NSDate* _stateStart;
	BOOL _animatingState;
	NSDate* _lastFaceFoundDate;
	int _substate;
	int _pendingSubstate;
	BOOL _substatePending;
	NSTimer* _substateDelayTimer;
	NSTimer* _statusPollTimer;
	SFClient* _sharingclient;
	BKUIPearlAudioSession* _audioSession;
	AVHapticPlayer* _hapticPlayer;
	BOOL _enrollOperationInProgress;
	BOOL _inBuddy;
	BOOL _inDemo;
	BOOL _isDisplayZoomEnabled;
	BOOL _darkBackground;
	id<BKUIPearlEnrollViewControllerDelegate> _delegate;
	NSString* _credential;
	BKIdentity* _identity;
	NSLayoutConstraint* _enrollViewTopConstraint;
	NSLayoutConstraint* _nextStateButtonContainerBottomConstraintTall;
	NSLayoutConstraint* _nextStateButtonContainerBottomConstraintShort;
	NSLayoutConstraint* _instructionViewTopConstraint;
	UILayoutGuide* _instructionBaselineLayoutGuide;

}

@property (nonatomic,readonly) int state;                                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * credential;                                                             //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) BKIdentity * identity;                                                           //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) BOOL darkBackground;                                                             //@synthesize darkBackground=_darkBackground - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * enrollViewTopConstraint;                                    //@synthesize enrollViewTopConstraint=_enrollViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nextStateButtonContainerBottomConstraintTall;               //@synthesize nextStateButtonContainerBottomConstraintTall=_nextStateButtonContainerBottomConstraintTall - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nextStateButtonContainerBottomConstraintShort;              //@synthesize nextStateButtonContainerBottomConstraintShort=_nextStateButtonContainerBottomConstraintShort - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * instructionViewTopConstraint;                               //@synthesize instructionViewTopConstraint=_instructionViewTopConstraint - In the implementation block
@property (nonatomic,retain) UILayoutGuide * instructionBaselineLayoutGuide;                                  //@synthesize instructionBaselineLayoutGuide=_instructionBaselineLayoutGuide - In the implementation block
@property (assign,nonatomic,__weak) id<BKUIPearlEnrollViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inBuddy;                                                                    //@synthesize inBuddy=_inBuddy - In the implementation block
@property (assign,nonatomic) BOOL inDemo;                                                                     //@synthesize inDemo=_inDemo - In the implementation block
@property (assign,nonatomic) BOOL isDisplayZoomEnabled;                                                       //@synthesize isDisplayZoomEnabled=_isDisplayZoomEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadWithCompletion:(/*^block*/id)arg1 ;
+(id)_entryAnimationImages;
+(BOOL)_shouldShowEscapeHatchForState:(int)arg1 inBuddy:(BOOL)arg2 inDemo:(BOOL)arg3 ;
+(BOOL)_shouldShowAccessibilityOptionForState:(int)arg1 poseStatus:(id)arg2 ;
-(void)dealloc;
-(id<BKUIPearlEnrollViewControllerDelegate>)delegate;
-(void)setDelegate:(id<BKUIPearlEnrollViewControllerDelegate>)arg1 ;
-(int)state;
-(BKIdentity *)identity;
-(void)setStatus:(id)arg1 ;
-(void)setIdentity:(BKIdentity *)arg1 ;
-(NSString *)credential;
-(void)setCredential:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)_setSuspended:(BOOL)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)setState:(int)arg1 animated:(BOOL)arg2 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enrollOperation:(id)arg1 finishedWithIdentity:(id)arg2 ;
-(void)enrollOperation:(id)arg1 percentCompleted:(long long)arg2 ;
-(void)enrollOperation:(id)arg1 failedWithReason:(long long)arg2 ;
-(void)operation:(id)arg1 faceDetectStateChanged:(id)arg2 ;
-(void)enrollOperation:(id)arg1 progressedWithInfo:(id)arg2 ;
-(BOOL)inDemo;
-(id)initWithPreloadedState:(id)arg1 ;
-(void)setInDemo:(BOOL)arg1 ;
-(void)primeWithPasscode:(id)arg1 ;
-(void)setInBuddy:(BOOL)arg1 ;
-(void)setSplashImageView:(id)arg1 ;
-(void)restartEnroll;
-(void)_removeIdentity;
-(void)endEnrollFlowWithError:(id)arg1 ;
-(void)_cleanupEnroll;
-(void)_cleanupSound;
-(void)_cleanUpHaptics;
-(BOOL)inBuddy;
-(void)_endEnrollFlowWithError:(id)arg1 ;
-(void)_setupSound;
-(void)_setUpHaptics;
-(void)_checkForCompletion;
-(void)forceDarkBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEnrollViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInstructionBaselineLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)instructionBaselineLayoutGuide;
-(BOOL)isDisplayZoomEnabled;
-(NSLayoutConstraint *)enrollViewTopConstraint;
-(void)toggleDebugAndSave;
-(void)escapeHatchButtonPressed;
-(void)nextStateButtonPressed:(id)arg1 ;
-(void)_configureInstructionView:(id)arg1 forState:(int)arg2 substate:(int)arg3 ;
-(id)_constraintsForInstructionView:(id)arg1 state:(int)arg2 position:(long long)arg3 ;
-(void)toggleDebug;
-(void)_updateLeftBarButtonItem;
-(void)returnToEnroll;
-(void)cancelEnroll;
-(void)setInstructionViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_nextStateButtonTitleForState:(int)arg1 ;
-(id)_escapeHatchTitleForState:(int)arg1 ;
-(void)prepareForAnimationToState:(int)arg1 fromState:(int)arg2 ;
-(void)_triggerSoundHapticForTransitionToState:(int)arg1 fromState:(int)arg2 ;
-(void)animateInstruction;
-(void)finalizeInstructionAnimation;
-(void)animateToSuccessCompletionLayout:(long long)arg1 ;
-(void)_triggerSoundHapticForTransitionToSubstate:(int)arg1 fromSubstate:(int)arg2 ;
-(void)_setSubstate:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setState:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setState:(int)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)startEnroll;
-(void)_updateDebugLabel;
-(void)fadeCurrentSound:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)playHaptic:(unsigned long long)arg1 withDelay:(double)arg2 gain:(double)arg3 ;
-(void)_cleanupEnroll:(BOOL)arg1 ;
-(id)_getAuthContextForCredentialError:(id*)arg1 ;
-(id)getEnrollview;
-(void)_enableEnrollUI;
-(id)_instructionTextForState:(int)arg1 substate:(int)arg2 ;
-(id)_detailTextForState:(int)arg1 substate:(int)arg2 ;
-(id)_locStateNameForState:(int)arg1 ;
-(void)setSubstate:(int)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(BOOL)_validateEnrolledPoses:(id)arg1 ;
-(void)_cancelEnroll;
-(void)cancelEnrollForRotationIfNeeded:(long long)arg1 ;
-(NSLayoutConstraint *)nextStateButtonContainerBottomConstraintTall;
-(NSLayoutConstraint *)nextStateButtonContainerBottomConstraintShort;
-(NSLayoutConstraint *)instructionViewTopConstraint;
-(void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3 ;
-(void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3 ;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg1 ;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg1 ;
-(void)setUseNextButton:(BOOL)arg1 ;
-(BOOL)useNextButton;
-(int)_firstVisibleState;
-(void)setCustomInstructionString:(id)arg1 forState:(int)arg2 ;
-(void)setCustomDetailString:(id)arg1 forState:(int)arg2 ;
-(void)setEnrollMovieViewHidden:(BOOL)arg1 ;
-(void)animateWithOrientation:(long long)arg1 ;
-(void)setIsDisplayZoomEnabled:(BOOL)arg1 ;
-(BOOL)darkBackground;
-(void)setDarkBackground:(BOOL)arg1 ;
-(void)setNextStateButtonContainerBottomConstraintTall:(NSLayoutConstraint *)arg1 ;
-(void)setNextStateButtonContainerBottomConstraintShort:(NSLayoutConstraint *)arg1 ;
@end

