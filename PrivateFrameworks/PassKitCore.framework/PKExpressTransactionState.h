/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding> {

	BOOL _processing;
	long long _technologyType;
	NSString* _paymentApplicationIdentifier;
	NSString* _passUniqueIdentifier;
	unsigned long long _receivedEvents;

}

@property (assign,nonatomic) long long technologyType;                           //@synthesize technologyType=_technologyType - In the implementation block
@property (nonatomic,copy) NSString * paymentApplicationIdentifier;              //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                    //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,getter=isProcessing,nonatomic) BOOL processing;                //@synthesize processing=_processing - In the implementation block
@property (assign,nonatomic) unsigned long long receivedEvents;                  //@synthesize receivedEvents=_receivedEvents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(NSString *)paymentApplicationIdentifier;
-(void)setPaymentApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isProcessing;
-(void)setProcessing:(BOOL)arg1 ;
-(unsigned long long)receivedEvents;
-(void)setReceivedEvents:(unsigned long long)arg1 ;
@end

