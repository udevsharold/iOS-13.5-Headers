/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFTimer, HAPAccessoryConfiguration, NSString, NSUUID, NSData;

@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject {

	BOOL _allowAddUnauthenticatedAccessory;
	BOOL _provideNetworkCredentialsToAccessory;
	BOOL _setupCodeProvided;
	BOOL _needsUserConsent;
	BOOL _wacAccessory;
	BOOL _legacyWAC;
	long long _linkType;
	HMFTimer* _pairingInterruptionTimer;
	/*^block*/id _addAccessoryCompletionHandler;
	/*^block*/id _addAccessoryProgressHandler;
	/*^block*/id _setupCodeProviderCompletionHandler;
	HMFTimer* _pairingRetryTimer;
	HMFTimer* _reconfirmTimer;
	HAPAccessoryConfiguration* _hapAccessoryConfiguration;
	NSString* _accessoryName;
	NSUUID* _accessoryUUID;
	NSString* _accessoryServerIdentifier;
	NSString* _homeName;
	NSString* _setupCode;
	NSString* _setupID;
	NSData* _ownershipToken;

}

@property (assign,nonatomic) long long linkType;                                                   //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) HMFTimer * pairingInterruptionTimer;                                  //@synthesize pairingInterruptionTimer=_pairingInterruptionTimer - In the implementation block
@property (nonatomic,copy) id addAccessoryCompletionHandler;                                       //@synthesize addAccessoryCompletionHandler=_addAccessoryCompletionHandler - In the implementation block
@property (nonatomic,copy) id addAccessoryProgressHandler;                                         //@synthesize addAccessoryProgressHandler=_addAccessoryProgressHandler - In the implementation block
@property (nonatomic,copy) id setupCodeProviderCompletionHandler;                                  //@synthesize setupCodeProviderCompletionHandler=_setupCodeProviderCompletionHandler - In the implementation block
@property (nonatomic,retain) HMFTimer * pairingRetryTimer;                                         //@synthesize pairingRetryTimer=_pairingRetryTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * reconfirmTimer;                                            //@synthesize reconfirmTimer=_reconfirmTimer - In the implementation block
@property (assign,nonatomic) BOOL allowAddUnauthenticatedAccessory;                                //@synthesize allowAddUnauthenticatedAccessory=_allowAddUnauthenticatedAccessory - In the implementation block
@property (assign,nonatomic) BOOL provideNetworkCredentialsToAccessory;                            //@synthesize provideNetworkCredentialsToAccessory=_provideNetworkCredentialsToAccessory - In the implementation block
@property (assign,nonatomic) BOOL setupCodeProvided;                                               //@synthesize setupCodeProvided=_setupCodeProvided - In the implementation block
@property (assign,nonatomic) BOOL needsUserConsent;                                                //@synthesize needsUserConsent=_needsUserConsent - In the implementation block
@property (nonatomic,readonly) HAPAccessoryConfiguration * hapAccessoryConfiguration;              //@synthesize hapAccessoryConfiguration=_hapAccessoryConfiguration - In the implementation block
@property (nonatomic,retain) NSString * accessoryName;                                             //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSUUID * accessoryUUID;                                               //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,retain) NSString * accessoryServerIdentifier;                                 //@synthesize accessoryServerIdentifier=_accessoryServerIdentifier - In the implementation block
@property (nonatomic,retain) NSString * homeName;                                                  //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,retain) NSString * setupCode;                                                 //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,retain) NSString * setupID;                                                   //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,retain) NSData * ownershipToken;                                              //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (assign,nonatomic) BOOL wacAccessory;                                                    //@synthesize wacAccessory=_wacAccessory - In the implementation block
@property (assign,nonatomic) BOOL legacyWAC;                                                       //@synthesize legacyWAC=_legacyWAC - In the implementation block
-(id)description;
-(NSUUID *)accessoryUUID;
-(NSString *)accessoryName;
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
-(NSData *)ownershipToken;
-(void)setOwnershipToken:(NSData *)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)homeName;
-(void)setHomeName:(NSString *)arg1 ;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(NSString *)setupCode;
-(NSString *)setupID;
-(void)setSetupCode:(NSString *)arg1 ;
-(NSString *)accessoryServerIdentifier;
-(void)setAccessoryServerIdentifier:(NSString *)arg1 ;
-(void)setSetupID:(NSString *)arg1 ;
-(void)setWacAccessory:(BOOL)arg1 ;
-(BOOL)matchesAccessoryServer:(id)arg1 ;
-(BOOL)wacAccessory;
-(BOOL)legacyWAC;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 linkType:(long long)arg3 homeName:(id)arg4 setupCode:(id)arg5 completionHandler:(/*^block*/id)arg6 setupCodeProvider:(/*^block*/id)arg7 wiFiPSK:(id)arg8 country:(id)arg9 ;
-(id)initWithAccessoryDescription:(id)arg1 linkType:(long long)arg2 needsUserConsent:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 progressHandler:(/*^block*/id)arg5 wiFiPSK:(id)arg6 country:(id)arg7 ;
-(BOOL)matchesUnpairedAccessory:(id)arg1 ;
-(HMFTimer *)pairingInterruptionTimer;
-(void)setPairingInterruptionTimer:(HMFTimer *)arg1 ;
-(id)addAccessoryCompletionHandler;
-(void)setAddAccessoryCompletionHandler:(id)arg1 ;
-(id)addAccessoryProgressHandler;
-(void)setAddAccessoryProgressHandler:(id)arg1 ;
-(id)setupCodeProviderCompletionHandler;
-(void)setSetupCodeProviderCompletionHandler:(id)arg1 ;
-(HMFTimer *)pairingRetryTimer;
-(void)setPairingRetryTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)reconfirmTimer;
-(void)setReconfirmTimer:(HMFTimer *)arg1 ;
-(BOOL)allowAddUnauthenticatedAccessory;
-(void)setAllowAddUnauthenticatedAccessory:(BOOL)arg1 ;
-(BOOL)provideNetworkCredentialsToAccessory;
-(void)setProvideNetworkCredentialsToAccessory:(BOOL)arg1 ;
-(BOOL)setupCodeProvided;
-(void)setSetupCodeProvided:(BOOL)arg1 ;
-(BOOL)needsUserConsent;
-(void)setNeedsUserConsent:(BOOL)arg1 ;
-(HAPAccessoryConfiguration *)hapAccessoryConfiguration;
-(void)setLegacyWAC:(BOOL)arg1 ;
@end

