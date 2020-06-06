/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTMediaPlaylistItem;
@class MTMetricsData, MTVPAFKit;

@interface MTMediaActivity : NSObject {

	long long _type;
	id<MTMediaPlaylistItem> _playlistItem;
	MTMetricsData* _startMetricsData;
	MTMetricsData* _stopMetricsData;
	MTVPAFKit* _vpafKit;

}

@property (assign,nonatomic,__weak) MTVPAFKit * vpafKit;                        //@synthesize vpafKit=_vpafKit - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MTMetricsData * startMetricsData;                  //@synthesize startMetricsData=_startMetricsData - In the implementation block
@property (nonatomic,retain) MTMetricsData * stopMetricsData;                   //@synthesize stopMetricsData=_stopMetricsData - In the implementation block
@property (nonatomic,retain) id<MTMediaPlaylistItem> playlistItem;              //@synthesize playlistItem=_playlistItem - In the implementation block
+(unsigned long long)startOverallPositionForItem:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)isStopped;
-(void)setVpafKit:(MTVPAFKit *)arg1 ;
-(void)setPlaylistItem:(id<MTMediaPlaylistItem>)arg1 ;
-(id<MTMediaPlaylistItem>)playlistItem;
-(id)startEventHandler;
-(unsigned long long)positionFromOverallPosition:(unsigned long long)arg1 ;
-(void)setStartMetricsData:(MTMetricsData *)arg1 ;
-(MTMetricsData *)startMetricsData;
-(id)stopEventHandler;
-(void)setStopMetricsData:(MTMetricsData *)arg1 ;
-(MTMetricsData *)stopMetricsData;
-(MTVPAFKit *)vpafKit;
-(id)initWithType:(long long)arg1 playlistItem:(id)arg2 vpafKit:(id)arg3 ;
-(void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(id)eventDataForTransitioningEvents;
@end

