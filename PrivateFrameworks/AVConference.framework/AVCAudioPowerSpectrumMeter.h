/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject;

@interface AVCAudioPowerSpectrumMeter : NSObject {

	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	double _audioSpectrumRefreshRate;
	unsigned short _audioSpectrumBinCount;
	unsigned _sessionToken;

}

@property (nonatomic,readonly) id<AVCAudioPowerSpectrumMeterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned sessionToken;                                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(void)dealloc;
-(id<AVCAudioPowerSpectrumMeterDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned)sessionToken;
-(id)initWithConfig:(AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)registerPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)unregisterPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)deregisterBlocksForService;
-(void)registerBlocksForNotifications;
@end

