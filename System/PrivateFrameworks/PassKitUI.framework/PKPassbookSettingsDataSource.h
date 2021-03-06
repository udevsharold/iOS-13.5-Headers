/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassbookSettingsDataSource <NSObject>
@optional
-(id)deviceName;
-(BOOL)supportsCredentialType:(long long)arg1;
-(BOOL)hasFelicaSecureElement;

@required
-(id)secureElementID;
-(BOOL)secureElementIsProductionSigned;
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(id)optionsDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;

@end

