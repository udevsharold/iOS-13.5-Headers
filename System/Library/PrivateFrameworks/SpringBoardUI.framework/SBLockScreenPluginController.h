/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBLockScreenPluginAction;


@protocol SBLockScreenPluginController <SBPluginBundleController,SBUIOptionalLegibility>
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent; 
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
@optional
-(void)pluginWillActivateWithContext:(id)arg1;
-(void)pluginDidDeactivateWithContext:(id)arg1;
-(BOOL)pluginHandleEvent:(long long)arg1;
-(void)updateForPresentation:(id)arg1;
-(SBLockScreenPluginAction *)pluginUnlockAction;

@required
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(void)setPluginAgent:(id)arg1;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(long long)pluginPriority;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;

@end

