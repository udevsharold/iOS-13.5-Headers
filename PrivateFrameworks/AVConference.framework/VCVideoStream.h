/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaStream.h>
#import <libobjc.A.dylib/VCVideoReceiverDelegate.h>
#import <libobjc.A.dylib/VCMediaStreamSyncDestination.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>
#import <libobjc.A.dylib/VCVideoCaptureConverterDelegate.h>
#import <AVConference/AVCRateControllerDelegate.h>
#import <libobjc.A.dylib/VCRedundancyControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, VCImageQueue, VCVideoTransmitterBase, VCVideoReceiverBase, VCVideoRule, VCVideoCaptureConverter, NSNumber, NSArray, AVCRateController, VCRedundancyControllerVideo, NSString;

@interface VCVideoStream : VCMediaStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate> {

	long long _type;
	NSObject*<OS_dispatch_queue> _lastDecodedFrameQueue;
	opaque_pthread_mutex_t _remoteLayerLock;
	opaque_pthread_mutex_t _localLayerLock;
	unsigned _uplinkOperatingBitrate;
	CVBufferRef _cachedRemoteVideoFrame;
	VCImageQueue* _remoteQueue;
	VCVideoTransmitterBase* _videoTransmitter;
	VCVideoReceiverBase* _videoReceiver;
	VCVideoRule* _videoRule;
	int _reportingModuleID;
	unsigned _reportingDefaultRealtimePeriod;
	NSObject*<OS_dispatch_semaphore> _bufferQueueSemaphore;
	opaqueCMBufferQueueRef _bufferQueue;
	VCVideoCaptureConverter* _captureConverter;
	BOOL _isServerBasedBandwidthProbingEnabled;
	unsigned char _lastMediaPriority;
	NSNumber* _targetStreamID;
	NSArray* _compoundStreamIDs;
	NSNumber* _sendingStreamID;
	BOOL _isCompoundStreamIDsIncreased;
	BOOL _shouldEnableFaceZoom;
	BOOL _didReceiveFirstFrame;
	AB _isVideoCaptureRegistered;
	double _fecRatio;
	int _captureSource;
	unsigned _screenDisplayID;
	unsigned _customWidth;
	unsigned _customHeight;
	unsigned _tilesPerFrame;
	OpaqueFigCFWeakReferenceRef _weakStream;
	AVCRateController* _vcrcRateController;
	VCRedundancyControllerVideo* _redundancyController;
	int _lastDisplayedFromImageQueueCount;
	int _lastDroppedFromImageQueueCount;
	int _networkInterfaceType;
	int _channelSequenceCountWithInactiveSlots;

}

