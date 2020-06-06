/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBLockScreenPluginViewController.h>
#import <libobjc.A.dylib/SBLockScreenPluginController.h>

@protocol SBLockScreenPluginAgent;
@class SBLockScreenPluginAction, SBLockScreenPluginMutableAppearanceContext, NSString, _UILegibilitySettings;

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginViewController, SBLockScreenPluginController> {

	id<SBLockScreenPluginAgent> _agent;
	SBLockScreenPluginMutableAppearanceContext* _appearance;
	BOOL _viewCanBeDisplayed;

}

@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) BOOL viewCanBeDisplayed;                                                                 //@synthesize viewCanBeDisplayed=_viewCanBeDisplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent;                                          //@synthesize agent=_agent - In the implementation block
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
+(void)enableBundleNamed:(id)arg1 activationContext:(id)arg2 ;
+(void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
+(void)enableBundleNamed:(id)arg1 ;
+(void)disableBundleNamed:(id)arg1 ;
-(id)init;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)disable;
-(long long)presentationStyle;
-(id)_legibilitySettings;
-(_UILegibilitySettings *)legibilitySettings;
-(id)customHeaderView;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(long long)overlayStyle;
-(long long)notificationBehavior;
-(BOOL)viewCanBeDisplayed;
-(BOOL)showStatusBar;
-(BOOL)showDateView;
-(BOOL)hasCustomSubtitle;
-(id)customSubtitleText;
-(BOOL)showDate;
-(BOOL)allowsSiri;
-(BOOL)allowsLockScreenCamera;
-(BOOL)allowsUnlocking;
-(BOOL)allowsLogout;
-(BOOL)wantsMesaAutoUnlock;
-(BOOL)allowsLockScreenMediaControls;
-(BOOL)allowsControlCenter;
-(BOOL)allowsScreenshots;
-(BOOL)legibilitySettingsOverridesVibrancy;
-(BOOL)isContentViewWhiteUnderSlideToUnlockText;
-(void)_updateAppearanceAndNotify:(BOOL)arg1 ;
-(void)setActivationContext:(id)arg1 ;
-(void)setDeactivationContext:(id)arg1 ;
-(void)purgeView;
-(void)setPluginAgent:(id<SBLockScreenPluginAgent>)arg1 ;
-(id)slideToUnlockText;
-(id)bundleIDForUnlock;
-(unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1 ;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldDisableOnRelock;
-(BOOL)handleMenuButtonTap;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)disablesAwayItemsCompletely;
-(BOOL)shouldAutoHideNotifications;
-(BOOL)pluginAnimatesAppearanceTransition:(BOOL)arg1 ;
-(id)pluginAnimateAppearanceTransition:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(long long)pluginPriority;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(BOOL)pluginHandleEvent:(long long)arg1 ;
-(SBLockScreenPluginAction *)pluginUnlockAction;
-(void)setViewCanBeDisplayed:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)allowsTimer;
-(BOOL)allowsLockScreenHint;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(BOOL)showBatteryChargingText;
-(id)customSubtitleColor;
-(BOOL)allowsPhotoSlideshow;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)handleMenuButtonHeld;
-(void)setNeedsLegibilityAppearanceUpdate;
@end

