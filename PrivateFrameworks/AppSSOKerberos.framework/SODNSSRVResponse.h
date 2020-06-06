/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:47 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SODNSSRVResponse : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,retain) NSString * host;                  //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(id)init;
-(id)description;
-(NSString *)host;
-(unsigned short)port;
-(void)setPort:(unsigned short)arg1 ;
-(void)setHost:(NSString *)arg1 ;
@end

