/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMXPCProxyCreating.h>

@class EMRemoteConnection;

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating> {

	BOOL _synchronous;
	EMRemoteConnection* _remoteInterface;
	/*^block*/id _reattemptHandler;

}

@property (nonatomic,readonly) EMRemoteConnection * remoteInterface;               //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,copy,readonly) id reattemptHandler;                           //@synthesize reattemptHandler=_reattemptHandler - In the implementation block
@property (getter=isSynchronous,nonatomic,readonly) BOOL synchronous;              //@synthesize synchronous=_synchronous - In the implementation block
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(BOOL)isSynchronous;
-(EMRemoteConnection *)remoteInterface;
-(id)reattemptingRemoteObjectProxy;
-(id)reattemptHandler;
-(id)initWithRemoteInterface:(id)arg1 synchronous:(BOOL)arg2 reattemptHandler:(/*^block*/id)arg3 ;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(/*^block*/id)arg1 ;
@end

