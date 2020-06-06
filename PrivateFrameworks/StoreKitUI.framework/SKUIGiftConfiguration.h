/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSArray, NSMutableDictionary, SKUIClientContext, NSString, NSURL, NSHashTable, NSOperationQueue;

@interface SKUIGiftConfiguration : NSObject {

	NSArray* _charities;
	NSMutableDictionary* _charityImages;
	SKUIClientContext* _clientContext;
	NSString* _currencySymbol;
	long long _currencySymbolPosition;
	NSArray* _fixedGiftAmountLabels;
	NSArray* _fixedGiftAmountValues;
	NSString* _senderName;
	NSRange _giftAmountRange;
	NSURL* _giftPurchaseURL;
	NSURL* _giftValidationURL;
	long long _maximumMessageLength;
	NSHashTable* _observers;
	NSOperationQueue* _operationQueue;
	NSString* _senderEmailAddress;
	NSString* _storeFrontName;
	NSArray* _themes;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSString * currencySymbol;                      //@synthesize currencySymbol=_currencySymbol - In the implementation block
@property (nonatomic,readonly) long long currencySymbolPosition;               //@synthesize currencySymbolPosition=_currencySymbolPosition - In the implementation block
@property (nonatomic,readonly) NSArray * fixedGiftAmountLabels;                //@synthesize fixedGiftAmountLabels=_fixedGiftAmountLabels - In the implementation block
@property (nonatomic,readonly) NSArray * fixedGiftAmountValues;                //@synthesize fixedGiftAmountValues=_fixedGiftAmountValues - In the implementation block
@property (nonatomic,readonly) NSRange giftAmountRange;                        //@synthesize giftAmountRange=_giftAmountRange - In the implementation block
@property (nonatomic,readonly) NSURL * giftPurchaseURL;                        //@synthesize giftPurchaseURL=_giftPurchaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * giftValidationURL;                      //@synthesize giftValidationURL=_giftValidationURL - In the implementation block
@property (nonatomic,readonly) long long maximumMessageLength;                 //@synthesize maximumMessageLength=_maximumMessageLength - In the implementation block
@property (nonatomic,readonly) NSString * senderEmailAddress;                  //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (nonatomic,readonly) NSString * senderName;                          //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontName;                      //@synthesize storeFrontName=_storeFrontName - In the implementation block
@property (nonatomic,readonly) NSArray * themes;                               //@synthesize themes=_themes - In the implementation block
-(NSString *)currencySymbol;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)senderEmailAddress;
-(SKUIClientContext *)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)senderName;
-(NSURL *)giftValidationURL;
-(NSString *)storeFrontName;
-(long long)maximumMessageLength;
-(NSArray *)fixedGiftAmountLabels;
-(NSArray *)fixedGiftAmountValues;
-(long long)currencySymbolPosition;
-(NSArray *)themes;
-(void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_setLogoImage:(id)arg1 forCharity:(id)arg2 ;
-(void)_loadThemeImages;
-(void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_setHeaderImage:(id)arg1 forTheme:(id)arg2 ;
-(id)charityForIdentifier:(id)arg1 ;
-(BOOL)loadCachedConfiguration;
-(void)loadLogoForCharity:(id)arg1 ;
-(id)logoImageForCharity:(id)arg1 ;
-(NSRange)giftAmountRange;
-(NSURL *)giftPurchaseURL;
@end

