/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {

	BOOL _includeMetadata;
	NSString* _productIdentifier;
	long long _credentialType;

}

@property (assign,nonatomic) BOOL includeMetadata;                      //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) long long credentialType;                  //@synthesize credentialType=_credentialType - In the implementation block
-(long long)credentialType;
-(void)setCredentialType:(long long)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)includeMetadata;
@end

