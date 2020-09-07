/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STStatusDomainXPCServer.h>
#import <libobjc.A.dylib/STStatusDomainClientHandle.h>

@protocol STStatusDomainServerHandle, OS_dispatch_queue;
@class NSObject, NSXPCConnection, BSMutableIntegerMap, NSSet, NSMutableSet, NSString;

@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle> {

	id<STStatusDomainServerHandle> _serverHandle;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _clientXPCConnection;
	BSMutableIntegerMap* _dataByDomain;
	NSSet* _entitledDomains;
	NSMutableSet* _observingDomains;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                      //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientXPCConnection;                           //@synthesize clientXPCConnection=_clientXPCConnection - In the implementation block
@property (nonatomic,readonly) BSMutableIntegerMap * dataByDomain;                              //@synthesize dataByDomain=_dataByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSSet * entitledDomains;                                    //@synthesize entitledDomains=_entitledDomains - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * observingDomains;                            //@synthesize observingDomains=_observingDomains - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)clientXPCConnection;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(BSMutableIntegerMap *)dataByDomain;
-(void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id<STStatusDomainServerHandle>)serverHandle;
-(id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2 ;
-(NSSet *)entitledDomains;
-(NSMutableSet *)observingDomains;
-(void)_internalQueue_observeData:(id)arg1 forDomain:(unsigned long long)arg2 dataSendBlock:(/*^block*/id)arg3 diffSendBlock:(/*^block*/id)arg4 ;
-(void)observeDomains:(id)arg1 ;
-(void)stopObservingDomains:(id)arg1 ;
@end
