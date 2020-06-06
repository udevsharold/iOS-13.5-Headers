/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKAccountAction : NSObject <NSSecureCoding> {

	unsigned long long _actionType;
	NSString* _identifier;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	unsigned long long _redemptionType;

}

@property (assign,nonatomic) unsigned long long actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                       //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                        //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long redemptionType;              //@synthesize redemptionType=_redemptionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)actionType;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)redemptionType;
-(void)setRedemptionType:(unsigned long long)arg1 ;
@end

