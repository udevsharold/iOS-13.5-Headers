/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CCUIContentModuleContext;


@protocol HUCCModuleContentViewControllerDelegate <NSObject>
@property (nonatomic,readonly) CCUIContentModuleContext * contentModuleContext; 
@required
-(CCUIContentModuleContext *)contentModuleContext;
-(void)launchHomeAppForModuleViewController:(id)arg1;
-(BOOL)isDeviceUnlockedForModuleViewController:(id)arg1;

@end

