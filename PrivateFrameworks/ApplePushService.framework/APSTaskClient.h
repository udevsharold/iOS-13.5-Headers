/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface APSTaskClient : NSObject {

	NSXPCConnection* _connection;
	NSMutableArray* _outstandingDNSRequests;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _environment;

}
-(void)dealloc;
-(void)_clearOutstandingTasks:(long long)arg1 ;
-(void)_timeoutOutstandingRequests;
-(id)initWithEnvironment:(id)arg1 queue:(id)arg2 ;
-(id)_findDNSRequestForHostname:(id)arg1 ;
-(id)resolveDNS:(id)arg1 ;
@end

