/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying> {

	unsigned _defaultPaymentInstrumentIndex;
	int _nearby;
	NSMutableArray* _paymentInstruments;
	unsigned _protocolVersion;
	NSMutableArray* _supportedSetupFeatures;
	BOOL _deviceDisabled;
	BOOL _locked;
	BOOL _supportsFaceID;
	BOOL _userDisabled;
	SCD_Struct_PK12 _has;

}

@property (assign,nonatomic) BOOL hasLocked; 
@property (assign,nonatomic) BOOL locked;                                          //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentInstruments;                  //@synthesize paymentInstruments=_paymentInstruments - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultPaymentInstrumentIndex; 
@property (assign,nonatomic) unsigned defaultPaymentInstrumentIndex;               //@synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasUserDisabled; 
@property (assign,nonatomic) BOOL userDisabled;                                    //@synthesize userDisabled=_userDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDisabled; 
@property (assign,nonatomic) BOOL deviceDisabled;                                  //@synthesize deviceDisabled=_deviceDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasNearby; 
@property (assign,nonatomic) int nearby;                                           //@synthesize nearby=_nearby - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                             //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsFaceID; 
@property (assign,nonatomic) BOOL supportsFaceID;                                  //@synthesize supportsFaceID=_supportsFaceID - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedSetupFeatures;              //@synthesize supportedSetupFeatures=_supportedSetupFeatures - In the implementation block
+(Class)paymentInstrumentsType;
+(Class)supportedSetupFeaturesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(unsigned)protocolVersion;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(BOOL)locked;
-(BOOL)hasLocked;
-(void)setHasLocked:(BOOL)arg1 ;
-(BOOL)userDisabled;
-(BOOL)deviceDisabled;
-(void)addPaymentInstruments:(id)arg1 ;
-(void)addSupportedSetupFeatures:(id)arg1 ;
-(unsigned long long)paymentInstrumentsCount;
-(void)clearPaymentInstruments;
-(id)paymentInstrumentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedSetupFeaturesCount;
-(void)clearSupportedSetupFeatures;
-(id)supportedSetupFeaturesAtIndex:(unsigned long long)arg1 ;
-(void)setDefaultPaymentInstrumentIndex:(unsigned)arg1 ;
-(void)setHasDefaultPaymentInstrumentIndex:(BOOL)arg1 ;
-(BOOL)hasDefaultPaymentInstrumentIndex;
-(void)setUserDisabled:(BOOL)arg1 ;
-(void)setHasUserDisabled:(BOOL)arg1 ;
-(BOOL)hasUserDisabled;
-(void)setDeviceDisabled:(BOOL)arg1 ;
-(void)setHasDeviceDisabled:(BOOL)arg1 ;
-(BOOL)hasDeviceDisabled;
-(int)nearby;
-(void)setNearby:(int)arg1 ;
-(void)setHasNearby:(BOOL)arg1 ;
-(BOOL)hasNearby;
-(id)nearbyAsString:(int)arg1 ;
-(int)StringAsNearby:(id)arg1 ;
-(void)setSupportsFaceID:(BOOL)arg1 ;
-(void)setHasSupportsFaceID:(BOOL)arg1 ;
-(BOOL)hasSupportsFaceID;
-(NSMutableArray *)paymentInstruments;
-(void)setPaymentInstruments:(NSMutableArray *)arg1 ;
-(unsigned)defaultPaymentInstrumentIndex;
-(BOOL)supportsFaceID;
-(NSMutableArray *)supportedSetupFeatures;
-(void)setSupportedSetupFeatures:(NSMutableArray *)arg1 ;
@end

