/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isSoftwareUpdateCheckingRunning;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isSoftwareUpdateCheckingRunning;
-(BOOL)_checkSoftwareUpdateCheckingState;
-(void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)arg1 ;
-(unsigned char)_softwareUpdateCheckingState;
-(void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(BOOL)arg2 ;
-(void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)arg1 ;
@end

