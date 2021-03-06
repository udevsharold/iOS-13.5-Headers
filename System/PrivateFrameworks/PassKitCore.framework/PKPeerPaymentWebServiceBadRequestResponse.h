/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _serverDebugDescription;

}

@property (nonatomic,copy,readonly) NSNumber * errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverDebugDescription;              //@synthesize serverDebugDescription=_serverDebugDescription - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSNumber *)errorCode;
-(NSString *)serverDebugDescription;
@end

