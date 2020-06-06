/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController {

	PSUIPlanPendingTransferMenusGroup* _planPendingTransferMenus;

}

@property (nonatomic,retain) PSUIPlanPendingTransferMenusGroup * planPendingTransferMenus;              //@synthesize planPendingTransferMenus=_planPendingTransferMenus - In the implementation block
-(id)init;
-(id)specifiers;
-(void)cellularPlanChanged;
-(PSUIPlanPendingTransferMenusGroup *)planPendingTransferMenus;
-(void)setPlanPendingTransferMenus:(PSUIPlanPendingTransferMenusGroup *)arg1 ;
@end

