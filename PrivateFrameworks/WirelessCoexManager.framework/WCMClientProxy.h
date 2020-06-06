/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCMClientCallback, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface WCMClientProxy : NSObject {

	int mProcessId;
	id<WCMClientCallback> mDelegate;
	NSObject*<OS_dispatch_queue> mQueue;
	BOOL mIsRegistered;
	NSObject*<OS_xpc_object> mConnection;

}
-(id)init;
-(void)dealloc;
-(BOOL)connectToServer;
-(void)reConnect;
-(void)registerToServer;
-(id)initWithClientProcessId:(int)arg1 delegate:(id)arg2 dispatch:(id)arg3 ;
-(void)sendMessage:(int)arg1 argument:(id)arg2 ;
@end

