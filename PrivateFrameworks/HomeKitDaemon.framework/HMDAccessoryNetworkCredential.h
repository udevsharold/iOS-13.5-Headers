/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSNumber, NSData;

@interface HMDAccessoryNetworkCredential : NSObject {

	NSUUID* _networkRouterUUID;
	NSNumber* _clientIdentifier;
	NSData* _wiFiPSK;

}

@property (readonly) NSUUID * networkRouterUUID;               //@synthesize networkRouterUUID=_networkRouterUUID - In the implementation block
@property (readonly) NSNumber * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) NSData * wiFiPSK;                         //@synthesize wiFiPSK=_wiFiPSK - In the implementation block
-(NSNumber *)clientIdentifier;
-(NSUUID *)networkRouterUUID;
-(NSData *)wiFiPSK;
-(id)initWithNetworkRouterUUID:(id)arg1 clientIdentifier:(id)arg2 wiFiPSK:(id)arg3 ;
@end

