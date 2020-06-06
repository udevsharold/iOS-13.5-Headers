/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARDevicePerformanceMonitorDelegate, OS_dispatch_queue;
@class ARDevicePerformanceLevel, NSTimer, NSObject;

@interface ARDevicePerformanceMonitor : NSObject {

	id<ARDevicePerformanceMonitorDelegate> _delegate;
	ARDevicePerformanceLevel* _currentDeviceCondition;
	double _lastNotifiedTimeStamp;
	ARDevicePerformanceLevel* _pendingDeviceCondition;
	NSTimer* _notificationTimer;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (retain) ARDevicePerformanceLevel * currentDeviceCondition;              //@synthesize currentDeviceCondition=_currentDeviceCondition - In the implementation block
@property (assign) double lastNotifiedTimeStamp;                                   //@synthesize lastNotifiedTimeStamp=_lastNotifiedTimeStamp - In the implementation block
@property (retain) ARDevicePerformanceLevel * pendingDeviceCondition;              //@synthesize pendingDeviceCondition=_pendingDeviceCondition - In the implementation block
@property (retain) NSTimer * notificationTimer;                                    //@synthesize notificationTimer=_notificationTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (__weak) id<ARDevicePerformanceMonitorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<ARDevicePerformanceMonitorDelegate>)delegate;
-(void)setDelegate:(id<ARDevicePerformanceMonitorDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSTimer *)notificationTimer;
-(void)setNotificationTimer:(NSTimer *)arg1 ;
-(id)_initialDeviceCondition;
-(void)_thermalStateChangedNotification:(id)arg1 ;
-(void)_processThermalStateChanged:(long long)arg1 ;
-(double)lastNotifiedTimeStamp;
-(ARDevicePerformanceLevel *)currentDeviceCondition;
-(ARDevicePerformanceLevel *)pendingDeviceCondition;
-(void)setLastNotifiedTimeStamp:(double)arg1 ;
-(void)_updateDelegateWithDeviceCondition:(id)arg1 ;
-(void)_clearNotificationTimer;
-(void)_notificationTimerFired:(id)arg1 ;
-(BOOL)_shouldUpdateDelegateForDevicePerformanceLevel:(id)arg1 ;
-(void)setPendingDeviceCondition:(ARDevicePerformanceLevel *)arg1 ;
-(void)_startNotificationTimerIfNeeded;
-(void)setCurrentDeviceCondition:(ARDevicePerformanceLevel *)arg1 ;
-(id)deviceCondition;
@end

