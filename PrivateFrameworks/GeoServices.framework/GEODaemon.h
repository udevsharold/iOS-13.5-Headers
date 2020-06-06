/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableSet, NSObject, NSSet;

@interface GEODaemon : NSObject {

	NSMutableSet* _servers;
	NSMutableSet* _peers;
	NSObject*<OS_dispatch_source> _sigInfoSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_xpc_object> _listener;

}

@property (nonatomic,readonly) NSSet * peers;              //@synthesize peers=_peers - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)start;
-(id)initWithPort:(const char*)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(id)_createListenerWithQueue:(id)arg1 onPort:(const char*)arg2 ;
-(void)_handleNewConnection:(id)arg1 ;
-(id)_createPeerForConnection:(id)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)addServerInstance:(id)arg1 ;
-(void)addServerClass:(Class)arg1 ;
-(void)startServerClassIfNecessary:(Class)arg1 ;
-(NSSet *)peers;
@end

