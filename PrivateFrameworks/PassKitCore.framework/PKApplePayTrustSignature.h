/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKApplePayTrustSignatureRequest, NSData;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding> {

	PKApplePayTrustSignatureRequest* _signatureRequest;
	NSData* _signatureData;
	NSData* _paymentData;

}

@property (nonatomic,readonly) PKApplePayTrustSignatureRequest * signatureRequest;              //@synthesize signatureRequest=_signatureRequest - In the implementation block
@property (nonatomic,copy,readonly) NSData * signatureData;                                     //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,copy,readonly) NSData * paymentData;                                       //@synthesize paymentData=_paymentData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)paymentData;
-(NSData *)signatureData;
-(id)initWithSignatureRequest:(id)arg1 signature:(id)arg2 ;
-(PKApplePayTrustSignatureRequest *)signatureRequest;
@end

