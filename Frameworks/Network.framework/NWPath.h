/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path;
@class NSObject, NSArray, NSString, NWInterface, NSUUID, NWParameters, NWEndpoint, NWBrowseDescriptor, NWAdvertiseDescriptor;

@interface NWPath : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path> _internalPath;

}

@property (readonly) NSObject*<OS_nw_path> internalPath;                                                 //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned fallbackInterfaceIndex; 
@property (nonatomic,readonly) BOOL fallbackIsWeak; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) NSArray * dnsServersAsStrings; 
@property (nonatomic,readonly) NSArray * gateways; 
@property (nonatomic,readonly) NSArray * flows; 
@property (nonatomic,readonly) NSString * statusAsString; 
@property (nonatomic,readonly) NWInterface * connectedInterface; 
@property (getter=isListener,nonatomic,readonly) BOOL listener; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) NSUUID * clientID; 
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWInterface * scopedInterface; 
@property (nonatomic,readonly) NWInterface * fallbackInterface; 
@property (getter=isFlowDivert,nonatomic,readonly) BOOL flowDivert; 
@property (nonatomic,readonly) unsigned flowDivertControlUnit; 
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered; 
@property (nonatomic,readonly) unsigned filterControlUnit; 
@property (nonatomic,readonly) int dnsServiceID; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (nonatomic,readonly) unsigned policyID; 
@property (getter=isRoaming,nonatomic,readonly) BOOL roaming; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) long long maximumDatagramSize; 
@property (nonatomic,readonly) unsigned long long secondsSinceInterfaceChange; 
@property (nonatomic,readonly) long long reason; 
@property (nonatomic,readonly) NSString * reasonDescription; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NWParameters * derivedParameters; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
@property (nonatomic,readonly) BOOL supportsDNS; 
@property (getter=isEligibleForCrazyIvan46,nonatomic,readonly) BOOL eligibleForCrazyIvan46; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NWEndpoint * effectiveLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * effectiveRemoteEndpoint; 
@property (nonatomic,readonly) NSArray * proxySettings; 
@property (nonatomic,readonly) NSArray * dnsServers; 
@property (nonatomic,readonly) NSArray * dnsSearchDomains; 
@property (nonatomic,readonly) BOOL hasBrowseDescriptor; 
@property (nonatomic,readonly) NWBrowseDescriptor * browseDescriptor; 
@property (nonatomic,readonly) BOOL hasAdvertiseDescriptor; 
@property (nonatomic,readonly) NWAdvertiseDescriptor * advertiseDescriptor; 
@property (getter=isPerAppVPN,nonatomic,readonly) BOOL perAppVPN; 
@property (nonatomic,readonly) long long status; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
+(id)createStringFromStatus:(long long)arg1 ;
+(id)allClientIDs;
+(id)pathForClientID:(id)arg1 ;
+(id)pathWithProtocolBufferData:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)reason;
-(id)initWithPath:(id)arg1 ;
-(NWEndpoint *)endpoint;
-(long long)status;
-(NWInterface *)interface;
-(NWParameters *)parameters;
-(NSArray *)flows;
-(NSArray *)gateways;
-(BOOL)isExpensive;
-(BOOL)isConstrained;
-(BOOL)isLocal;
-(NSUUID *)clientID;
-(BOOL)isDirect;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(BOOL)isViable;
-(BOOL)fallbackEligible;
-(unsigned long long)secondsSinceInterfaceChange;
-(NSObject*<OS_nw_path>)internalPath;
-(id)createProtocolBufferObject;
-(NSString *)statusAsString;
-(BOOL)isEqualToPath:(id)arg1 ;
-(BOOL)isListener;
-(BOOL)isPerAppVPN;
-(BOOL)shouldProbeConnectivity;
-(BOOL)isLinkQualityAbort;
-(BOOL)isListenerInterfaceSpecific;
-(BOOL)usesInterfaceType:(long long)arg1 ;
-(BOOL)usesNetworkAgentType:(Class)arg1 ;
-(BOOL)usesNetworkAgent:(id)arg1 ;
-(id)networkAgentsOfType:(Class)arg1 ;
-(id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1 ;
-(NWInterface *)scopedInterface;
-(id)delegateInterface;
-(NWInterface *)fallbackInterface;
-(NSArray *)dnsServers;
-(NSArray *)dnsServersAsStrings;
-(NSArray *)dnsSearchDomains;
-(long long)mtu;
-(long long)maximumDatagramSize;
-(NSString *)reasonDescription;
-(BOOL)isFlowDivert;
-(unsigned)flowDivertControlUnit;
-(id)copyFlowDivertToken;
-(BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL*)arg2 ;
-(BOOL)hasUnsatisfiedFallbackAgent;
-(int)dnsServiceID;
-(BOOL)isFiltered;
-(unsigned)filterControlUnit;
-(unsigned)policyID;
-(BOOL)isRoaming;
-(NWEndpoint *)effectiveLocalEndpoint;
-(NWEndpoint *)effectiveRemoteEndpoint;
-(NWInterface *)connectedInterface;
-(BOOL)hasBrowseDescriptor;
-(NWBrowseDescriptor *)browseDescriptor;
-(BOOL)hasAdvertiseDescriptor;
-(NWAdvertiseDescriptor *)advertiseDescriptor;
-(NWParameters *)derivedParameters;
-(unsigned)fallbackInterfaceIndex;
-(BOOL)fallbackIsWeak;
-(NSArray *)proxySettings;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(BOOL)supportsDNS;
-(BOOL)isEligibleForCrazyIvan46;
@end