@property (assign) unsigned lastSentAudioSampleTime; 
@property (assign) double lastSentAudioHostTime; 
@property (nonatomic,readonly) unsigned lastDisplayedFrameRTPTimestamp; 
@property (assign,nonatomic) BOOL isServerBasedBandwidthProbingEnabled;              //@synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * targetStreamID;                              //@synthesize targetStreamID=_targetStreamID - In the implementation block
@property (nonatomic,readonly) NSNumber * sendingStreamID;                           //@synthesize sendingStreamID=_sendingStreamID - In the implementation block
@property (nonatomic,readonly) NSArray * compoundStreamIDs;                          //@synthesize compoundStreamIDs=_compoundStreamIDs - In the implementation block
@property (nonatomic,readonly) BOOL isCompoundStreamIDsIncreased;                    //@synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableFaceZoom;                              //@synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom - In the implementation block
@property (assign,nonatomic) BOOL didReceiveFirstFrame;                              //@synthesize didReceiveFirstFrame=_didReceiveFirstFrame - In the implementation block
@property (assign,nonatomic) double fecRatio;                                        //@synthesize fecRatio=_fecRatio - In the implementation block
@property (assign,nonatomic) unsigned screenDisplayID;                               //@synthesize screenDisplayID=_screenDisplayID - In the implementation block
@property (assign,nonatomic) unsigned customWidth;                                   //@synthesize customWidth=_customWidth - In the implementation block
@property (assign,nonatomic) unsigned customHeight;                                  //@synthesize customHeight=_customHeight - In the implementation block
@property (assign,nonatomic) unsigned targetMediaBitrate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)capabilities;
+(id)supportedVideoPayloads;
-(id)init;
-(void)dealloc;
-(void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned)arg2 rateChangeCounter:(unsigned)arg3 ;
-(id)supportedPayloads;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onSendRTCPPacket;
-(void)onRTPTimeout;
-(void)onRTCPTimeout;
-(double)rtcpHeartbeatLeeway;
-(void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned)arg2 ;
-(unsigned)customWidth;
-(unsigned)customHeight;
-(void)generateKeyFrame;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(NSArray *)compoundStreamIDs;
-(NSNumber *)sendingStreamID;
-(void)cleanupBeforeReconfigure:(id)arg1 ;
-(int)getReportingClientType;
-(CFStringRef)getReportingClientName;
-(void)collectRxChannelMetrics:(SCD_Struct_VC69*)arg1 ;
-(void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2 ;
-(void)setTargetStreamID:(NSNumber *)arg1 ;
-(void)collectRxChannelMetrics:(SCD_Struct_VC69*)arg1 interval:(float)arg2 ;
-(void)collectTxChannelMetrics:(SCD_Struct_VC69*)arg1 ;
-(NSNumber *)targetStreamID;
-(unsigned)lastSentAudioSampleTime;
-(BOOL)startSynchronization:(id)arg1 ;
-(void)stopSynchronization;
-(void)updateVideoConfig:(id)arg1 ;
-(void)requestLastDecodedFrame;
-(void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(unsigned)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned)arg2 ;
-(void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned)arg2 ;
-(BOOL)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_AV77)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5 ;
-(void)updateSourcePlayoutTimestamp:(SCD_Struct_AV77*)arg1 ;
-(void)setDidReceiveFirstFrame:(BOOL)arg1 ;
-(unsigned)lastDisplayedFrameRTPTimestamp;
-(id)initWithTransportSessionID:(unsigned)arg1 ssrc:(unsigned)arg2 streamToken:(long long)arg3 ;
-(void)setShouldEnableFaceZoom:(BOOL)arg1 ;
-(void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2 ;
-(void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 ;
-(void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3 ;
-(BOOL)shouldEnableFaceZoom;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1 ;
-(CFDictionaryRef)getClientSpecificUserInfo;
-(void)registerForVideoCapture;
-(void)deregisterForVideoCapture;
-(void)setTargetMediaBitrate:(unsigned)arg1 ;
-(BOOL)isCompoundStreamIDsIncreased;
-(void)setFecRatio:(double)arg1 ;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(void)setLastSentAudioHostTime:(double)arg1 ;
-(void)setCustomWidth:(unsigned)arg1 ;
-(void)setCustomHeight:(unsigned)arg1 ;
-(void)converter:(id)arg1 didConvertFrame:(opaqueCMSampleBufferRef)arg2 frameTime:(SCD_Struct_AV77)arg3 droppedFrames:(int)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(unsigned)screenDisplayID;
-(void)setScreenDisplayID:(unsigned)arg1 ;
-(double)lastSentAudioHostTime;
-(BOOL)isServerBasedBandwidthProbingEnabled;
-(unsigned)numTilesPerFrame;
-(id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1 ;
-(BOOL)useUEPForVideoConfig:(int)arg1 ;
-(tagVCVideoReceiverConfig*)videoReceiverConfigWithVideoStreamConfig:(id)arg1 ;
-(void)destroyVideoTransmitter;
-(void)destroyVideoReceiver;
-(void)setupVideoStream;
-(void)initVideoTransmitter;
-(void)updateVideoReceiver:(id)arg1 ;
-(void)sendLastRemoteVideoFrame:(CVBufferRef)arg1 ;
-(BOOL)validateVideoStreamConfigurations:(id)arg1 ;
-(int)operatingModeForVideoStreamType:(long long)arg1 ;
-(BOOL)validateStreamConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)overrideConfigWithDefaults;
-(void)collectImageQueuePerformanceMetrics:(CFDictionaryRef)arg1 ;
-(void)collectChannelSequenceMetrics:(id)arg1 ;
-(void)initializeInterfaceTypeForNWConnection;
-(void)initializeInterfaceTypeForSocket;
-(void)cacheRemoteVideoFrame:(CVBufferRef)arg1 ;
-(void)destroyVideoModules;
-(void)setupReportingAgent;
-(void)startVCRCWithStreamConfig:(id)arg1 ;
-(void)initializeInterfaceType;
-(void)reportTransportInfo;
-(void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(tagHANDLE*)arg2 ;
-(void)stopVCRC;
-(void)setupCompoundStreamIDsWithStreamIDs:(id)arg1 ;
-(void)handleNWConnectionPacketEvent:(packet_id*)arg1 eventType:(int)arg2 ;
-(void)collectVideoConfigMetrics:(CFDictionaryRef)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 currentStreamID:(id)arg3 ;
-(void)collectVideoStreamStartMetrics:(CFDictionaryRef)arg1 ;
-(void)handleNWConnectionNotification:(ifnet_interface_advisory*)arg1 ;
-(BOOL)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(unsigned)targetMediaBitrate;
-(void)handleVTPSendFailedWithData:(void*)arg1 ;
-(BOOL)didReceiveFirstFrame;
-(double)fecRatio;
@end

