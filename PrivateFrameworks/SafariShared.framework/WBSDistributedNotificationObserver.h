/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject;

@interface WBSDistributedNotificationObserver : NSObject {

	NSString* _notificationName;
	long long _notificationType;
	BOOL _observing;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	/*^block*/id _notificationHandler;
	/*^block*/id _timeoutHandler;

}

@property (copy) id notificationHandler; 
@property (copy) id timeoutHandler; 
-(id)init;
-(void)_stopObserving;
-(void)waitWithTimeout:(double)arg1 ;
-(void)_startObserving;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(id)initWithNotificationName:(id)arg1 ;
-(id)initWithNotificationName:(id)arg1 type:(long long)arg2 ;
-(void)_scheduleTimeoutTimerWithTimeout:(double)arg1 ;
-(void)_didReceiveNotification:(id)arg1 ;
-(void)_invalidateTimeoutTimer;
-(void)_didTimeOut;
-(void)setNotificationHandler:(id)arg1 ;
-(id)notificationHandler;
-(void)stopWaiting;
@end

