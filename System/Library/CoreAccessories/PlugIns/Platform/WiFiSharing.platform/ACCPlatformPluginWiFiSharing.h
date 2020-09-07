/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/WiFiSharing.platform/WiFiSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCPlatformWiFiSharingProtocol.h>
#import <libobjc.A.dylib/ACCPlatformPluginProtocol.h>

@class NSString;

@interface ACCPlatformPluginWiFiSharing : NSObject <ACCPlatformWiFiSharingProtocol, ACCPlatformPluginProtocol> {

	BOOL _hasWAPICapability;
	BOOL _isRunning;

}

@property (assign,nonatomic) BOOL isRunning;                        //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(BOOL)hasWAPICapability;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(BOOL)isDeviceConnectedToWiFi;
-(id)copyDeviceWiFiNetworkInformation;
-(BOOL)handleAccessoryWiFiInformation:(id)arg1 ;
-(BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)arg1 ;
@end
