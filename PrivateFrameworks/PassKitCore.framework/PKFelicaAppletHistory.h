/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKTransitAppletHistory.h>

@class NSSet, NSString, NSNumber, PKFelicaShinkansenTicket, PKFelicaGreenCarTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory {

	NSSet* _existingKeys;
	BOOL _shinkansenTicketActive;
	BOOL _greenCarTicketUsed;
	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceNotificationEnabled;
	long long _type;
	NSString* _transactionID;
	NSNumber* _SPID;
	long long _transactionType;
	PKFelicaShinkansenTicket* _shinkansenTicket;
	PKFelicaGreenCarTicket* _greenCarTicket;

}

@property (nonatomic,readonly) long long type;                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionID;                                                          //@synthesize transactionID=_transactionID - In the implementation block
@property (setter=PID,nonatomic,copy,readonly) NSNumber * SPID;                                                        //@synthesize SPID=_SPID - In the implementation block
@property (nonatomic,readonly) long long transactionType;                                                              //@synthesize transactionType=_transactionType - In the implementation block
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
@property (getter=isShinkansenTicketActive,nonatomic,readonly) BOOL shinkansenTicketActive;                            //@synthesize shinkansenTicketActive=_shinkansenTicketActive - In the implementation block
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) BOOL greenCarTicketUsed;                                    //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (getter=isBalanceAllowedForCommute,nonatomic,readonly) BOOL balanceAllowedForCommute;                        //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (getter=isLowBalanceNotificationEnabled,nonatomic,readonly) BOOL lowBalanceNotificationEnabled;              //@synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled - In the implementation block
@property (nonatomic,copy,readonly) PKFelicaShinkansenTicket * shinkansenTicket;                                       //@synthesize shinkansenTicket=_shinkansenTicket - In the implementation block
@property (nonatomic,readonly) PKFelicaGreenCarTicket * greenCarTicket;                                                //@synthesize greenCarTicket=_greenCarTicket - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)appletTypeForDictionary:(id)arg1 ;
-(void)dealloc;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)transactionID;
-(long long)transactionType;
-(id)initWithDictionary:(id)arg1 source:(long long)arg2 ;
-(BOOL)isInShinkansenStation;
-(void)sanitizeValuesWithState:(id)arg1 ;
-(BOOL)isShinkansenTicketActive;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isLowBalanceNotificationEnabled;
-(PKFelicaShinkansenTicket *)shinkansenTicket;
-(PKFelicaGreenCarTicket *)greenCarTicket;
-(BOOL)isInStation;
-(void)_addEnrouteTransitType:(id)arg1 ;
-(NSNumber *)SPID;
@end

