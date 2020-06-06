/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKPaymentDataProvider;
@class PKAccount, PKAccountService, PKPaymentPass, NSArray, NSMutableDictionary, NSDateFormatter;

@interface PKInstallmentPlansViewController : UITableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKPaymentPass* _paymentPass;
	id<PKPaymentDataProvider> _dataProvider;
	NSArray* _installmentPlans;
	NSMutableDictionary* _installmentPlanToDeviceName;
	NSDateFormatter* _installmentDateFormatter;

}
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateInstallmentPlans;
-(void)_handleAccountUpdatedNotification:(id)arg1 ;
-(id)_installmentPlanForIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg1 forInstallmentPlan:(id)arg2 ;
-(id)initWithAccount:(id)arg1 accountService:(id)arg2 paymentPass:(id)arg3 dataProvider:(id)arg4 ;
-(id)_totalAmountPaid;
-(id)_totalAmountRemaining;
@end

