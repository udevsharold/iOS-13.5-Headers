/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAddressEndpoint;

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {

	unsigned char _prefix;
	unsigned _ipv4SubnetMask;
	NWAddressEndpoint* _address;
	unsigned long long _customType;

}

@property (assign,nonatomic) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NWAddressEndpoint * address;                          //@synthesize address=_address - In the implementation block
@property (assign) unsigned char prefix;                                 //@synthesize prefix=_prefix - In the implementation block
@property (assign) unsigned ipv4SubnetMask;                              //@synthesize ipv4SubnetMask=_ipv4SubnetMask - In the implementation block
@property (readonly) NWAddressEndpoint * subnetMaskAddress; 
+(id)copyTypeDescription;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWAddressEndpoint *)address;
-(unsigned long long)attributeType;
-(unsigned char)prefix;
-(void)setPrefix:(unsigned char)arg1 ;
-(void)setAddress:(NWAddressEndpoint *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)customType;
-(void)setCustomType:(unsigned long long)arg1 ;
-(void)setIpv4SubnetMask:(unsigned)arg1 ;
-(id)initWithAddress:(id)arg1 ipv4SubnetMask:(unsigned)arg2 ;
-(id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 prefix:(unsigned char)arg4 ;
-(id)initWithAddress:(id)arg1 prefix:(unsigned char)arg2 ;
-(id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 ipv4SubnetMask:(unsigned)arg4 ;
-(NWAddressEndpoint *)subnetMaskAddress;
-(unsigned)ipv4SubnetMask;
@end

