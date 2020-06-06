/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HUUtilities : NSObject {

	NSDictionary* _pickableRoutes;
	int _wirelessSplitterNotifyToken;
	BOOL _wirelessSplitterEnabled;
	BOOL _takingConnection;
	NSObject*<OS_dispatch_queue> _routingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> routingQueue;              //@synthesize routingQueue=_routingQueue - In the implementation block
@property (assign,nonatomic) BOOL takingConnection;                                  //@synthesize takingConnection=_takingConnection - In the implementation block
+(id)sharedUtilities;
+(id)XDCObjectFromObject:(id)arg1 ;
+(id)objectFromXDCObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)registerNotifications;
-(void)mediaServerDied;
-(void)clearAudioRoutes;
-(void)updateHearingFeatureUsage;
-(id)currentPickableAudioRoutes;
-(void)pauseNowPlaying:(BOOL)arg1 withQueue:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)checkAudioPlayingWithQueue:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(BOOL)liveListenRouteSelected;
-(BOOL)hearingAidRouteAvailable;
-(BOOL)hearingAidStreamSelected;
-(NSObject*<OS_dispatch_queue>)routingQueue;
-(BOOL)takingConnection;
-(void)updateWirelessSplitterState;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(BOOL)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2 ;
-(void)addHearingFeatureUsage:(unsigned long long)arg1 ;
-(void)setRoutingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTakingConnection:(BOOL)arg1 ;
@end

