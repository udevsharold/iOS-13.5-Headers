/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDAssertionManager, NSObject, NSMutableSet, NSString;

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver> {

	HDProfile* _profile;
	HDAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _eventCollectors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(id)_queue_eventCollectorsForType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4 ;
-(void)requestPendingEventsThroughDate:(id)arg1 sessionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

