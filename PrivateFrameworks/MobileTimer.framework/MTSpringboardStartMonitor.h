/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MTObserverStore, NSObject;

@interface MTSpringboardStartMonitor : NSObject {

	int _notifyToken;
	BOOL _isSpringBoardStarted;
	MTObserverStore* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(BOOL)_checkSpringBoardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(BOOL)isSpringboardStarted;
@end

