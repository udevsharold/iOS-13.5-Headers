/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentRemoteCredentialsResponse : PKPaymentWebServiceResponse {

	NSArray* _credentials;

}

@property (nonatomic,copy,readonly) NSArray * credentials;              //@synthesize credentials=_credentials - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)credentials;
@end

