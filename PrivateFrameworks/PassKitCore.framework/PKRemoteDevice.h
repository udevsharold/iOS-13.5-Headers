/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray, PKRemotePaymentInstrument, NSUUID;

@interface PKRemoteDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isLocked;
	BOOL _userDisabled;
	BOOL _deviceDisabled;
	BOOL _supportsFaceID;
	NSString* _deviceName;
	long long _type;
	NSString* _modelIdentifier;
	NSDate* _lastSeen;
	long long _proximityState;
	NSArray* _remotePaymentInstruments;
	PKRemotePaymentInstrument* _defaultRemotePaymentInstrument;
	NSString* _uniqueID;
	NSUUID* _bluetoothUUID;
	NSArray* _supportedSetupFeatures;

}

@property (nonatomic,retain) NSString * deviceName;                                                   //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long type;                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * modelIdentifier;                                              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastSeen;                                                       //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,readonly) BOOL canMakePayments; 
@property (assign,nonatomic) long long proximityState;                                                //@synthesize proximityState=_proximityState - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                                                           //@synthesize isLocked=_isLocked - In the implementation block
@property (assign,nonatomic) BOOL userDisabled;                                                       //@synthesize userDisabled=_userDisabled - In the implementation block
@property (assign,nonatomic) BOOL deviceDisabled;                                                     //@synthesize deviceDisabled=_deviceDisabled - In the implementation block
@property (nonatomic,retain) NSArray * remotePaymentInstruments;                                      //@synthesize remotePaymentInstruments=_remotePaymentInstruments - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * defaultRemotePaymentInstrument;              //@synthesize defaultRemotePaymentInstrument=_defaultRemotePaymentInstrument - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                       //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSUUID * bluetoothUUID;                                                  //@synthesize bluetoothUUID=_bluetoothUUID - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceID;                                                     //@synthesize supportsFaceID=_supportsFaceID - In the implementation block
@property (nonatomic,retain) NSArray * supportedSetupFeatures;                                        //@synthesize supportedSetupFeatures=_supportedSetupFeatures - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)acceptedComparatorForSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webService:(id)arg3 ;
+(/*^block*/id)preferenceComparator;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)modelIdentifier;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(BOOL)isLocked;
-(long long)proximityState;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(NSDate *)lastSeen;
-(void)setLastSeen:(NSDate *)arg1 ;
-(BOOL)canMakePayments;
-(void)setProximityState:(long long)arg1 ;
-(BOOL)userDisabled;
-(BOOL)deviceDisabled;
-(PKRemotePaymentInstrument *)defaultRemotePaymentInstrument;
-(NSArray *)remotePaymentInstruments;
-(void)setRemotePaymentInstruments:(NSArray *)arg1 ;
-(void)setUserDisabled:(BOOL)arg1 ;
-(void)setDeviceDisabled:(BOOL)arg1 ;
-(void)setSupportsFaceID:(BOOL)arg1 ;
-(BOOL)supportsFaceID;
-(NSArray *)supportedSetupFeatures;
-(void)setSupportedSetupFeatures:(NSArray *)arg1 ;
-(long long)_deviceTypeForModelIdentifier:(id)arg1 ;
-(BOOL)isEqualToRemoteDevice:(id)arg1 ;
-(id)initWithIDSDevice:(id)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)setDefaultRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(NSUUID *)bluetoothUUID;
-(void)setBluetoothUUID:(NSUUID *)arg1 ;
-(id)pk_idsDestination;
@end

