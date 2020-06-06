/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSObject;

@interface AVCCaptionsClient : NSObject {

	long long _streamToken;
	id _delegate;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) id<AVCCaptionsClientDelegate> delegate; 
@property (readonly) BOOL captionsSupported; 
@property (readonly) BOOL captionsEnabled; 
@property (readonly) long long streamToken;                               //@synthesize streamToken=_streamToken - In the implementation block
-(void)dealloc;
-(id<AVCCaptionsClientDelegate>)delegate;
-(void)disconnect;
-(BOOL)connect;
-(long long)streamToken;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)initWithDelegate:(id)arg1 streamToken:(long long)arg2 ;
-(BOOL)captionsEnabled;
-(BOOL)captionsSupported;
-(void)enableCaptions:(BOOL)arg1 ;
-(void)configureCaptions:(id)arg1 ;
@end

