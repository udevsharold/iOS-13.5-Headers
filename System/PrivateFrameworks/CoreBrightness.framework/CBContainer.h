/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject;

@interface CBContainer : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	/*^block*/id _notificationBlock;

}
-(void)dealloc;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleWithDispatchQueue:(id)arg1 ;
@end

