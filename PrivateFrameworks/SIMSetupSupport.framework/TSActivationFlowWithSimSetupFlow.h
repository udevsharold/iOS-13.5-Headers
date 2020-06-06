/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSCellularPlanManagerCacheDelegate.h>
#import <libobjc.A.dylib/TSEntitlementJSHandlerDelegate.h>

@protocol TSSetupFlowItem;
@class NSError, NSMutableArray, NSString, UIBarButtonItem, UIViewController;

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate> {

	BOOL _requireSetup;
	BOOL _confirmationCodeRequired;
	BOOL _isTransferCapable;
	NSError* _planInstallError;
	NSMutableArray* _danglingPlanItems;
	NSMutableArray* _transferItems;
	NSString* _name;
	unsigned long long _userConsentType;
	UIBarButtonItem* _cancelButton;
	long long _signupConsentResponse;
	UIViewController*<TSSetupFlowItem> _currentViewController;
	BOOL _isPreinstallingViewControllerActive;

}

@property (assign) BOOL isPreinstallingViewControllerActive;              //@synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(long long)signupUserConsentResponse;
-(id)initRequireSetup:(BOOL)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)popViewController:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)planItemsUpdated:(id)arg1 planListError:(id)arg2 ;
-(BOOL)isPreinstallingViewControllerActive;
-(void)setIsPreinstallingViewControllerActive:(BOOL)arg1 ;
-(void)_requestTransferPlanList;
-(void)_requestPendingInstallItems;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg1 ;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6 ;
-(void)accountCancelled;
-(void)accountPendingRelease;
@end

