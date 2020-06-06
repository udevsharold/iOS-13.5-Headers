/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface NSXPCStoreConnectionManager : NSObject {

	NSMutableArray* _availableConnections;
	NSMutableArray* _allConnections;
	unsigned long long _maxConnections;
	NSObject*<OS_dispatch_semaphore> _poolCounter;
	int _connectionLock;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) unsigned long long maxConnections;              //@synthesize maxConnections=_maxConnections - In the implementation block
@property (nonatomic,readonly) NSArray * availableConnections;                 //@synthesize availableConnections=_availableConnections - In the implementation block
-(void)dealloc;
-(id)initForStore:(id)arg1 ;
-(void)disconnectAllConnections;
-(void)sendMessageWithContext:(id)arg1 ;
-(void)_checkinConnection:(id)arg1 ;
-(id)_checkoutConnection;
-(unsigned long long)maxConnections;
-(NSArray *)availableConnections;
@end

