/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPaymentMerchantSession, NSString, NSDecimalNumber;

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _secureElementIdentifier;
	NSDecimalNumber* _transactionAmount;
	NSString* _currencyCode;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                        //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * transactionAmount;                       //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                   //@synthesize currencyCode=_currencyCode - In the implementation block
+(id)paramWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 transactionAmount:(id)arg3 currencyCode:(id)arg4 ;
-(id)description;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(PKPaymentMerchantSession *)merchantSession;
-(NSString *)secureElementIdentifier;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
@end

