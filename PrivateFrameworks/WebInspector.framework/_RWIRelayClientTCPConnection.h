/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/_RWIRelayClientConnection.h>
#import <libobjc.A.dylib/_RWITCPConnectionDelegate.h>

@class _RWITCPConnection, NSString;

@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate> {

	_RWITCPConnection* _connection;

}

@property (nonatomic,retain) _RWITCPConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2 ;
+(id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2 ;
-(_RWITCPConnection *)connection;
-(void)sendMessage:(id)arg1 ;
-(void)setConnection:(_RWITCPConnection *)arg1 ;
-(void)closeInternal;
-(id)initWithTCPConnection:(id)arg1 delegate:(id)arg2 ;
-(void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)tcpConnectionDidClose:(id)arg1 ;
@end

