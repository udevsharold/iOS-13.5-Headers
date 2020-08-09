/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPeripheralHostView, UIKeyboardAutomatic, UIPanGestureRecognizer, CADisplayLink, NSDate, NSMutableArray, UIInputViewSet, UIResponder, NSMutableSet, UIInputViewPostPinningReloadState, NSMutableDictionary, UIKeyboardRotationState, UITextInputMode, UIKBRenderConfig, UIView, UIKeyboard, UIPeripheralHostState, NSString;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate> {

	UIPeripheralHostView* _hostView;
	UIKeyboardAutomatic* _automaticKeyboard;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _automaticKeyboardAnimatingIn;
	BOOL _automaticKeyboardAnimatingOut;
	int _ignoringReloadInputViews;
	int _ignoredReloads;
	BOOL _suppresingNotifications;
	BOOL _useHideNotificationsWhenNotVisible;
	BOOL _reloadInputViewsForcedIsAllowed;
	int _nextAutomaticOrderInDirection;
	long long _targetRotatedOrientation;
	BOOL _isTranslating;
	BOOL _isSplitting;
	BOOL _isUndocked;
	BOOL _splitLockState;
	UIPanGestureRecognizer* _translateRecognizer;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	CGAffineTransform _targetTransform;
	CGAffineTransform _initialTransform;
	CGPoint _velocity;
	NSDate* __transitionStartTime;
	int _shadowStyle;
	BOOL _wasBackgroundSplit;
	CGRect _previousShadowFrameLeft;
	CGRect _previousShadowFrameRight;
	/*^block*/id _bounceCompletionBlock;
	double m_keyboardAttachedViewHeight;
	CGRect _lastKnownIVFrame;
	CGRect _lastKnownIAVFrame;
	NSMutableArray* _animationStyleStack;
	BOOL _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	double _lastAutomaticKeyboardDuration;
	long long _disableAnimationsCount;
	NSMutableArray* _targetStateStack;
	UIInputViewSet* _inputViewSet;
	UIResponder* _responder;
	NSMutableSet* _pinningResponders;
	BOOL _ignoresPinning;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	BOOL _animationFencingEnabled;
	BOOL _interfaceAutorotationDisabled;
	UIResponder* _selfHostingTrigger;
	NSMutableDictionary* _preservedViewSets;
	NSMutableDictionary* _persistentInputAccessoryResponders;
	NSMutableArray* _persistentInputAccessoryResponderOrder;
	BOOL _didFadeInputViews;
	BOOL _blockedReloadInputViewsForDictation;
	BOOL _allowNilResponderReload;
	BOOL _animateCornerRefresh;
	BOOL _showCorners;
	NSMutableArray* _extraViews;
	double _ambiguousControlCenterActivationMargin;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	int _hostedAnimationToggleCount;
	/*^block*/id _deferredTransitionTask;
	double _lastKeyplaneResize;
	BOOL _preservingInputViews;
	int _currentState;
	UIKeyboardRotationState* _rotationState;
	UIInputViewSet* _transientInputViewSet;
	UITextInputMode* _documentInputMode;
	UIKBRenderConfig* _restorableRenderConfig;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSDate * _transitionStartTime; 
@property (assign,nonatomic) BOOL automaticAppearanceInternalEnabled; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) BOOL ignoringReloadInputViews; 
@property (assign,nonatomic) double ambiguousControlCenterActivationMargin; 
@property (nonatomic,retain,readonly) UIResponder * responder; 
@property (assign,nonatomic) BOOL ignoresPinning; 
@property (assign,nonatomic) BOOL animationFencingEnabled; 
@property (nonatomic,readonly) UIKeyboard * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * loadAwareInputViews; 
@property (nonatomic,readonly) BOOL keyClicksEnabled; 
@property (nonatomic,retain) UIKeyboardRotationState * rotationState;                                         //@synthesize rotationState=_rotationState - In the implementation block
@property (nonatomic,retain) UIPeripheralHostState * targetState; 
@property (nonatomic,retain) UIResponder * responder;                                                         //@synthesize responder=_responder - In the implementation block
@property (nonatomic,retain) UIInputViewPostPinningReloadState * postPinningReloadState;                      //@synthesize postPinningReloadState=_postPinningReloadState - In the implementation block
@property (assign,nonatomic) BOOL animationFencingEnabled;                                                    //@synthesize animationFencingEnabled=_animationFencingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL animationsEnabled; 
@property (assign,nonatomic) double lastKeyplaneResize;                                                       //@synthesize lastKeyplaneResize=_lastKeyplaneResize - In the implementation block
@property (nonatomic,retain) UIInputViewSet * _inputViews;                                                    //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSet * _transientInputViews;                                           //@synthesize transientInputViewSet=_transientInputViewSet - In the implementation block
@property (nonatomic,retain) UIResponder * selfHostingTrigger;                                                //@synthesize selfHostingTrigger=_selfHostingTrigger - In the implementation block
@property (nonatomic,readonly) UIKeyboardAutomatic * automaticKeyboard; 
@property (assign,nonatomic) int currentState;                                                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * restorableRenderConfig;                                       //@synthesize restorableRenderConfig=_restorableRenderConfig - In the implementation block
@property (assign,nonatomic) BOOL preservingInputViews;                                                       //@synthesize preservingInputViews=_preservingInputViews - In the implementation block
@property (nonatomic,readonly) BOOL automaticAppearanceReallyEnabled; 
@property (assign,nonatomic) BOOL automaticAppearanceEnabled;                                                 //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (nonatomic,retain) UITextInputMode * documentInputMode;                                             //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(id)allVisiblePeripheralFrames;
+(void)adjustFloatingPersistentOffsetForKeyboardSize:(CGSize)arg1 ;
+(id)passthroughViews;
+(CGRect)visibleInputViewFrame;
+(id)endPlacementForInputViewSet:(id)arg1 ;
+(void)prepareToHideFloatingIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
+(void)prepareToShowFloatingIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
+(void)_releaseSharedInstance;
+(void)setFloating:(BOOL)arg1 onCompletion:(/*^block*/id)arg2 ;
+(Class)hostViewClass;
+(BOOL)inputViewSetContainsView:(id)arg1 ;
+(CGPoint)defaultUndockedOffset;
+(CGRect)screenBoundsInAppOrientation;
+(UIEdgeInsets)floatingChromeBuffer;
+(CGRect)visiblePeripheralFrame;
+(BOOL)pointIsWithinKeyboardContent:(CGPoint)arg1 ;
+(void)deactivateFloatingWithCompletion:(/*^block*/id)arg1 ;
+(double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)retain;
-(int)currentState;
-(UIView *)view;
-(id)contentView;
-(void)layoutIfNeeded;
-(id)containerWindow;
-(void)removePreservedInputViewSetForInputView:(id)arg1 ;
-(void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(UIKBRenderConfig *)restorableRenderConfig;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(UIResponder *)responder;
-(id)_inheritedRenderConfig;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(BOOL)isRotating;
-(UIInputViewSet *)inputViews;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(BOOL)_isTransitioning;
-(id)nextAnimationStyle;
-(void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2 ;
-(void)_beginDisablingAnimations;
-(void)_endDisablingAnimations;
-(void)_preserveInputViewsWithId:(id)arg1 ;
-(BOOL)automaticAppearanceEnabled;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg1 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2 ;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg1 ;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg1 ;
-(void)_beginIgnoringReloadInputViews;
-(void)setAutomaticAppearanceInternalEnabled:(BOOL)arg1 ;
-(int)_endIgnoringReloadInputViews;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)prepareForAlongsideTransitionWithContext:(id)arg1 ;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(id)containerRootController;
-(id)viewForTransitionScreenSnapshot;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(BOOL)isSplitting;
-(void)setCurrentState:(int)arg1 ;
-(void)inputModeChangedForRenderConfig:(id)arg1 ;
-(id)_renderConfigForResponder:(id)arg1 ;
-(void)updateRenderConfigForCurrentResponder;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(BOOL)isOnScreen;
-(BOOL)isUndocked;
-(id)nextAnimationStyle:(BOOL)arg1 ;
-(BOOL)automaticAppearanceReallyEnabled;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(void)updateRenderConfigForResponder:(id)arg1 ;
-(void)disableInterfaceAutorotation:(BOOL)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2 ;
-(BOOL)pinningPreventsInputViews:(id)arg1 ;
-(BOOL)hasDictationKeyboard;
-(BOOL)_isIgnoringReloadInputViews;
-(void)setInputViews:(UIInputViewSet *)arg1 ;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(BOOL)animationsEnabled;
-(void)setInputViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)performMultipleOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(BOOL)maximizeWithAnimation:(BOOL)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)createAutomaticKeyboardIfNeeded;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(BOOL)arg3 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3 ;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)performWithAllowingNilResponderReload:(/*^block*/id)arg1 ;
-(BOOL)automaticAppearanceInternalEnabled;
-(void)_updateContainerWindowLevel;
-(NSDate *)_transitionStartTime;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1 ;
-(void)forceReloadInputViews;
-(BOOL)minimize;
-(BOOL)maximize;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg1 ;
-(void)_clearPinningResponders;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)_hasPostPinningReloadState;
-(BOOL)_isTrackingResponder:(id)arg1 ;
-(void)setAutomaticAppearanceEnabled:(BOOL)arg1 ;
-(BOOL)ignoresPinning;
-(void)setIgnoresPinning:(BOOL)arg1 ;
-(void)syncToExistingAnimations;
-(void)setResponder:(UIResponder *)arg1 ;
-(BOOL)keyClicksEnabled;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(CGRect)_inputViewRectToAvoid;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(id)lastUsedInputModeForCurrentContext;
-(UITextInputMode *)documentInputMode;
-(void)setKeyboardOnScreenNotifyKey:(BOOL)arg1 ;
-(void)queueDelayedTask:(/*^block*/id)arg1 ;
-(BOOL)isTranslating;
-(BOOL)_isCoordinatingWithSystemGestures;
-(double)ambiguousControlCenterActivationMargin;
-(void)setAmbiguousControlCenterActivationMargin:(double)arg1 ;
-(void)flushDelayedTasks;
-(UIInputViewSet *)_inputViews;
-(void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setUndockedWithOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderOutAutomaticSkippingAnimation;
-(BOOL)isOffScreen;
-(void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2 ;
-(void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2 ;
-(void)finishRotationOfKeyboard:(id)arg1 ;
-(void)prepareForRotationToOrientation:(long long)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(void)finishRotation;
-(void)forceOrderInAutomatic;
-(void)forceOrderOutAutomatic;
-(void)manualKeyboardWillBeOrderedIn:(id)arg1 ;
-(void)manualKeyboardWasOrderedIn:(id)arg1 ;
-(void)manualKeyboardWillBeOrderedOut:(id)arg1 ;
-(void)manualKeyboardWasOrderedOut:(id)arg1 ;
-(UIInputViewSet *)loadAwareInputViews;
-(void)moveToPersistentOffset;
-(id)transformedContainerView;
-(BOOL)animationFencingEnabled;
-(void)setAnimationFencingEnabled:(BOOL)arg1 ;
-(void)set_inputViews:(UIInputViewSet *)arg1 ;
-(void)peripheralHostWillResume:(id)arg1 ;
-(void)textEffectsWindowDidRotate:(id)arg1 ;
-(void)set_transientInputViews:(UIInputViewSet *)arg1 ;
-(void)setSelfHostingTrigger:(UIResponder *)arg1 ;
-(void)setPostPinningReloadState:(UIInputViewPostPinningReloadState *)arg1 ;
-(id)_renderConfigForCurrentResponder;
-(UIPeripheralHostState *)targetState;
-(void)setTargetState:(UIPeripheralHostState *)arg1 ;
-(void)_onScreenStateDidChange;
-(void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2 ;
-(id)_screenForFirstResponder:(id)arg1 ;
-(void)fadeInInputViews:(BOOL)arg1 ;
-(id)_sceneForFirstResponder:(id)arg1 ;
-(CGPoint)adjustedPersistentOffset;
-(CGSize)totalPeripheralSizeForOrientation:(long long)arg1 ;
-(void)updateBackdrop;
-(void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)layoutInputViews;
-(CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)setKeyboardFencingEnabled:(BOOL)arg1 ;
-(void)postDidShowNotification;
-(void)postDidHideNotification;
-(void)fadeInputViewsIfNeeded;
-(void)showInputViewsIfNeeded;
-(UIKeyboard *)automaticKeyboard;
-(void)orderOutAutomaticExceptAccessoryView;
-(void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3 ;
-(UIKeyboardRotationState *)rotationState;
-(void)setRotationState:(UIKeyboardRotationState *)arg1 ;
-(double)lastKeyplaneResize;
-(void)setLastKeyplaneResize:(double)arg1 ;
-(UIInputViewSet *)_transientInputViews;
-(UIResponder *)selfHostingTrigger;
-(UIInputViewPostPinningReloadState *)postPinningReloadState;
-(BOOL)preservingInputViews;
-(void)setPreservingInputViews:(BOOL)arg1 ;
-(BOOL)hasCustomInputView;
-(CGRect)screenRectFromBounds:(CGRect)arg1 atCenter:(CGPoint)arg2 applyingSourceHeightDelta:(double)arg3 ;
-(id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(BOOL)arg3 forShow:(BOOL)arg4 ;
-(BOOL)userInfoContainsActualGeometryChange:(id)arg1 ;
-(BOOL)isHostingActiveImpl;
-(void)logGeometryDescriptionFromUserInfo:(id)arg1 ;
-(void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(id)containerTextEffectsWindow;
-(void)set_transitionStartTime:(NSDate *)arg1 ;
-(void)setDeactivatedKeyboard:(BOOL)arg1 forScene:(id)arg2 ;
-(double)minimumOffsetForBuffer:(double)arg1 ;
-(BOOL)_isSuppressedByManualKeyboard;
-(BOOL)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(int)_isKeyboardDeactivated;
-(BOOL)_isSelfHosting;
-(void)scrollView:(id)arg1 didPanWithGesture:(id)arg2 ;
-(void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2 ;
-(id)containerTextEffectsWindowAboveStatusBar;
-(void)prepareForPinning;
-(void)performWithoutDeactivation:(/*^block*/id)arg1 ;
-(void)_setHosted:(BOOL)arg1 ;
-(void)_pinInputViewsOnBehalfOfResponder:(id)arg1 duringBlock:(/*^block*/id)arg2 ;
-(CGRect)visiblePeripheralFrame:(BOOL)arg1 ;
-(CGPoint)offHostPointForPoint:(CGPoint)arg1 ;
-(double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)resetCurrentOrderOutAnimationDuration:(double)arg1 ;
-(double)getLastAutomaticDuration;
-(double)keyboardAttachedViewHeight;
-(void)setkeyboardAttachedViewHeight:(double)arg1 ;
-(id)topAnimationStyle;
-(void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2 ;
-(void)resetNextAutomaticOrderInDirectionAndDuration;
-(void)peripheralViewMinMaximized:(BOOL)arg1 state:(id)arg2 ;
-(void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)enableKeyboardTyping;
-(BOOL)shouldApplySettingsForBackdropView:(id)arg1 ;
-(id)_currentInputView;
-(BOOL)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2 ;
-(void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1 ;
-(void)updateInputAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(BOOL)_isAccessoryViewChangedOnly;
-(BOOL)_shouldDelayRotationForWindow:(id)arg1 ;
@end
