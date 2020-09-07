/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {

	long long _status;
	NSArray* _requiredPaymentSetupFields;
	NSString* _productIdentifier;
	NSArray* _possibleProducts;
	NSURL* _learnMoreURL;
	NSString* _nonce;

}

@property (nonatomic,readonly) long long status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredPaymentSetupFields;              //@synthesize requiredPaymentSetupFields=_requiredPaymentSetupFields - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * possibleProducts;                        //@synthesize possibleProducts=_possibleProducts - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                              //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(NSString *)nonce;
-(NSString *)productIdentifier;
-(NSArray *)requiredPaymentSetupFields;
-(id)initWithProduct:(id)arg1 ;
-(id)initWithProvisioningMethodMetadata:(id)arg1 ;
-(id)initWithRemoteCredential:(id)arg1 ;
-(NSArray *)possibleProducts;
-(NSURL *)learnMoreURL;
@end
