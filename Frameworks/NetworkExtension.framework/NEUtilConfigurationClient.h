/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEConfigurationCommandHandling.h>

@class NSString, NEConfigurationManager, NSMutableArray, NEConfiguration, NSArray, NEFilterProviderConfiguration, NEDNSProxyProviderProtocol;

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling> {

	BOOL _isAlwaysOn;
	NSString* _clientName;
	NEConfigurationManager* _manager;
	NSMutableArray* _createdConfigurations;
	NSMutableArray* _currentConfigurations;
	NSMutableArray* _identities;
	NEConfiguration* _currentConfiguration;

}

@property (readonly) NEConfigurationManager * manager;                                 //@synthesize manager=_manager - In the implementation block
@property (retain) NSMutableArray * createdConfigurations;                             //@synthesize createdConfigurations=_createdConfigurations - In the implementation block
@property (retain) NSMutableArray * currentConfigurations;                             //@synthesize currentConfigurations=_currentConfigurations - In the implementation block
@property (retain) NSMutableArray * identities;                                        //@synthesize identities=_identities - In the implementation block
@property (retain) NEConfiguration * currentConfiguration;                             //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
@property (assign) BOOL enabled; 
@property (assign) BOOL onDemandEnabled; 
@property (assign,nonatomic) BOOL disconnectOnDemandEnabled; 
@property (copy) NSArray * onDemandRules; 
@property (readonly) BOOL isAlwaysOn;                                                  //@synthesize isAlwaysOn=_isAlwaysOn - In the implementation block
@property (readonly) NEFilterProviderConfiguration * filterConfiguration; 
@property (readonly) NEDNSProxyProviderProtocol * dnsProxyConfiguration; 
@property (readonly) NSString * clientName;                                            //@synthesize clientName=_clientName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allClients;
+(void)removeClientWithName:(id)arg1 ;
+(id)clientWithName:(id)arg1 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NEConfigurationManager *)manager;
-(NSMutableArray *)identities;
-(NSString *)clientName;
-(NEConfiguration *)currentConfiguration;
-(BOOL)isAlwaysOn;
-(void)setIdentities:(NSMutableArray *)arg1 ;
-(NSArray *)onDemandRules;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(void)setDisconnectOnDemandEnabled:(BOOL)arg1 ;
-(NEFilterProviderConfiguration *)filterConfiguration;
-(BOOL)onDemandEnabled;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
-(id)initInternalWithClientName:(id)arg1 ;
-(void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)protocolForParameters:(id)arg1 ;
-(BOOL)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetFilterPluginParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setDNSProxyWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetDNSProxyWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setCommonParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetCommonParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setIPSecParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetIPSecParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setProxyParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetProxyParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setProxyServer:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetProxyServer:(id)arg1 errorStr:(id*)arg2 ;
-(void)loadConfigurationWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientName:(id)arg1 ;
-(NEDNSProxyProviderProtocol *)dnsProxyConfiguration;
-(BOOL)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(void)loadConfigurationsForceRefresh:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableArray *)createdConfigurations;
-(void)setCreatedConfigurations:(NSMutableArray *)arg1 ;
-(id)readIndexFromDiskForGivenPatahWithError:(id)arg1 returnError:(id*)arg2 fileDecoder:(id*)arg3 ;
-(id)decodeConfigurationWithIdentifier:(id)arg1 andDecoder:(id)arg2 ;
-(void)addIdentityProperties:(id)arg1 withDomain:(long long)arg2 ;
-(void)reloadIdentityListWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFromDiskForGivenPath:(id)arg1 configName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)swapConfigurationTypeWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setPPPParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetPPPParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)addAppRuleWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)removeAppRuleWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setPathControllerWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)addPathRuleWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)removePathRuleWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)addPersonalDNSWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)removePersonalDNSWithParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)setAlwaysOnParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)unsetAlwaysOnParameters:(id)arg1 errorStr:(id*)arg2 ;
-(BOOL)disconnectOnDemandEnabled;
-(BOOL)isIsAlwaysOn;
@end

