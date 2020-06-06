/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ClientConnection, NSMutableDictionary;

@interface CADOperationProxy : NSObject {

	ClientConnection* _conn;
	NSMutableDictionary* _operationGroups;

}
+(id)allOperationGroupClasses;
+(Class)_operationGroupClassFromSelector:(SEL)arg1 ;
+(Class)operationProxyClassForClientWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithClientConnection:(id)arg1 ;
-(id)_operationGroupForClass:(Class)arg1 ;
-(void)_emptyMethod;
-(id)_copyReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3 ;
@end

