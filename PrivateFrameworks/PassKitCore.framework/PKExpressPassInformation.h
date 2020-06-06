/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {

	NSDictionary* _configuration;
	BOOL _forceModernEncoding;
	long long _cardType;
	NSString* _passUniqueIdentifier;
	NSDictionary* _subcredentialCredentialIdentifiers;
	NSDictionary* _subcredentialEndpointIdentifiers;
	NSString* _paymentApplicationIdentifier;
	NSString* _expressMode;
	long long _expressPassType;

}

@property (nonatomic,readonly) long long cardType;                                             //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) NSString * passUniqueIdentifier;                                //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * subcredentialCredentialIdentifiers;              //@synthesize subcredentialCredentialIdentifiers=_subcredentialCredentialIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * subcredentialEndpointIdentifiers;                //@synthesize subcredentialEndpointIdentifiers=_subcredentialEndpointIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL forceModernEncoding;                                         //@synthesize forceModernEncoding=_forceModernEncoding - In the implementation block
@property (nonatomic,readonly) NSString * paymentApplicationIdentifier;                        //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * expressMode;                                         //@synthesize expressMode=_expressMode - In the implementation block
@property (nonatomic,readonly) long long expressPassType;                                      //@synthesize expressPassType=_expressPassType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)cardType;
-(NSString *)paymentApplicationIdentifier;
-(NSString *)passUniqueIdentifier;
-(id)criteriaForPaymentApplicationIdentifier:(id)arg1 ;
-(id)initForPaymentPass:(id)arg1 withTechologyTest:(/*^block*/id)arg2 ;
-(id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)arg1 paymentPass:(id)arg2 withTechologyTest:(/*^block*/id)arg3 ;
-(id)paymentApplicationIdentifiers;
-(NSString *)expressMode;
-(id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3 ;
-(void)setForceModernEncoding:(BOOL)arg1 ;
-(void)_createLegacyPropertiesIfNecessary;
-(id)_initForPaymentPass:(id)arg1 configuration:(id)arg2 subcredentialCredentialIdentifiers:(id)arg3 ;
-(void)_createModernPropertiesIfNecessary;
-(void)enumerateCriteriaWithHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)subcredentialCredentialIdentifiers;
-(NSDictionary *)subcredentialEndpointIdentifiers;
-(BOOL)forceModernEncoding;
-(long long)expressPassType;
@end

