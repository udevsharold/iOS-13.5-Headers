/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCConnection, MSTimerGate;

@interface MSClientSidePauseContext : NSObject {

	NSString* _UUID;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSXPCConnection* _server;
	MSTimerGate* _gate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) MSTimerGate * gate;                                   //@synthesize gate=_gate - In the implementation block
-(void)resume;
-(void)setServer:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)server;
-(id)initWithServer:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(MSTimerGate *)gate;
-(void)setGate:(MSTimerGate *)arg1 ;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)timerQueueTimerFired;
-(void)timerQueuePing;
@end

