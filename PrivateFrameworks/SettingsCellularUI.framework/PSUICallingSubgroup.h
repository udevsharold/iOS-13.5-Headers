/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, PSSpecifier, NSArray, NSString;

@interface PSUICallingSubgroup : NSObject <PSSpecifierGroup> {

	BOOL _supportsWiFiCalling;
	PSListController* _listController;
	PSSpecifier* _parentSpecifier;
	NSArray* _wifiCallingSpecifiers;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                  //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * wifiCallingSpecifiers;                       //@synthesize wifiCallingSpecifiers=_wifiCallingSpecifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setListController:(PSListController *)arg1 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(void)setWifiCallingSpecifiers:(NSArray *)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 ;
-(void)viewWillAppear;
-(NSArray *)wifiCallingSpecifiers;
@end

