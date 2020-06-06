/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@protocol BFFFinishSetupFlowHosting;
@class NSObject, PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface BFFFinishSetupPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BFFFinishSetupFlowControlling> {

	NSObject*<BFFFinishSetupFlowHosting> _host;
	PKPaymentSetupAssistantRegistrationViewController* _registrationController;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)registrationViewControllerOutstandingRequirements;
+(BOOL)hasPrimaryiCloudAccount;
+(id)finishSetupPaymentControllerWithHost:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)_completeWithResult:(unsigned long long)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(BOOL)controllerNeedsToRun;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)prerequisiteFlowIdentifier;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canCompleteExtendedInitializationQuickly;
@end

