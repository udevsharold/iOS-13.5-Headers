/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _RWIRelayConnectionToApplicationDelegate <NSObject>
@optional
-(void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2;

@required
-(void)xpcConnectionFailed:(id)arg1;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;

@end

