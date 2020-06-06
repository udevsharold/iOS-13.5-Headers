/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VCNetworkAddress : NSObject {

	NSString* _ip;
	NSString* _interfaceName;
	unsigned short _port;
	unsigned short _ipVersion;

}

@property (nonatomic,copy) NSString * ip;                           //@synthesize ip=_ip - In the implementation block
@property (assign,nonatomic) unsigned short port;                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) unsigned short ipVersion;              //@synthesize ipVersion=_ipVersion - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
-(void)dealloc;
-(unsigned short)port;
-(void)setPort:(unsigned short)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)isIPv6;
-(NSString *)ip;
-(void)setIp:(NSString *)arg1 ;
-(void)setIpVersion:(unsigned short)arg1 ;
-(unsigned short)ipVersion;
@end

