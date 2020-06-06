/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSSpeechControllerMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSSpeechControllerMonitorImpl : CSSpeechControllerMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _pendingRecordingStopUUID;

}
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 ;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 withContext:(id)arg3 ;
-(void)setRecordState:(unsigned long long)arg1 ;
-(void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2 withEventUUID:(id)arg3 withContext:(id)arg4 ;
-(void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2 ;
@end

