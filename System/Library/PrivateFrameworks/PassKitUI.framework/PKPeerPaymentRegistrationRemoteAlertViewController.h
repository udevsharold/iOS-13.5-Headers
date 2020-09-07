/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@class NSString;

@interface PKPeerPaymentRegistrationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>

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
-(id)_peerPaymentAccountFromData:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
@end
