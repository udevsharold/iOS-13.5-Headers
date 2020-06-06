/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCInterface, NSXPCListener, NSString;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate> {

	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSXPCListener* _listener;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (copy) id interruptionHandler;                            //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;                            //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resume;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id)listenerEndpoint;
-(id)_initWithInterface:(id)arg1 object:(id)arg2 ;
-(id)initWithInterface:(id)arg1 strongObject:(id)arg2 ;
-(id)initWithInterface:(id)arg1 weakObject:(id)arg2 ;
@end

