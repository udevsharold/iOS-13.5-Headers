/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageDispatcher.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSOperationQueue, NSMapTable, HMDHome, HMFMessageDispatcher, NSString;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {

	id<HMFLocking> _lock;
	NSOperationQueue* _queue;
	NSMapTable* _receivers;
	HMDHome* _home;

}

@property (readonly) HMFMessageDispatcher * dispatcher; 
@property (__weak,readonly) HMDHome * home;                          //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)addOperation:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMDHome *)home;
-(id)logIdentifier;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(id)initWithTransport:(id)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(HMFMessageDispatcher *)dispatcher;
-(id)operationForMessage:(id)arg1 error:(id*)arg2 ;
-(id)syncOperationManager;
@end

