/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection {

	SFSession* _session;

}

@property (retain) SFSession * session;              //@synthesize session=_session - In the implementation block
-(void)invalidate;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)interruptionHandler;
-(/*^block*/id)invalidationHandler;
-(SFSession *)session;
-(void)setSession:(SFSession *)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)eventMessageHandler;
-(/*^block*/id)requestMessageHandler;
-(void)setRequestMessageHandler:(/*^block*/id)arg1 ;
-(void)connectToNearbyDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

