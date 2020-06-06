/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject;

@interface CWFIO80211 : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	IONotificationPortRef _portRef;
	unsigned _publishIO80211Interface;
	unsigned _terminatedIO80211Interface;
	unsigned _publishIO80211VirtualInterface;
	unsigned _terminatedIO80211VirtualInterface;
	unsigned _publishIO80211SkywalkInterface;
	unsigned _terminatedIO80211SkywalkInterface;
	BOOL _isMonitoringEvents;
	/*^block*/id _eventHandler;

}

@property (copy) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(id)__IO80211InfoMatchingService:(id)arg1 interfaceName:(id)arg2 ;
-(id)__IO80211InfoConformingToService:(id)arg1 interfaceName:(id)arg2 ;
-(id)IO80211ControllerInfo:(id)arg1 error:(id*)arg2 ;
-(id)IO80211VirtualInterfaceInfo:(id)arg1 error:(id*)arg2 ;
-(id)IO80211InterfaceInfo:(id)arg1 error:(id*)arg2 ;
-(id)IO80211SkywalkInterfaceInfo:(id)arg1 error:(id*)arg2 ;
@end

