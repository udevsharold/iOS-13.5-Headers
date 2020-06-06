/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKCurrencyAmount, PKBankAccountInformation;

@interface PKBankAccountDataItem : PKPaymentDataItem {

	PKCurrencyAmount* _peerPaymentBalance;
	PKBankAccountInformation* _PKBankAccountInformation;

}

@property (nonatomic,retain) PKBankAccountInformation * PKBankAccountInformation;              //@synthesize PKBankAccountInformation=_PKBankAccountInformation - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;                            //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (nonatomic,readonly) PKBankAccountInformation * bankAccountInformation; 
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(PKBankAccountInformation *)bankAccountInformation;
-(PKCurrencyAmount *)peerPaymentBalance;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(PKBankAccountInformation *)PKBankAccountInformation;
-(void)setPKBankAccountInformation:(PKBankAccountInformation *)arg1 ;
@end

