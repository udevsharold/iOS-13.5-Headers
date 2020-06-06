/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>
#import <libobjc.A.dylib/NFLoyaltyAndPaymentSessionDelegate.h>

@protocol PKContactlessInterfaceSessionDelegate, OS_dispatch_queue;
@class PKPaymentApplication, PKPaymentPass, NSArray, PKFieldProperties, NSObject, PKTransitAppletHistory, NSString;

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate> {

	PKPaymentApplication* _activatedPaymentApplication;
	PKPaymentPass* _activatedPaymentPass;
	NSArray* _activatedValueAddedServicePasses;
	NSArray* _activatedHostCards;
	NSArray* _valueAddedServiceTransactions;
	PKFieldProperties* _fieldProperties;
	PKFieldProperties* _fieldPropertiesToLookup;
	unsigned long long _transactionStartTime;
	AB _fieldPresent;
	BOOL _handlingExpress;
	unsigned long long _expressActivity;
	BOOL _felicaStateChanged;
	unsigned long long _state;
	id<PKContactlessInterfaceSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _prioritySessionExists;
	AB _persistentCardEmulation;
	unsigned char _cardEmulationMode;

}

@property (nonatomic,readonly) BOOL persistentCardEmulationQueued; 
@property (nonatomic,readonly) PKPaymentApplication * activatedPaymentApplication; 
@property (nonatomic,readonly) PKPaymentPass * activatedPaymentPass; 
@property (nonatomic,readonly) NSArray * activatedValueAddedServicePasses;                           //@synthesize activatedValueAddedServicePasses=_activatedValueAddedServicePasses - In the implementation block
@property (nonatomic,readonly) BOOL fieldPresent; 
@property (nonatomic,readonly) PKFieldProperties * fieldProperties;                                  //@synthesize fieldProperties=_fieldProperties - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) PKTransitAppletHistory * transitAppletState; 
@property (assign,nonatomic,__weak) id<PKContactlessInterfaceSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2 ;
-(id<PKContactlessInterfaceSessionDelegate>)delegate;
-(void)setDelegate:(id<PKContactlessInterfaceSessionDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(void)_sendPersistentCardEmulationForPaymentPass:(id)arg1 paymentApplication:(id)arg2 ;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 ;
-(id)_appletForPaymentApplication:(id)arg1 ;
-(BOOL)activateValueAddedServicePasses:(id)arg1 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(BOOL)arg2 ;
-(void)_endLookupAndNotifyForFieldProperties:(id)arg1 ;
-(id)_appletWithIdentifier:(id)arg1 ;
-(id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2 ;
-(void)_processEndEvent:(id)arg1 withPartialContext:(id)arg2 groupHeadIdentifier:(id)arg3 groupAppletIdentifiers:(id)arg4 ;
-(void)_startLookupForFieldProperties:(id)arg1 ;
-(void)_endFieldPropertiesLookup;
-(void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2 ;
-(void)loyaltyAndPaymentSessionDidExitField:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2 ;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1 ;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned)arg2 withObject:(id)arg3 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(BOOL)arg2 ;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2 ;
-(BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3 ;
-(BOOL)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1 ;
-(BOOL)stopCardEmulation;
-(void)resetExpressState;
-(BOOL)queuePersistentCardEmulation;
-(BOOL)resetPersistentCardEmulation;
-(BOOL)paymentApplicationSupportsAutomaticAuthorization:(id)arg1 ;
-(PKPaymentApplication *)activatedPaymentApplication;
-(PKPaymentPass *)activatedPaymentPass;
-(PKTransitAppletHistory *)transitAppletState;
-(BOOL)fieldPresent;
-(BOOL)persistentCardEmulationQueued;
-(NSArray *)activatedValueAddedServicePasses;
-(PKFieldProperties *)fieldProperties;
@end

