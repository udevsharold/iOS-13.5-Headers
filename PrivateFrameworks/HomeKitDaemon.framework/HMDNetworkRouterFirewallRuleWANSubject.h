/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject {

	NSSet* _hostnames;
	NSSet* _addresses;
	HMDNetworkRouterFirewallRuleWANAddressRange* _addressRange;

}

@property (nonatomic,readonly) NSSet * hostnames;                                                       //@synthesize hostnames=_hostnames - In the implementation block
@property (nonatomic,readonly) NSSet * addresses;                                                       //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWANAddressRange * addressRange;              //@synthesize addressRange=_addressRange - In the implementation block
-(NSSet *)addresses;
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(NSSet *)hostnames;
-(HMDNetworkRouterFirewallRuleWANAddressRange *)addressRange;
-(id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3 ;
@end

