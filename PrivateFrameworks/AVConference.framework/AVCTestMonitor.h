/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVConferenceXPCClient;

@interface AVCTestMonitor : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	AVConferenceXPCClient* _connection;

}
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)delegateNotificationQueue;
-(void)setupNotificationQueue:(id)arg1 ;
-(void)requestReport;
-(void)updateAudioInjectConfig:(id)arg1 ;
-(void)forceNetworkCellular:(BOOL)arg1 ;
-(void)setEnableLoopbackInterface:(BOOL)arg1 ;
-(void)setEmulatedRxPLR:(double)arg1 ;
@end

