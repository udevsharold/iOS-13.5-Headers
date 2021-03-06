/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKCompactNavigationContainedNavigationController.h>

@protocol UIViewControllerTransitioningDelegate;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {

	PKPaymentAuthorizationLayout* _layout;
	PKPaymentAuthorizationServiceViewController* _authorizationViewController;
	id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;

}

@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;                   //@synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationServiceViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_backgroundColorForModalFormSheet;
-(PKPaymentAuthorizationServiceViewController *)authorizationViewController;
-(id)initWithLayoutStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(id<UIViewControllerTransitioningDelegate>)paymentTransitioningDelegate;
-(void)setPaymentTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
@end

