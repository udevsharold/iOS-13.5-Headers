/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUPersonalRequestsDevicesItemModule, HFItem, HMHome, HFStaticItemProvider, HFUserItem, HMAssistantAccessControl, HMUser;

@interface HUPersonalRequestsEditorItemManager : HFItemManager {

	BOOL _onlyShowDeviceSwitches;
	HUPersonalRequestsDevicesItemModule* _prDevicesModule;
	HFItem* _requireAuthenticationForSecureRequestsItem;
	HFItem* _neverRequireAuthenticationItem;
	HMHome* _homeForUser;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HUPersonalRequestsDevicesItemModule * prDevicesModule;              //@synthesize prDevicesModule=_prDevicesModule - In the implementation block
@property (nonatomic,readonly) HMHome * homeForUser;                                             //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,readonly) HFStaticItemProvider * staticItemProvider;                        //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,readonly) HMAssistantAccessControl * accessControl; 
@property (assign,nonatomic) BOOL onlyShowDeviceSwitches;                                        //@synthesize onlyShowDeviceSwitches=_onlyShowDeviceSwitches - In the implementation block
@property (nonatomic,readonly) HMUser * user; 
@property (nonatomic,readonly) HFItem * requireAuthenticationForSecureRequestsItem;              //@synthesize requireAuthenticationForSecureRequestsItem=_requireAuthenticationForSecureRequestsItem - In the implementation block
@property (nonatomic,readonly) HFItem * neverRequireAuthenticationItem;                          //@synthesize neverRequireAuthenticationItem=_neverRequireAuthenticationItem - In the implementation block
@property (assign,nonatomic) BOOL personalRequestsAuthenticationRequired; 
-(HMUser *)user;
-(HMAssistantAccessControl *)accessControl;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUPersonalRequestsDevicesItemModule *)prDevicesModule;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 onlyShowDeviceSwitches:(BOOL)arg3 ;
-(HMHome *)homeForUser;
-(HFStaticItemProvider *)staticItemProvider;
-(BOOL)onlyShowDeviceSwitches;
-(id)_commitUpdateToAccessControl:(id)arg1 ;
-(void)setOnlyShowDeviceSwitches:(BOOL)arg1 ;
-(HFItem *)requireAuthenticationForSecureRequestsItem;
-(HFItem *)neverRequireAuthenticationItem;
-(void)setPersonalRequestsAuthenticationRequired:(BOOL)arg1 ;
-(BOOL)_arePersonalRequestsEnabled;
-(BOOL)personalRequestsAuthenticationRequired;
-(void)setPrDevicesModule:(HUPersonalRequestsDevicesItemModule *)arg1 ;
@end

