/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTBatteryMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _batteryState;

}
+(id)sharedInstance;
-(id)init;
-(unsigned char)batteryState;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)_checkBatteryState;
-(void)_didReceiveBatteryStatusChanged:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withBatteryState:(unsigned char)arg2 ;
-(void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)arg1 ;
@end

