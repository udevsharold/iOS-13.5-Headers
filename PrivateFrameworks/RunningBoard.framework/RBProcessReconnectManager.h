/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManaging, RBDomainAttributeManaging, RBAssertionOriginatorPidPersisting, OS_dispatch_queue;
#import <RunningBoard/RunningBoard-Structs.h>
@class RBProcess, NSMutableSet, NSObject;

@interface RBProcessReconnectManager : NSObject {

	id<RBAssertionManaging> _assertionManager;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBAssertionOriginatorPidPersisting> _assertionOriginatorPidStore;
	RBProcess* _originatorProcess;
	NSMutableSet* _currentAssertionIdentifiers;
	NSMutableSet* _pendingProcesses;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)_reconnectProcess:(id)arg1 ;
-(void)_lockQueue_resumeNextProcess;
-(id)_assertionDescriptorForProcess:(id)arg1 ;
-(id)_assertionAttributes;
-(id)initWithAssertionManager:(id)arg1 domainAttributeManager:(id)arg2 assertionOriginatorPidStore:(id)arg3 originatorProcess:(id)arg4 ;
-(void)reconnectProcesses:(id)arg1 ;
-(void)didInvalidateAssertion:(id)arg1 ;
@end

