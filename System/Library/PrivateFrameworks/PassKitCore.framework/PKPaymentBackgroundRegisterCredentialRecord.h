/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

@class NSString, NSData;

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord {

	NSString* _credentialIdentifier;
	NSData* _responseData;

}

@property (nonatomic,copy) NSString * credentialIdentifier;              //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,copy) NSData * responseData;                        //@synthesize responseData=_responseData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)initWithCredentialIdentifier:(id)arg1 ;
@end

