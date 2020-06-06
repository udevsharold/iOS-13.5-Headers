/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ATEventScheduler : NSObject {

	NSMutableDictionary* _events;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventAccessQueue;
	BOOL _started;

}
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)removeEvent:(id)arg1 ;
-(void)_scheduleNextEvent;
-(void)_postExpiredEvents;
-(void)scheduleEvent:(id)arg1 afterDelay:(double)arg2 withUserData:(id)arg3 ;
-(void)scheduleRecurringEvent:(id)arg1 withInterval:(double)arg2 afterDelay:(double)arg3 withUserData:(id)arg4 ;
-(BOOL)hasScheduledEvent:(id)arg1 ;
@end

