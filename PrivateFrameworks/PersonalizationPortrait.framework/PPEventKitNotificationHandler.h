/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNotificationHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface PPEventKitNotificationHandler : PPNotificationHandler {

	atomic_flag _isFiring;
	atomic_flag _hasWaiter;
	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _eventsQueue;
	NSObject*<OS_dispatch_queue> _waiterQueue;

}
-(id)description;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_clearFlags;
-(void)_executeBlocksWithEvents:(id)arg1 ;
-(void)_pushEvents:(id)arg1 ;
-(id)_popEvents;
-(void)fireWithEvents:(id)arg1 ;
@end

