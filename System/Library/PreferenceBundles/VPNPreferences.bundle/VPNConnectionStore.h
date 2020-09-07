/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VPNPreferences/VPNPreferences-Structs.h>
@class VPNConnection, NSUUID, NSMutableArray, NSMutableDictionary, NSArray, NEConfigurationManager, NSObject;

@interface VPNConnectionStore : NSObject {

	BOOL _gradeCurrentConnectionHasBeenSet[4];
	VPNConnection* _gradeCurrentConnection[4];
	NSUUID* _gradeActiveVPNID[4];
	BOOL _gradeActiveVPNIDLoaded[4];
	NSMutableArray* _gradeVPNServiceIDs[4];
	NSMutableDictionary* _connectionDict[4];
	unsigned _vpnServiceCountDirty;
	unsigned _vpnServiceCount;
	NSArray* _configurations;
	NEConfigurationManager* _configurationManager;
	NSObject*<OS_dispatch_queue> _storeQueue;

}

@property (retain) NSArray * configurations;                                   //@synthesize configurations=_configurations - In the implementation block
@property (retain) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> storeQueue;                    //@synthesize storeQueue=_storeQueue - In the implementation block
@property (assign) unsigned vpnServiceCountDirty;                              //@synthesize vpnServiceCountDirty=_vpnServiceCountDirty - In the implementation block
@property (assign) unsigned vpnServiceCount;                                   //@synthesize vpnServiceCount=_vpnServiceCount - In the implementation block
+(id)sharedInstance;
+(CFStringRef)vpnTypeFromConnectionType:(unsigned long long)arg1 ;
+(id)applicationNameForConfiguration:(id)arg1 withGrade:(unsigned long long)arg2 ;
+(unsigned long long)connectionTypeFromVPNType:(CFStringRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)queue;
-(void)setConfigurations:(NSArray *)arg1 ;
-(NSArray *)configurations;
-(NEConfigurationManager *)configurationManager;
-(NSObject*<OS_dispatch_queue>)storeQueue;
-(void)setConfigurationManager:(NEConfigurationManager *)arg1 ;
-(id)optionsForServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)_configurationChanged;
-(void)setVpnServiceCountDirty:(unsigned)arg1 ;
-(id)currentConnectionsWithGrade:(unsigned long long)arg1 ;
-(unsigned long long)aggregateStatus;
-(id)aggregateAlert;
-(id)vpnServiceTotalCount;
-(id)currentConnectionWithGrade:(unsigned long long)arg1 ;
-(void)_connectionsChanged;
-(id)activeVPNIDWithGrade:(unsigned long long)arg1 ;
-(id)connectionWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)activeVPNIDsWithGrade:(unsigned long long)arg1 ;
-(id)currentConnection:(BOOL)arg1 withGrade:(unsigned long long)arg2 ;
-(id)currentAppVPNConnections:(BOOL)arg1 ;
-(BOOL)setOptions:(id)arg1 toConfiguration:(id)arg2 ;
-(BOOL)saveActiveVPNIDToPreferences:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)copyActiveVPNIDsFromPrefsForGrade:(unsigned long long)arg1 ;
-(BOOL)isTypeEnabledWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 outProviderAvailable:(BOOL*)arg3 ;
-(id)vpnServicesForCurrentSetWithGrade:(unsigned long long)arg1 ;
-(BOOL)disableToggle;
-(id)aggregateStatusText;
-(unsigned long long)currentOnlyConnectionGrade;
-(BOOL)isUserCreatedVPN:(id)arg1 ;
-(BOOL)isProfileBacked:(id)arg1 ;
-(void)removeConnection:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)_defaultDictForType:(unsigned long long)arg1 ;
-(BOOL)createVPNWithOptions:(id)arg1 ;
-(BOOL)updateVPNWithServiceID:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)deleteVPNWithServiceID:(id)arg1 ;
-(void)setActiveVPNID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)isActiveVPNID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)alwaysOnToggleEnabledForServiceID:(id)arg1 ;
-(id)organizationForServiceID:(id)arg1 ;
-(id)organizationForService:(SCNetworkServiceRef)arg1 ;
-(id)getProfileIDForServiceID:(id)arg1 ;
-(id)vpnServiceCountWithGrade:(unsigned long long)arg1 ;
-(BOOL)gradePresent:(unsigned long long)arg1 ;
-(id)appNameForServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)enable:(BOOL)arg1 serviceID:(id)arg2 withGrade:(unsigned long long)arg3 ;
-(BOOL)isEnabledWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)triggerLocalAuthenticationForConfigurationIdentifier:(id)arg1 requestedByApp:(id)arg2 ;
-(void)setStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)vpnServiceCountDirty;
-(unsigned)vpnServiceCount;
-(void)setVpnServiceCount:(unsigned)arg1 ;
@end
