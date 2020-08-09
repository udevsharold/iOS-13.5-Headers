/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVLivePlayerDelegate;
#import <ProVideo/ProVideo-Structs.h>
@class PVRenderer, NSString, PVTaskTokenPool, PVLivePlayerRenderLink, PVLivePlayerThermalThrottlingPolicy;

@interface PVLivePlayer : NSObject {

	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _lock;
	map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource> > > >* _sourceMap;
	PVRenderer* _renderer;
	id<PVLivePlayerDelegate> _weakDelegate;
	AI _queueSize;
	Ai _playerStatus;
	PVLivePlayer* _primaryPlayer;
	HGRef<HGRenderQueue>* _playerQueue;
	unsigned _playerQueueUnitCount;
	unsigned _activeRenderLinkJobCount;
	SCD_Struct_PV20 _renderTime;
	SCD_Struct_PV20 _previousSignalTime;
	BOOL _previousSignalTimeValid;
	double _lastCompletedHostTime;
	AI _frameCount;
	NSString* _name;
	AI _parentCode;
	PVTaskTokenPool* _tokenPool;
	unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer> >* _statLogTimer;
	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _perfStatsLock;
	unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats> >* _perfStats;
	BOOL _trackStats;
	BOOL _lowerGCDPriority;
	BOOL _lowerGPUPriority;
	BOOL _bypassRenderLink;
	PVLivePlayerRenderLink* _renderLink;
	PVLivePlayerThermalThrottlingPolicy* _thermalThrottlingPolicy;

}

@property (nonatomic,retain) PVLivePlayerRenderLink * renderLink;                                        //@synthesize renderLink=_renderLink - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,retain) PVLivePlayerThermalThrottlingPolicy * thermalThrottlingPolicy;              //@synthesize thermalThrottlingPolicy=_thermalThrottlingPolicy - In the implementation block
@property (assign,nonatomic) unsigned queueSize; 
@property (assign,nonatomic) BOOL lowerGCDPriority;                                                      //@synthesize lowerGCDPriority=_lowerGCDPriority - In the implementation block
@property (assign,nonatomic) BOOL lowerGPUPriority;                                                      //@synthesize lowerGPUPriority=_lowerGPUPriority - In the implementation block
@property (assign,nonatomic) BOOL bypassRenderLink;                                                      //@synthesize bypassRenderLink=_bypassRenderLink - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV20 renderTime; 
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(void)stop;
-(void)start;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)flush;
-(void)shutdown;
-(void)setQueueSize:(unsigned)arg1 ;
-(SCD_Struct_PV20)renderTime;
-(unsigned)queueSize;
-(void)setParentCode:(unsigned)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(void)printAndClearStats:(BOOL)arg1 ;
-(id)initWithOptions:(id)arg1 delegate:(id)arg2 ;
-(void)setSource:(id)arg1 inputID:(unsigned)arg2 ;
-(void)setRenderLink:(PVLivePlayerRenderLink *)arg1 ;
-(void)setThermalThrottlingPolicy:(PVLivePlayerThermalThrottlingPolicy *)arg1 ;
-(void)resetRenderTime;
-(PVLivePlayerThermalThrottlingPolicy *)thermalThrottlingPolicy;
-(void)renderLinkSignalSkipped;
-(void)renderLinkSignal:(SCD_Struct_PV20)arg1 ;
-(void)renderLinkSignalDropped;
-(void)_statsLogCheck;
-(void)setLowerGCDPriority:(BOOL)arg1 ;
-(void)setLowerGPUPriority:(BOOL)arg1 ;
-(BOOL)bypassRenderLink;
-(void)updateRenderQueueUnits;
-(unsigned long long)getPackedFamilyCode:(unsigned)arg1 ;
-(void)_renderLinkSignal:(SCD_Struct_PV20)arg1 ;
-(BOOL)_dropFrameForSaturatedPrimaryPlayer;
-(BOOL)_dropFrameForFullQueue;
-(id)getTaskToken;
-(void)_notifyDelegateOfDroppedFrame:(int)arg1 ;
-(unsigned)_throttledQueueSize_NoLock;
-(id)readSourceFrameSets:(double)arg1 ;
-(void)renderLinkJobFinished:(HGRef<PVRenderLinkJob>*)arg1 ;
-(BOOL)lowerGCDPriority;
-(BOOL)lowerGPUPriority;
-(BOOL)testOutOfOrderCompletion:(HGRef<PVRenderLinkJob>*)arg1 ;
-(void)addStats:(FrameStats*)arg1 ;
-(void)bypassRenderLink:(HGRef<PVRenderLinkJob>*)arg1 ;
-(BOOL)throttledBypassRenderLink;
-(id)playerSources;
-(void)setPrimaryPlayer:(id)arg1 ;
-(void)handleRenderLinkJob:(HGRef<PVRenderLinkJob>*)arg1 ;
-(PVLivePlayerRenderLink *)renderLink;
-(void)setBypassRenderLink:(BOOL)arg1 ;
@end
