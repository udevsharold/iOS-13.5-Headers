/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse {

	NSArray* _certificates;
	NSData* _nonce;
	NSData* _publicKeyHash;
	NSData* _nonceSignature;

}

@property (nonatomic,copy,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                      //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                       //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * nonceSignature;                      //@synthesize nonceSignature=_nonceSignature - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)certificates;
-(NSData *)nonce;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSData *)nonceSignature;
-(void)setNonceSignature:(NSData *)arg1 ;
@end

