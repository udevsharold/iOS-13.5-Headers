/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, PKPaymentSetupProduct;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _termsAccepted;
	NSObject*<OS_dispatch_group> _nextScreenGroup;
	NSString* _titleText;
	NSString* _subtitleText;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,readonly) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(BOOL)readerModeProvisioningIsSupported;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)footerView;
-(PKPaymentSetupProduct *)product;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 ;
-(id)defaultFields;
-(void)_prepareForProvisioningViewController;
-(void)_showTerms;
-(void)_registerLocalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_pushReaderModeProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadCardArtIfNecessary:(/*^block*/id)arg1 ;
@end

