/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATXPCInterface.h>

@class NSXPCConnection, NSString;

@interface CATXPCTransport : CATTransport <CATXPCInterface> {

	NSXPCConnection* mConnection;
	BOOL mConnectionHasResumed;
	BOOL mConnectionShouldInvalidate;
	BOOL mConnectionHasInvalidated;

}

@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)dealloc;
-(int)processIdentifier;
-(unsigned)effectiveUserIdentifier;
-(id)valueForEntitlement:(id)arg1 ;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(void)invalidateConnection;
-(void)didInvalidate;
-(id)operationToSendMessage:(id)arg1 ;
-(void)setUpConnection;
-(void)tearDownConnection;
-(void)processMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2 ;
@end

