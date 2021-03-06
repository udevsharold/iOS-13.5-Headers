/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <SpringBoard/SpringBoard-Structs.h>
@class NSRecursiveLock, NSString, NWSystemPathMonitor, NSObject;

@interface SBWiFiManager : NSObject {

	NSRecursiveLock* _lock;
	CFRunLoopRef _callbackRunLoop;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	NSString* _deviceInterfaceName;
	BOOL _mainThread_devicePresent;
	WiFiNetworkRef _currentNetwork;
	WiFiNetworkRef _previousNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _currentNetworkIsIOSHotspot;
	BOOL _currentNetworkIsIOSHotspotHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _mainThread_signalStrengthBars;
	int _mainThread_signalStrengthRSSI;
	BOOL _mainThread_signalStrengthHasBeenSet;
	NWSystemPathMonitor* _systemPathMonitor;
	NSObject*<OS_dispatch_source> _primaryInterfaceUpdateTimeoutSource;
	WiFiNetworkRef _primaryInterface;
	BOOL _primaryInterfaceHasBeenSet;
	BOOL _isPrimaryInterface;
	BOOL _isPrimaryInterfaceChanging;

}
+(id)sharedInstance;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_wifiInterface;
-(BOOL)isAssociated;
-(void)setPowered:(BOOL)arg1 ;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(int)signalStrengthBars;
-(BOOL)isAssociatedToIOSHotspot;
-(void)_runManagerCallbackThread;
-(BOOL)isPowered;
-(WiFiManagerClientRef)_lock_manager;
-(void)_powerStateDidChange;
-(void)_linkDidChange;
-(void)_updateDevicePresence;
-(void)_lock_spawnManagerCallbackThread;
-(void)_updateWiFiDevice;
-(void)_updateCurrentNetwork;
-(void)_updateSignalStrength;
-(void)_updateWiFiState;
-(BOOL)isPrimaryInterface;
-(void)_primaryInterfaceChanged:(BOOL)arg1 ;
-(BOOL)_cachedIsAssociated;
-(void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2 ;
-(void)_lock_setWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(id)currentNetworkName;
-(BOOL)wiFiEnabled;
-(int)signalStrengthRSSI;
-(CFRunLoopRef)wifiRunLoopRef;
@end

