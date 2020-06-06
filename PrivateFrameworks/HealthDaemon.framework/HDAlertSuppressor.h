/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, HDAssertionManager, NSMutableSet, NSString;

@interface HDAlertSuppressor : NSObject <HDProcessStateObserver, HDAssertionObserver> {

	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	NSMutableSet* _waitingForSuspension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)processTerminated:(id)arg1 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)processSuspended:(id)arg1 ;
-(void)processResumed:(id)arg1 ;
-(void)processDidEnterBackground:(id)arg1 ;
-(void)processDidEnterForeground:(id)arg1 ;
-(id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 ;
-(void)_queue_clearSuppressionTimerForAssertion:(id)arg1 ;
-(void)_queue_suppressActivityAlertsForProcessIdentifier:(id)arg1 ;
-(id)_queue_startAlertSuppressionTimerForProcessIdentifier:(id)arg1 ;
-(void)_queue_invalidateSuppressActivityAlertsForProcessIdentifier:(id)arg1 ;
-(void)_invalidateSuppressActivityAlertsForSuspendedProcess:(id)arg1 ;
@end

