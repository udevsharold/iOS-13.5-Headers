/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, HDRestorableAlarmScheduler, NSMutableSet, NSString;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	HDRestorableAlarmScheduler* _scheduler;
	/*^block*/id _eventsHandler;
	NSMutableSet* _outstandingEventIdentifiers;
	NSString* _clientIdentifier;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(id)systemScheduler;
-(NSString *)clientIdentifier;
-(BOOL)removeEvents:(id)arg1 error:(id*)arg2 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(void)beginReceivingEventsWithHandler:(/*^block*/id)arg1 ;
-(id)allScheduledEventsWithError:(id*)arg1 ;
-(void)checkForDueEventsWithCompletion:(/*^block*/id)arg1 ;
-(id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(unsigned long long)arg3 ;
-(BOOL)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllEventsWithError:(id*)arg1 ;
-(void)eventsDidFire:(id)arg1 ;
-(BOOL)scheduleEvents:(id)arg1 error:(id*)arg2 ;
-(id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3 ;
@end

