/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkConfigurationSettingsModuleController, HUNetworkConfigurationSettingsItemManager;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController {

	HUNetworkConfigurationSettingsModuleController* _networkConfigurationSettingsModuleController;

}

@property (nonatomic,readonly) HUNetworkConfigurationSettingsItemManager * itemManager; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModuleController * networkConfigurationSettingsModuleController;              //@synthesize networkConfigurationSettingsModuleController=_networkConfigurationSettingsModuleController - In the implementation block
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)itemManagerDidFinishUpdate:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)initWithNetworkConfigurationGroupItem:(id)arg1 ;
-(void)setNetworkConfigurationSettingsModuleController:(HUNetworkConfigurationSettingsModuleController *)arg1 ;
-(HUNetworkConfigurationSettingsModuleController *)networkConfigurationSettingsModuleController;
-(void)updateNetworkConfigurationSettingsModuleFooter;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
@end

