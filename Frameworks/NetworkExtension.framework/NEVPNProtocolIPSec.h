/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSData, NSString, NEKeychainItem, NSArray;

@interface NEVPNProtocolIPSec : NEVPNProtocol {

	NSData* _sharedSecretReference;
	BOOL _useExtendedAuthentication;
	BOOL _extendedAuthPasswordPrompt;
	long long _authenticationMethod;
	NSString* _localIdentifier;
	NSString* _remoteIdentifier;
	NEKeychainItem* _sharedSecretKeychainItem;
	NSArray* _legacyProposals;
	NSArray* _legacyExchangeMode;

}

@property (copy) NEKeychainItem * sharedSecretKeychainItem;              //@synthesize sharedSecretKeychainItem=_sharedSecretKeychainItem - In the implementation block
@property (copy) NSArray * legacyProposals;                              //@synthesize legacyProposals=_legacyProposals - In the implementation block
@property (copy) NSArray * legacyExchangeMode;                           //@synthesize legacyExchangeMode=_legacyExchangeMode - In the implementation block
@property (assign) BOOL extendedAuthPasswordPrompt;                      //@synthesize extendedAuthPasswordPrompt=_extendedAuthPasswordPrompt - In the implementation block
@property (assign) long long authenticationMethod;                       //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
@property (assign) BOOL useExtendedAuthentication;                       //@synthesize useExtendedAuthentication=_useExtendedAuthentication - In the implementation block
@property (copy) NSData * sharedSecretReference;                         //@synthesize sharedSecretReference=_sharedSecretReference - In the implementation block
@property (copy) NSString * localIdentifier;                             //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (copy) NSString * remoteIdentifier;                            //@synthesize remoteIdentifier=_remoteIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)authenticationMethod;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(BOOL)needToUpdateKeychain;
-(void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(BOOL)arg2 ;
-(void)setAuthenticationMethod:(long long)arg1 ;
-(void)setSharedSecretReference:(NSData *)arg1 ;
-(void)setExtendedAuthPasswordPrompt:(BOOL)arg1 ;
-(void)setLegacyExchangeMode:(NSArray *)arg1 ;
-(void)setLegacyProposals:(NSArray *)arg1 ;
-(void)setSharedSecretKeychainItem:(NEKeychainItem *)arg1 ;
-(void)setUseExtendedAuthentication:(BOOL)arg1 ;
-(void)setRemoteIdentifier:(NSString *)arg1 ;
-(BOOL)useExtendedAuthentication;
-(NEKeychainItem *)sharedSecretKeychainItem;
-(SCNetworkInterfaceRef)createInterface;
-(void)migratePasswordsFromPreferences:(SCPreferencesRef)arg1 ;
-(NSString *)remoteIdentifier;
-(NSData *)sharedSecretReference;
-(NSArray *)legacyProposals;
-(NSArray *)legacyExchangeMode;
-(BOOL)extendedAuthPasswordPrompt;
@end

