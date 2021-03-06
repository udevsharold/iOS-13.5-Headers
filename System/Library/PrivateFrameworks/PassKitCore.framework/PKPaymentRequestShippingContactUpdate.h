/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequestUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <NSSecureCoding> {

	NSArray* _shippingMethods;
	NSArray* _errors;

}

@property (nonatomic,copy) NSArray * shippingMethods;              //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,copy) NSArray * errors;                       //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSArray *)shippingMethods;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(id)initWithStatus:(long long)arg1 errors:(id)arg2 paymentSummaryItems:(id)arg3 shippingMethods:(id)arg4 ;
@end

