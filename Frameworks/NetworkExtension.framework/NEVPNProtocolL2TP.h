/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolPPP.h>

@class NEKeychainItem, NSString, NEIdentityKeychainItem, NSData;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {

	BOOL _machineIdentityDataImported;
	long long _machineAuthenticationMethod;
	NEKeychainItem* _sharedSecretKeychainItem;
	NSString* _localIdentifier;
	NEIdentityKeychainItem* _machineIdentity;
	NSData* _machineIdentityDataInternal;

}

@property (retain) NEIdentityKeychainItem * machineIdentity;              //@synthesize machineIdentity=_machineIdentity - In the implementation block
@property (copy) NSData * machineIdentityDataInternal;                    //@synthesize machineIdentityDataInternal=_machineIdentityDataInternal - In the implementation block
@property (assign) BOOL machineIdentityDataImported;                      //@synthesize machineIdentityDataImported=_machineIdentityDataImported - In the implementation block
@property (assign) long long machineAuthenticationMethod;                 //@synthesize machineAuthenticationMethod=_machineAuthenticationMethod - In the implementation block
@property (copy) NSData * sharedSecretReference; 
@property (copy) NEKeychainItem * sharedSecretKeychainItem;               //@synthesize sharedSecretKeychainItem=_sharedSecretKeychainItem - In the implementation block
@property (copy) NSData * machineIdentityReference; 
@property (copy) NSString * localIdentifier;                              //@synthesize localIdentifier=_localIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(BOOL)needToUpdateKeychain;
-(void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(BOOL)arg2 ;
-(void)setSharedSecretReference:(NSData *)arg1 ;
-(void)setSharedSecretKeychainItem:(NEKeychainItem *)arg1 ;
-(void)setMachineIdentityReference:(NSData *)arg1 ;
-(void)setMachineAuthenticationMethod:(long long)arg1 ;
-(NEKeychainItem *)sharedSecretKeychainItem;
-(long long)machineAuthenticationMethod;
-(NSData *)machineIdentityReference;
-(SCNetworkInterfaceRef)createInterface;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(void)migratePasswordsFromPreferences:(SCPreferencesRef)arg1 ;
-(NSData *)sharedSecretReference;
-(NEIdentityKeychainItem *)machineIdentity;
-(NSData *)machineIdentityDataInternal;
-(BOOL)machineIdentityDataImported;
-(void)setMachineIdentity:(NEIdentityKeychainItem *)arg1 ;
-(void)setMachineIdentityDataInternal:(NSData *)arg1 ;
-(void)setMachineIdentityDataImported:(BOOL)arg1 ;
-(id)copyLegacyIPSecDictionary;
-(void)setIPSecSettingsFromLegacyDictionary:(id)arg1 ;
@end

