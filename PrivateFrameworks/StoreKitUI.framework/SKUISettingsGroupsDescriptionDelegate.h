/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUISettingsGroupsDescriptionDelegate <NSObject>
@required
-(id)owningViewControllerForSettingsGroupsDescription:(id)arg1;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
-(void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2;
-(void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2;
-(void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1;

@end

