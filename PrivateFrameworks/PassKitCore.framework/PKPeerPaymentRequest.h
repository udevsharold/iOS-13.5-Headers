/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequest.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest : PKPaymentRequest {

	PKPeerPaymentQuote* _peerPaymentQuote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(id)initWithPeerPaymentQuote:(id)arg1 ;
@end

