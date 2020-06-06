/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol WFDiagnosticsProviderContext <WFProviderContext>
@property (nonatomic,copy) id refreshHandler; 
@property (nonatomic,readonly) NSString * security; 
@property (nonatomic,readonly) NSString * securityAdvice; 
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) NSNumber * channel; 
@property (nonatomic,readonly) NSString * channelString; 
@property (nonatomic,readonly) NSString * channelWidth; 
@property (nonatomic,readonly) NSString * channelPerformance; 
@property (nonatomic,readonly) NSString * rssi; 
@property (nonatomic,readonly) NSString * cca; 
@property (nonatomic,readonly) NSString * adviceString; 
@property (nonatomic,readonly) NSString * beaconPER; 
@property (nonatomic,readonly) NSString * transmitPER; 
@property (nonatomic,readonly) NSString * recvFrames; 
@property (nonatomic,readonly) NSString * rssiPerformance; 
@property (nonatomic,readonly) BOOL captive; 
@property (nonatomic,readonly) BOOL managed; 
@property (nonatomic,readonly) BOOL multiAP; 
@property (nonatomic,readonly) NSString * deployment; 
@property (nonatomic,readonly) NSString * motion; 
@property (nonatomic,readonly) NSString * gateway; 
@property (nonatomic,readonly) NSString * internet; 
@property (nonatomic,readonly) NSString * probeFooter; 
@property (nonatomic,readonly) NSString * awdl; 
@property (nonatomic,readonly) NSString * bluetooth; 
@property (nonatomic,readonly) NSString * scan; 
@property (nonatomic,readonly) NSString * coexFooter; 
@required
-(BOOL)managed;
-(NSNumber *)channel;
-(NSString *)rssi;
-(NSString *)channelWidth;
-(NSString *)cca;
-(NSString *)BSSID;
-(NSString *)motion;
-(NSString *)gateway;
-(id)refreshHandler;
-(void)setRefreshHandler:(/*^block*/id)arg1;
-(NSString *)security;
-(NSString *)securityAdvice;
-(NSString *)channelString;
-(NSString *)channelPerformance;
-(NSString *)adviceString;
-(NSString *)beaconPER;
-(NSString *)transmitPER;
-(NSString *)recvFrames;
-(NSString *)rssiPerformance;
-(BOOL)captive;
-(BOOL)multiAP;
-(NSString *)deployment;
-(NSString *)internet;
-(NSString *)probeFooter;
-(NSString *)awdl;
-(NSString *)bluetooth;
-(NSString *)scan;
-(NSString *)coexFooter;

@end

