/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKSubcredentialPairingRemoteAlertInterface.h>
#import <libobjc.A.dylib/PKSubcredentialProvisioningFlowControllerDelegate.h>

@class PKSubcredentialPairingFlowController, PKSubcredentialPairingFlowControllerContext, UIViewController, NSXPCConnection, NSString;

@interface PKSubcredentialPairingRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKSubcredentialPairingRemoteAlertInterface, PKSubcredentialProvisioningFlowControllerDelegate> {

	PKSubcredentialPairingFlowController* _flowController;
	PKSubcredentialPairingFlowControllerContext* _pairingContext;
	UIViewController* _viewController;
	NSXPCConnection* _connection;
	BOOL _hasFinished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteDeviceWebService;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)subcredentialProvisioningFlowController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3 ;
-(void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg1 ;
-(void)_dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)connectToEndpoint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

