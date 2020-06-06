/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@class PKPaymentPass, PKCurrencyAmount;

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference {

	BOOL _on;
	BOOL _enabled;
	PKPaymentPass* _peerPaymentPass;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (nonatomic,retain) PKPaymentPass * peerPaymentPass;                    //@synthesize peerPaymentPass=_peerPaymentPass - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;              //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                //@synthesize on=_on - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(PKCurrencyAmount *)peerPaymentBalance;
-(PKPaymentPass *)peerPaymentPass;
-(void)setPeerPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
@end

