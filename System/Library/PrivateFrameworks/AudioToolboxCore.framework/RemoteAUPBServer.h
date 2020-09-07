/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AUPBServing;
#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSXPCConnection;

@interface RemoteAUPBServer : NSObject {

	NSXPCConnection* xpcConnection;
	id<AUPBServing> proxyInterface;
	OpaqueAUPBServerRef ref;
	vector<NSObject<OS_dispatch_semaphore> *, std::__1::allocator<NSObject<OS_dispatch_semaphore> *> >* replySemas;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection; 
@property (nonatomic,retain) id<AUPBServing> proxyInterface; 
@property (assign,nonatomic) OpaqueAUPBServerRef ref; 
-(void)dealloc;
-(id)description;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id<AUPBServing>)proxyInterface;
-(void)setProxyInterface:(id<AUPBServing>)arg1 ;
-(OpaqueAUPBServerRef)ref;
-(void)addSema:(id)arg1 ;
-(void)removeSema:(id)arg1 ;
-(void)signalAllSemaphores;
-(void)setRef:(OpaqueAUPBServerRef)arg1 ;
@end
