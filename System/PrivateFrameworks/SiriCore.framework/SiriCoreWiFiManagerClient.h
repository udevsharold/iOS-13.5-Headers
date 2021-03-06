/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreWiFiManagerClient : NSObject {

	int _type;
	WiFiManagerClientRef _primitiveWiFiManagerClient;
	long long _rssi;
	long long _snr;

}
-(id)init;
-(void)dealloc;
-(BOOL)isWifiEnabled;
-(void)releaseWiFiAssertion;
-(void)acquireWiFiAssertion:(long long)arg1 ;
-(WiFiManagerClientRef)_primitiveWiFiManagerClient;
-(void)_setWiFiManagerClientType:(int)arg1 ;
-(BOOL)hasAssociatedNetworkWithRSSI:(long long*)arg1 andSNR:(long long*)arg2 andPhyMode:(id*)arg3 andChannelInfo:(id*)arg4 isCaptive:(BOOL*)arg5 ;
-(void)registerOneShotEnabledHandler:(/*^block*/id)arg1 ;
@end

