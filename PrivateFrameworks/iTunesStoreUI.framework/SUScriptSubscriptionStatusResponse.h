/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptDictionary;

@interface SUScriptSubscriptionStatusResponse : SUScriptObject {

	NSNumber* _acceptedStoreTermsVersion;
	NSString* _accountStatus;
	NSString* _carrierBundlingStatus;
	NSNumber* _carrierBundlingErrorCode;
	id _discoveryModeEligible;
	NSString* _eligibilityStatus;
	id _familyOrganizer;
	id _familySubscription;
	id _final;
	id _hasFamily;
	id _hasFamilyMembers;
	NSNumber* _latestStoreTermsVersion;
	SUScriptDictionary* _rawResponseData;
	NSString* _sessionIdentifier;
	id _subscribed;

}

@property (readonly) NSNumber * acceptedStoreTermsVersion;                                 //@synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion - In the implementation block
@property (readonly) NSString * accountIdentifier; 
@property (readonly) NSString * accountStatus;                                             //@synthesize accountStatus=_accountStatus - In the implementation block
@property (readonly) NSString * carrierBundlingStatus;                                     //@synthesize carrierBundlingStatus=_carrierBundlingStatus - In the implementation block
@property (readonly) NSNumber * carrierBundlingErrorCode;                                  //@synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode - In the implementation block
@property (getter=isDiscoveryModeEligible,readonly) id discoveryModeEligible;              //@synthesize discoveryModeEligible=_discoveryModeEligible - In the implementation block
@property (readonly) NSString * eligibilityStatus;                                         //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (getter=isFamilyOrganizer,readonly) id familyOrganizer;                          //@synthesize familyOrganizer=_familyOrganizer - In the implementation block
@property (getter=isFamilySubscription,readonly) id familySubscription;                    //@synthesize familySubscription=_familySubscription - In the implementation block
@property (getter=isFinal,readonly) id final;                                              //@synthesize final=_final - In the implementation block
@property (readonly) id hasFamily;                                                         //@synthesize hasFamily=_hasFamily - In the implementation block
@property (readonly) id hasFamilyMembers;                                                  //@synthesize hasFamilyMembers=_hasFamilyMembers - In the implementation block
@property (readonly) NSNumber * latestStoreTermsVersion;                                   //@synthesize latestStoreTermsVersion=_latestStoreTermsVersion - In the implementation block
@property (readonly) SUScriptDictionary * rawResponseData;                                 //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (readonly) NSString * sessionIdentifier;                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (getter=isSubscribed,readonly) id subscribed;                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (readonly) NSString * accountStatusNeedsAuthentication; 
@property (readonly) NSString * accountStatusNotSubscribed; 
@property (readonly) NSString * accountStatusSubscribed; 
@property (readonly) NSString * accountStatusUnknown; 
@property (readonly) NSString * eligibilityStatusEligible; 
@property (readonly) NSString * eligibilityStatusNotEligible; 
@property (readonly) NSString * eligibilityStatusUnknown; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_className;
-(NSString *)accountIdentifier;
-(NSString *)accountStatus;
-(NSString *)sessionIdentifier;
-(id)attributeKeys;
-(NSString *)eligibilityStatus;
-(id)isSubscribed;
-(id)isFinal;
-(NSString *)carrierBundlingStatus;
-(SUScriptDictionary *)rawResponseData;
-(NSNumber *)acceptedStoreTermsVersion;
-(NSNumber *)carrierBundlingErrorCode;
-(id)isDiscoveryModeEligible;
-(id)isFamilyOrganizer;
-(id)isFamilySubscription;
-(id)hasFamily;
-(id)hasFamilyMembers;
-(NSNumber *)latestStoreTermsVersion;
-(id)scriptAttributeKeys;
-(NSString *)accountStatusUnknown;
-(NSString *)accountStatusSubscribed;
-(NSString *)accountStatusNeedsAuthentication;
-(NSString *)accountStatusNotSubscribed;
-(NSString *)eligibilityStatusEligible;
-(NSString *)eligibilityStatusNotEligible;
-(NSString *)eligibilityStatusUnknown;
-(id)initWithSubscriptionStatus:(id)arg1 isFinal:(BOOL)arg2 ;
@end

