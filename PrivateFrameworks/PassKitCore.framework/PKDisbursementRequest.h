/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString, NSArray;

@interface PKDisbursementRequest : NSObject <NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	NSString* _countryCode;
	long long _requestSchedule;
	NSArray* _summaryItems;

}

@property (nonatomic,copy) NSDecimalNumber * amount;                 //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                   //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long requestSchedule;              //@synthesize requestSchedule=_requestSchedule - In the implementation block
@property (nonatomic,copy) NSArray * summaryItems;                   //@synthesize summaryItems=_summaryItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSArray *)summaryItems;
-(BOOL)isEqualToDisbursementRequest:(id)arg1 ;
-(long long)requestSchedule;
-(void)setRequestSchedule:(long long)arg1 ;
-(void)setSummaryItems:(NSArray *)arg1 ;
@end

