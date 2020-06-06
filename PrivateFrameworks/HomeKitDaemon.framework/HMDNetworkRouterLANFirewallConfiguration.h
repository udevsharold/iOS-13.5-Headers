/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

@interface HMDNetworkRouterLANFirewallConfiguration : NSObject <NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterLANFirewall* _type;
	HMDNetworkRouterLANFirewallRuleList* _ruleList;

}

@property (nonatomic,retain) HMDNetworkRouterLANFirewall * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANFirewallRuleList * ruleList;              //@synthesize ruleList=_ruleList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)configurationFromFirewallRuleConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterLANFirewall *)type;
-(void)setType:(HMDNetworkRouterLANFirewall *)arg1 ;
-(HMDNetworkRouterLANFirewallRuleList *)ruleList;
-(void)setRuleList:(HMDNetworkRouterLANFirewallRuleList *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithType:(id)arg1 ruleList:(id)arg2 ;
@end

