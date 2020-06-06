/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSEntitlementJSHandlerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol TSSetupFlowItem;
@class NSString, NSDictionary, UIViewController;

@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate, UINavigationControllerDelegate> {

	NSString* _websheetURL;
	NSDictionary* _postdata;
	unsigned long long _requestType;
	UIViewController*<TSSetupFlowItem> _currentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(id)initWithRequestType:(unsigned long long)arg1 websheetURL:(id)arg2 postdata:(id)arg3 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 ;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6 ;
-(void)accountCancelled;
-(void)accountPendingRelease;
-(void)_createURLRequest:(/*^block*/id)arg1 ;
-(void)_showFailureAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

