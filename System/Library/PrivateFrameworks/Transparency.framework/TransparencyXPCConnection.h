/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)instance;
+(void)invokeXPCWithBlock:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
+(void)removeInstance;
+(void)invokeXPCAsynchronousCallWithBlock:(/*^block*/id)arg1 ;
+(void)invokeXPCSynchronousCallWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)createConnection;
@end
