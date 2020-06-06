/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITabBarController.h>

@class UIBarButtonItem, PKPaymentTransaction, PKPaymentPass, PKTransactionCloudKitDebugDetailsViewController;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {

	UIBarButtonItem* _shareButton;
	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	PKTransactionCloudKitDebugDetailsViewController* _cloudKitViewController;

}
-(void)_handleShareButton:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 ;
@end

