/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell {

	CTCellularPlanPendingTransfer* _planPendingTransfer;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * planPendingTransfer;              //@synthesize planPendingTransfer=_planPendingTransfer - In the implementation block
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
-(id)_setStatusLabelText;
@end
