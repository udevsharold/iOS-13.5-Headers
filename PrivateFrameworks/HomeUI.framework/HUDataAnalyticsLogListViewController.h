/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>
#import <libobjc.A.dylib/HUDataAnalyticsModuleControllerDelegate.h>

@protocol HFMediaProfileContainer;
@class HUActivityLoadingView, HUDataAnalyticsModuleController, NSString;

@interface HUDataAnalyticsLogListViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUDataAnalyticsModuleControllerDelegate> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HUActivityLoadingView* _activityLoadingView;
	HUDataAnalyticsModuleController* _analyticsModuleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HUActivityLoadingView * activityLoadingView;                              //@synthesize activityLoadingView=_activityLoadingView - In the implementation block
@property (nonatomic,readonly) HUDataAnalyticsModuleController * analyticsModuleController;              //@synthesize analyticsModuleController=_analyticsModuleController - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                        //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)hu_preloadContent;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)itemModuleControllers;
-(void)dataAnalyticsModuleController:(id)arg1 didSelectItem:(id)arg2 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(HUActivityLoadingView *)activityLoadingView;
-(void)_watchForReload;
-(HUDataAnalyticsModuleController *)analyticsModuleController;
-(void)_kickoffReload;
-(BOOL)bypassInitialItemUpdateReload;
@end

