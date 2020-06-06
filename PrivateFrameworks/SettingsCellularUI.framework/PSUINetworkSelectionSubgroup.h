/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, PSSpecifier, CoreTelephonyClient, NSMutableArray, NSString;

@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientSubscriberDelegate, PSSpecifierGroup> {

	PSListController* _listController;
	PSSpecifier* _parentSpecifier;
	CoreTelephonyClient* _ctClient;
	NSMutableArray* _bundleControllers;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                  //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * ctClient;                        //@synthesize ctClient=_ctClient - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleControllers;                    //@synthesize bundleControllers=_bundleControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)willEnterForeground;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)specifiers;
-(void)setBundleControllers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bundleControllers;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setListController:(PSListController *)arg1 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 ;
-(void)reloadCellularNetworkSpecifier;
-(void)updateShowsCarrierSettingsMenuVisibility;
-(id)localizedCellularNetworkName:(id)arg1 ;
-(BOOL)_showCarrier;
-(void)setShowsCarrierSettingsMenu:(BOOL)arg1 ;
-(CoreTelephonyClient *)ctClient;
-(void)setCtClient:(CoreTelephonyClient *)arg1 ;
@end

