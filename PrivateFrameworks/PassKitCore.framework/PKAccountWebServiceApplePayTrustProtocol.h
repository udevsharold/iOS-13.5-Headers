/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKApplePayTrustHashResponse, NSURL, NSData;


@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash; 
@required
-(NSURL *)baseURL;
-(void)setBaseURL:(id)arg1;
-(id)manifestHashWithReferenceIdentifier:(id)arg1;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(id)arg1;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(id)arg1;

@end

