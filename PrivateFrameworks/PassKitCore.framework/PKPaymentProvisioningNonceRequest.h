/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest {

	unsigned long long _nonceType;

}

@property (assign,nonatomic) unsigned long long nonceType;              //@synthesize nonceType=_nonceType - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithNonceType:(unsigned long long)arg1 ;
-(unsigned long long)nonceType;
-(void)setNonceType:(unsigned long long)arg1 ;
@end

