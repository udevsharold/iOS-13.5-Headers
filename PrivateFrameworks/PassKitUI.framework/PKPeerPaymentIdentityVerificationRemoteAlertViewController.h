/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@class PKPeerPaymentIdentityVerificationController, PKNavigationController, PKPeerPaymentWebService, NSString;

@interface PKPeerPaymentIdentityVerificationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupViewControllerDelegate> {

	PKPeerPaymentIdentityVerificationController* _controller;
	PKNavigationController* _navController;
	PKPeerPaymentWebService* _webService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)preferredStatusBarStyle;
-(void)_dismiss;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(id)pk_navigationController;
-(id)_alertViewController;
@end

