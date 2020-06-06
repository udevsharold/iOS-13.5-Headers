/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSXPCConnection;

@interface RMConfigurationSubscriberClient : NSObject {

	NSObject* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

