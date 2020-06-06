/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCSecureDataChannelDelegate.h>
#import <AVConference/AVTelephonyInterfaceDelegate.h>
#import <libobjc.A.dylib/VCCaptionsReceiverDelegate.h>
#import <libobjc.A.dylib/VCTransportSessionLegacyDelegate.h>
#import <AVConference/AVCRateControllerDelegate.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCRedundancyControllerDelegate.h>

@protocol VCCallSessionDelegate, VCConnectionProtocol, OS_dispatch_queue, OS_dispatch_source, VideoConferenceChannelQualityDelegate;
@class NSObject, VCCallInfo, VCConnectionManager, VCMediaNegotiator, VCSwitchManager, NSMutableArray, VCAudioPayload, VCImageAttributeRules, VCCapabilities, AVCRateController, VCRateControlMediaController, GKRingBuffer, NSDictionary, NSMutableDictionary, NSArray, TimingCollection, NSString, VCCallLinkCongestionDetector, NSData, VCSessionMessaging, VCControlChannel, VCControlChannelMultiWay, VCBitrateArbiter, VCAudioTransmitter, VCCaptionsReceiver, VCDisplayLink, VCRedundancyControllerVideo, VideoAttributes, VCWCMClient, WRMClient, VCSecureDataChannel, NSNumber, AVTelephonyInterface, VCTransportSession;

@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, AVTelephonyInterfaceDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate, AVCRateControllerDelegate, VCAudioIOSink, VCRedundancyControllerDelegate> {

	NSObject*<VCCallSessionDelegate> delegate;
	VCCallInfo* localCallInfo;
	VCCallInfo* remoteCallInfo;
	long long packetMultiplexMode;
	tagHANDLE* rtpHandle;
	tagHANDLE* rtpVideo;
	void* videoMediaControlInfoGenerator;
	void* audioMediaControlInfoGenerator;
	VCConnectionManager* connectionManager;
	long long connectionChangeState;
	id<VCConnectionProtocol> toBeChangedPrimaryConnection;
	VCMediaNegotiator* _mediaNegotiator;
	VCSwitchManager* _switchManager;
	NSObject*<OS_dispatch_queue> connectionChangeQueue;
	long long state;
	long long _sipState;
	NSMutableArray* negotiatedAudioPayloads;
	VCAudioPayload* currentAudioPayload;
	VCAudioPayload* currentDTXPayload;
	int _currentRedPayloadType;
	BOOL _isRedEnabled;
	long long videoPayload;
	long long screenPayload;
	long long sampleRate;
	long long samplesPerFrame;
	tagHANDLE* hSIP;
	BOOL isAudioRunning;
	BOOL isWaitingForICEResult;
	BOOL didSend200OK;
	opaque_pthread_mutex_t mutex;
	BOOL receivedSIPInvite;
	VCImageAttributeRules* imageAttributeRules;
	int iRemoteRTPPort;
	int iRemoteRTCPPort;
	VCCapabilities* caps;
	int _deviceRole;
	tagHANDLE* hMediaQueue;
	tagHANDLE* hAFRC;
	AVCRateController* _rateController;
	VCRateControlMediaController* _mediaController;
	GKRingBuffer* ringBuf;
	unsigned lastReceived;
	int preferredAudioCodec;
	BOOL useSBR;
	BOOL useControlByte;
	BOOL useUEP;
	NSDictionary* _allPayloadsLocalFeaturesString;
	NSMutableDictionary* featuresListStringDict;
	BOOL audioIsPaused;
	opaque_pthread_mutex_t pauseLock;
	NSObject*<OS_dispatch_queue> videoQueue;
	NSObject*<OS_dispatch_queue> videoAsyncQueue;
	NSObject*<OS_dispatch_queue> audioQueue;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	NSArray* mutedPeers;
	int bandwidthUpstream;
	int bandwidthDownstream;
	BOOL allowAudioRecording;
	int aacBlockSize;
	BOOL _isUseCaseWatchContinuity;
	int carrierBitrateCap;
	AudioStreamBasicDescription vpioFormat;
	BOOL allowAudioSwitching;
	BOOL shouldUpdateLastReceivedPacketTimestamp;
	double lastReceivedPacketTimestamp;
	BOOL isRemoteMediaStalled;
	unsigned _mediaStallCount;
	double _mediaStallTotalTime;
	double _maxMediaStallTime;
	double _lastMediaStallStartTime;
	BOOL _isRemoteMediaStalledShort;
	int packetsSinceStall;
	int packetsSinceShortMediaStall;
	int natType;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	TimingCollection* perfTimers;
	double packetLossRate;
	double timeLastCheckedNetworkConditions;
	double timeLastKnowGoodNetworkPLR;
	double timeLastKnowGoodNetworkRTT;
	double networkConditionsTimeoutInSeconds;
	NSString* peerCN;
	NSString* sessionID;
	unsigned roundTripTime;
	float packetLateAndMissingRatio;
	int sampleLogCount;
	double timeSinceLastReportedNoPackets;
	double noRemotePacketsTimeout;
	double _remoteMediaStallTimeout;
	BOOL previousNoRemoteInProgress;
	BOOL didAttemptSIPInvite;
	NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate;
	opaque_pthread_mutex_t qualityDelegateLock;
	NSObject*<OS_dispatch_queue> qualityQueue;
	BOOL shouldTimeoutPackets;
	opaque_pthread_mutex_t srtpLock;
	BOOL didPrepareSRTP;
	BOOL useRateControl;
	BOOL useAFRC;
	BOOL useVCRC;
	BOOL isRTCPFBEnabled;
	VCCallLinkCongestionDetector* congestionDetector;
	BOOL shouldSendAudio;
	BOOL isGKVoiceChat;
	int _signalStrengthBars;
	int _signalStrengthDisplayBars;
	int _signalStrengthMaxDisplayBars;
	BOOL bBWEstOperatingModeInitialized;
	BOOL bBWEstNewBWEstModeEnabled;
	BOOL bBWEstFakeLargeFrameModeEnabled;
	BOOL bBWEstActiveProbingSenderLog;
	CGSize remoteScreenPortraitAspectRatio;
	CGSize remoteScreenLandscapeAspectRatio;
	CGSize remoteExpectedPortraitAspectRatio;
	CGSize remoteExpectedLandscapeAspectRatio;
	BOOL isStarted;
	NSData* srtpKeyBytes;
	BOOL isInitiator;
	BOOL sentClientSuccessfulDidStart;
	double videoThrottlingTimeout;
	unsigned awdCallNonce;
	VCSessionMessaging* messaging;
	VCControlChannel* controlChannel;
	VCControlChannelMultiWay* secureControlChannel;
	BOOL isCurrentNetworkBad;
	unsigned callSessionBitrate;
	NSObject*<OS_dispatch_queue> cellTechQueue;
	NSObject*<OS_dispatch_source> cellTechChangeSource;
	TimingCollection* cameraTimers;
	VCBitrateArbiter* callSessionBitrateArbiter;
	NSObject*<OS_dispatch_source> connectionTimeoutSource;
	NSObject*<OS_dispatch_source> firstRemoteFrameTimemoutSource;
	unsigned short maxPacketLength;
	long long initialSentBytes;
	long long initialReceivedBytes;
	tagVCAudioReceiver* audioReceiver;
	VCAudioTransmitter* audioTransmitter;
	VCCaptionsReceiver* _captionsReceiver;
	tagHANDLE* hVideoReceiver;
	tagHANDLE* hVideoTransmitter;
	VCDisplayLink* _displayLink;
	VCRedundancyControllerVideo* _videoRedundancyController;
	BOOL remoteSupportsVisibleRect;
	BOOL remoteSupportsExpectedAspectRatio;
	BOOL canLocalResizePIP;
	BOOL canRemoteResizePIP;
	BOOL receivedFirstRemoteFrame;
	int fecMode;
	NSObject*<OS_dispatch_source> sessionHealthMonitor;
	VideoAttributes* remoteVideoAttributes;
	double lastVideoQualityNotificationUpdate;
	double lastVideoCallAlarmTime;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	VCWCMClient* vcWCMClient;
	WRMClient* vcWRMClient;
	BOOL iRATSuggestionEnabled;
	OpaqueVTPixelTransferSessionRef hdTransferSession;
	CVPixelBufferPoolRef hdBufferPool;
	CGSize expectedDecodeSize;
	opaqueRTCReportingRef reportingAgent;
	BOOL didReportNoRemotePackets;
	BOOL didReportLongConnectionTime;
	BOOL didReportAudioStall;
	BOOL enableRateControlDump;
	unsigned _targetBitrate;
	unsigned _rateChangeCounter;
	unsigned awdTime;
	int operatingMode;
	SKEStateOpaqueRef skeState;
	CFDataRef secretKey;
	VCSecureDataChannel* secureDataChannel;
	NSString* basebandCodecType;
	NSNumber* basebandCodecSampleRate;
	AVTelephonyInterface* telephonyInterface;
	unsigned dwRTT_ice;
	NSObject*<OS_dispatch_queue> timestampQueue;
	BOOL shouldSendBlackFrame;
	unsigned _peerProtocolVersion;
	tagWRMMetricsInfo* wrmInfo;
	BOOL _shouldReportWRMMetrics;
	BOOL _inviteDataRequested;
	unsigned _transportType;
	VCTransportSession* _transportSession;
	BOOL _cleanupDone;
	BOOL _isLocalCellular_LowestConnectionQuality;
	BOOL _isRemoteCellular_LowestConnectionQuality;
	BOOL _isConnectedOnIPv6_LowestConnectionQuality;
	void* _callLogFile;
	NSString* peerReportingID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long connectionChangeState; 
@property (retain) VCConnectionManager * connectionManager; 
@property (readonly) VCCallInfo * localCallInfo; 
@property (nonatomic,copy) NSString * peerCN; 
@property (readonly) tagVCAudioReceiver* audioReceiver; 
@property (readonly) BOOL isCurrentPayloadTypeValid; 
@property (nonatomic,readonly) BOOL isCaller; 
@property (nonatomic,copy) NSString * sessionID; 
@property (assign,nonatomic) BOOL isStarted; 
@property (nonatomic,retain) VCImageAttributeRules * imageAttributeRules; 
@property (assign,nonatomic) BOOL shouldSendAudio; 
@property (assign,nonatomic) unsigned roundTripTime; 
@property (assign,nonatomic) BOOL useRateControl; 
@property (assign,nonatomic) BOOL isRTCPFBEnabled; 
@property (assign,nonatomic) double packetLossRate; 
@property (assign,nonatomic) float packetLateAndMissingRatio; 
@property (readonly) double networkQuality; 
@property (assign,nonatomic) double networkConditionsTimeoutInSeconds; 
@property (assign,nonatomic) int signalStrengthBars;                                              //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (assign,nonatomic) int signalStrengthDisplayBars;                                       //@synthesize signalStrengthDisplayBars=_signalStrengthDisplayBars - In the implementation block
@property (assign,nonatomic) int signalStrengthMaxDisplayBars;                                    //@synthesize signalStrengthMaxDisplayBars=_signalStrengthMaxDisplayBars - In the implementation block
@property (readonly) unsigned lastSentAudioSampleTime; 
@property (assign,nonatomic) int natType; 
@property (assign,nonatomic) BOOL requiresWifi; 
@property (assign,nonatomic) BOOL useCompressedConnectionData; 
@property (retain) NSObject*<VCCallSessionDelegate> delegate; 
@property (assign) tagHANDLE* rtpHandle; 
@property (readonly) int numBufferBytesAvailable; 
@property (assign) unsigned short maxPacketLength; 
@property (assign) long long state; 
@property (assign) long long sipState;                                                            //@synthesize sipState=_sipState - In the implementation block
@property (assign) BOOL didSend200OK; 
@property (assign) long long videoPayload; 
@property (assign) long long sampleRate; 
@property (readonly) BOOL isAudioRunning; 
@property (readonly) BOOL isVideoRunning; 
@property (readonly) BOOL videoIsPaused; 
@property (readonly) BOOL audioIsPaused; 
@property (assign) BOOL isGKVoiceChat; 
@property (assign) BOOL isWaitingForICEResult; 
@property (assign) BOOL receivedSIPInvite; 
@property (assign) tagHANDLE* hMediaQueue; 
@property (assign) tagHANDLE* hAFRC; 
@property (nonatomic,retain) GKRingBuffer * ringBuf; 
@property (assign) unsigned lastReceived; 
@property (readonly) int bundledPackets; 
@property (assign) int packetsPerBundle; 
@property (assign) int preferredAudioCodec; 
@property (assign) BOOL useControlByte; 
@property (assign) BOOL useUEP; 
@property (assign) unsigned char inputMeter; 
@property (assign) int bandwidthUpstream; 
@property (assign) int bandwidthDownstream; 
@property (nonatomic,retain) NSArray * mutedPeers; 
@property (assign) NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate; 
@property (assign) BOOL shouldTimeoutPackets; 
@property (retain) NSData * srtpKeyBytes; 
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes; 
@property (assign) unsigned remoteFrameWidth; 
@property (assign) unsigned remoteFrameHeight; 
@property (assign,nonatomic) int operatingMode; 
@property (readonly) BOOL isSKEOptimizationEnabled; 
@property (readonly) BOOL isRemoteMediaStalled; 
@property (retain) VCCapabilities * capabilities; 
@property (assign) int deviceRole;                                                                //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,copy) NSString * peerReportingID; 
@property (nonatomic,retain) NSNumber * basebandCodecSampleRate; 
@property (nonatomic,copy) NSString * basebandCodecType; 
@property (nonatomic,readonly) int audioTierNetworkBitrate; 
@property (nonatomic,readonly) int audioTierAudioCodecBitrate; 
@property (nonatomic,readonly) int audioTierPacketsPerBundle; 
@property (nonatomic,readonly) int audioTierRedNumPayloads; 
@property (nonatomic,readonly) int audioTierPayload; 
@property (nonatomic,readonly) NSDictionary * dtxMetrics; 
@property (nonatomic,readonly) opaqueRTCReportingRef reportingAgent; 
+(id)keyPathsForValuesAffectingNetworkQuality;
+(int)setRxPayloadList:(tagHANDLE*)arg1 withPayloadTypes:(id)arg2 isRedEnabled:(BOOL)arg3 ;
+(int)setRxPayloadList:(tagHANDLE*)arg1 withPayloadTypes:(id)arg2 ;
+(id)getDecodePayloadTypes:(int)arg1 secondaryPayloadTypes:(id)arg2 ;
+(void)stopSecureControlChannel:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSObject*<VCCallSessionDelegate>)delegate;
-(void)setDelegate:(NSObject*<VCCallSessionDelegate>)arg1 ;
-(void)lock;
-(void)unlock;
-(BOOL)isStarted;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(unsigned)callID;
-(VCCapabilities *)capabilities;
-(VCConnectionManager *)connectionManager;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(double)networkQuality;
-(double)packetLossRate;
-(BOOL)cancel:(id)arg1 ;
-(id)callMetadata;
-(void)resetState;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(void)displayLinkTick:(id)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(BOOL)isGKVoiceChat;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(opaqueRTCReportingRef)reportingAgent;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(unsigned)roundTripTime;
-(void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned)arg2 rateChangeCounter:(unsigned)arg3 ;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned)arg2 ;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned)arg2 ;
-(int)natType;
-(void)triggerInterfaceChange;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(long long)videoPayload;
-(tagHANDLE*)rtpHandle;
-(void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned)arg2 ;
-(id)addAudioPayload:(int)arg1 ;
-(id)configForPayloadType:(int)arg1 ;
-(void)setRtpHandle:(tagHANDLE*)arg1 ;
-(void)setUseRateControl:(BOOL)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)numBufferBytesAvailable;
-(unsigned)lastSentAudioSampleTime;
-(int)preferredAudioCodec;
-(unsigned)audioRTPID;
-(unsigned)videoRTPID;
-(NSString *)basebandCodecType;
-(NSNumber *)basebandCodecSampleRate;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)setBasebandCodecSampleRate:(NSNumber *)arg1 ;
-(BOOL)isCaller;
-(void)mediaController:(void*)arg1 mediaSuggestionDidChange:(VCRateControlMediaSuggestion)arg2 ;
-(void)setRoundTripTime:(unsigned)arg1 ;
-(void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2 ;
-(void)handleCellularMTUChanged:(unsigned short)arg1 ;
-(VideoAttributes *)remoteVideoAttributes;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(unsigned)remoteFrameWidth;
-(unsigned)remoteFrameHeight;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setupWCMClient;
-(void)setupWRMClient;
-(void)cleanupWRMClient;
-(void)cleanupWCMClient;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC93*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC92*)arg1 ;
-(void)requestWRMNotification;
-(void)startAudioIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDeviceRole:(int)arg1 transportType:(unsigned)arg2 isGKVoiceChat:(BOOL)arg3 reportingHierarchyToken:(id)arg4 ;
-(int)mapPacketMultiplexModeToSIPMode:(long long)arg1 ;
-(double)sessionReceivingBitrate;
-(double)sessionTransmittingBitrate;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(BOOL)evaluateEnableRRx:(int*)arg1 ;
-(void)configureRateController;
-(void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2 ;
-(BOOL)stopVideoSend:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)startVideoSend:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)videoIsPaused;
-(void)reportImmediateWRMMetric:(int)arg1 value:(unsigned long long)arg2 ;
-(BOOL)isCallOngoing;
-(unsigned)currentAudioCap;
-(void)updateMaxPktLength;
-(BOOL)findFeatureString:(const char*)arg1 value:(char*)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char*)arg4 ;
-(id)newRemoteScreenAttributesForOrientation:(int)arg1 ;
-(int)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2 ;
-(void)setUseControlByte:(BOOL)arg1 ;
-(void)setUseUEP:(BOOL)arg1 ;
-(VCImageAttributeRules *)imageAttributeRules;
-(BOOL)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4 ;
-(BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2 ;
-(BOOL)getVideoSettings:(int)arg1 forInterface:(int)arg2 payload:(int)arg3 width:(int*)arg4 height:(int*)arg5 framerate:(int*)arg6 bitRate:(int*)arg7 ;
-(BOOL)chooseVideoPayloadForInterface:(int)arg1 ;
-(id)getVideoRuleForVideoMode:(unsigned long long)arg1 interface:(int)arg2 sessionBitrate:(int*)arg3 ;
-(id)getFeaturesListStringForPayload:(int)arg1 ;
-(int)applyFeaturesListStringForPayload:(int)arg1 ;
-(void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2 ;
-(void)updateCachedConnectionState;
-(void)notifyDelegateActiveConnectionDidChange;
-(int)getAudioTxBitrate;
-(void)updateRemoteMediaStallStateReporting:(double)arg1 ;
-(void)disconnectWithNoRemotePackets:(long long)arg1 ;
-(void)logDetailedNetworkInformation;
-(void)updateNetworkCheckHint:(double)arg1 ;
-(void)updateRemoteMediaStallState:(double)arg1 ;
-(void)updateLastReceivedPacketWithTimestamp:(double)arg1 packetType:(int)arg2 ;
-(void)sendTimings;
-(BOOL)isSIPEnabled;
-(BOOL)isSecureMessagingRequired;
-(void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4 ;
-(void)cancelConnectionTimeoutTimer;
-(void)cancelFirstRemoteFrameTimer;
-(BOOL)isAudioRunning;
-(BOOL)shouldSendAudio;
-(void)setupRemoteCallInfoWithParticipantID:(id)arg1 usingInviteData:(id)arg2 ;
-(void)setupPeerInfo:(BOOL)arg1 capabilities:(id)arg2 ;
-(void)applyNegotiatedFaceTimeSettings;
-(void)setupABTesting;
-(BOOL)setupIDSConnectionForCallID:(unsigned)arg1 destination:(id)arg2 socket:(int)arg3 error:(id*)arg4 ;
-(void)handleReceivedPiggybackBlobIDS:(id)arg1 ;
-(BOOL)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id*)arg2 ;
-(void)handleReceivedPiggybackBlobLegacy:(id)arg1 ;
-(void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)handleDuplicationEnabled:(BOOL)arg1 activeConnection:(id)arg2 ;
-(VCCallInfo *)localCallInfo;
-(void)handleCellTechChange:(int)arg1 ;
-(tagHANDLE*)hAFRC;
-(int)setSKEBlobOnTransportSession;
-(void)handleKeyExchangeCompleted;
-(BOOL)disconnectInternal:(BOOL)arg1 disconnectError:(id)arg2 didRemoteCancel:(BOOL)arg3 ;
-(id)newMediaNegotiatorAudioConfigurationWithAllowAudioSwitching:(BOOL)arg1 useSBR:(BOOL)arg2 aacBlockSize:(unsigned)arg3 ;
-(void)initWithRelevantStorebagEntries;
-(void)reportOperatingMode;
-(id)newSKEBlobWithRemoteSKEBlob:(id)arg1 ;
-(BOOL)isLowBitrateCodecPreferred:(id)arg1 ;
-(id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned)arg2 isLowBitrateCodecPreferred:(BOOL)arg3 ;
-(void)addLocalCallInfoToInviteDictionary:(id)arg1 ;
-(void)setInputMeter:(unsigned char)arg1 ;
-(void)stopPausedHeartbeat;
-(void)startPausedHeartbeat;
-(int)packetsPerBundle;
-(int)bundledPackets;
-(unsigned char)inputMeter;
-(BOOL)setPauseAudio:(BOOL)arg1 force:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)startVideo:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)stopVideo:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPauseVideo:(BOOL)arg1 force:(BOOL)arg2 error:(id*)arg3 ;
-(void)logPerfTimings;
-(void)sendData:(id)arg1 messageType:(unsigned)arg2 encrypted:(BOOL)arg3 ;
-(void)getFrontCaptureTime:(float*)arg1 backCaptureTime:(float*)arg2 ;
-(unsigned)primaryConnectionType;
-(tagVCAudioReceiver*)audioReceiver;
-(void)sendCallingModeMessage;
-(void)enableAudio:(BOOL)arg1 ;
-(void)updateDeviceRole:(int)arg1 ;
-(NSDictionary *)dtxMetrics;
-(void)reportingMomentsWithRequest:(id)arg1 ;
-(id)remoteParticipantID;
-(void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2 ;
-(void)handleFirstConnectionSetup:(id)arg1 ;
-(BOOL)startMediaWithPreNegotiatedSettings:(id*)arg1 ;
-(void)sipConnectThreadProc:(id)arg1 ;
-(void)setupCalleeSIPStartTimeout:(float)arg1 ;
-(void)logConnectionSuccess;
-(void)setupSecureDataChannel;
-(BOOL)isCurrentPayloadTypeValid;
-(void)startAWDStats;
-(void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(BOOL)arg4 ;
-(BOOL)isBetterForSIPInviteWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 thanSession:(id)arg2 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned)arg2 ;
-(void)handlePendingPrimaryConnectionChange;
-(void)setQualityDelegate:(NSObject*<VideoConferenceChannelQualityDelegate>)arg1 ;
-(NSObject*<VideoConferenceChannelQualityDelegate>)qualityDelegate;
-(void)updateLastReceivedAudioTime;
-(void)updateLastReceivedPacket:(BOOL)arg1 packetType:(int)arg2 ;
-(id)activeControlChannel;
-(void)timeoutUnfinishedConnection;
-(void)setUpFirstRemoteFrameTimer;
-(BOOL)isLocalOrRemoteOnCellular;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id*)arg8 ;
-(int)rtcpDescriptor;
-(void)reportWRMMetrics:(const SCD_Struct_VC111*)arg1 ;
-(void)sendWRMStatusUpdate:(const SCD_Struct_VC95*)arg1 ;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(void)setRemoteCallInfoFromInviteDictionary:(id)arg1 ;
-(void)setShouldSendAudio:(BOOL)arg1 ;
-(void)setSuspendAudio;
-(void)setResumeAudio;
-(BOOL)setPauseAudio:(BOOL)arg1 error:(id*)arg2 ;
-(void)setSuspendVideo;
-(void)setResumeVideo;
-(BOOL)setPauseVideo:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)stillWantsToRelay;
-(void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)rcvdFirstRemoteFrame;
-(id)localParticipantID;
-(void)localCameraSwitchedFrom:(int)arg1 to:(int)arg2 ;
-(int)negotiatedReceivingFramerate;
-(BOOL)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 rtpTimestamp:(unsigned*)arg2 lastReceivedAudioTime:(double*)arg3 padding:(char*)arg4 paddingLength:(char*)arg5 silence:(int*)arg6 ;
-(BOOL)isSKEOptimizationEnabled;
-(int)audioTierNetworkBitrate;
-(int)audioTierAudioCodecBitrate;
-(int)audioTierPacketsPerBundle;
-(int)audioTierRedNumPayloads;
-(int)audioTierPayload;
-(void)setSessionConferenceState:(unsigned)arg1 callID:(unsigned)arg2 ;
-(void)setSessionConferenceVisualRectangle:(CGRect)arg1 callID:(unsigned)arg2 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 ;
-(void)messageVCMomentsRequest:(id)arg1 ;
-(void)reportSymptom:(unsigned)arg1 ;
-(BOOL)isVideoRunning;
-(long long)connectionChangeState;
-(void)setConnectionChangeState:(long long)arg1 ;
-(void)setConnectionManager:(VCConnectionManager *)arg1 ;
-(unsigned short)maxPacketLength;
-(void)setMaxPacketLength:(unsigned short)arg1 ;
-(void)setVideoPayload:(long long)arg1 ;
-(BOOL)isWaitingForICEResult;
-(void)setIsWaitingForICEResult:(BOOL)arg1 ;
-(BOOL)receivedSIPInvite;
-(void)setReceivedSIPInvite:(BOOL)arg1 ;
-(tagHANDLE*)hMediaQueue;
-(void)setHMediaQueue:(tagHANDLE*)arg1 ;
-(void)setHAFRC:(tagHANDLE*)arg1 ;
-(GKRingBuffer *)ringBuf;
-(void)setRingBuf:(GKRingBuffer *)arg1 ;
-(unsigned)lastReceived;
-(void)setLastReceived:(unsigned)arg1 ;
-(BOOL)useControlByte;
-(BOOL)useUEP;
-(int)bandwidthUpstream;
-(void)setBandwidthUpstream:(int)arg1 ;
-(int)bandwidthDownstream;
-(void)setBandwidthDownstream:(int)arg1 ;
-(NSArray *)mutedPeers;
-(void)setMutedPeers:(NSArray *)arg1 ;
-(BOOL)audioIsPaused;
-(void)setNatType:(int)arg1 ;
-(NSString *)peerCN;
-(void)setPeerCN:(NSString *)arg1 ;
-(void)setPacketLossRate:(double)arg1 ;
-(double)networkConditionsTimeoutInSeconds;
-(void)setNetworkConditionsTimeoutInSeconds:(double)arg1 ;
-(int)signalStrengthBars;
-(void)setSignalStrengthBars:(int)arg1 ;
-(int)signalStrengthDisplayBars;
-(void)setSignalStrengthDisplayBars:(int)arg1 ;
-(int)signalStrengthMaxDisplayBars;
-(void)setSignalStrengthMaxDisplayBars:(int)arg1 ;
-(float)packetLateAndMissingRatio;
-(void)setPacketLateAndMissingRatio:(float)arg1 ;
-(BOOL)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(BOOL)arg1 ;
-(BOOL)useRateControl;
-(BOOL)isRTCPFBEnabled;
-(void)setIsRTCPFBEnabled:(BOOL)arg1 ;
-(void)setIsStarted:(BOOL)arg1 ;
-(void)setImageAttributeRules:(VCImageAttributeRules *)arg1 ;
-(void)setRemoteFrameWidth:(unsigned)arg1 ;
-(void)setRemoteFrameHeight:(unsigned)arg1 ;
-(BOOL)isRemoteMediaStalled;
-(void)setBasebandCodecType:(NSString *)arg1 ;
-(long long)sipState;
-(void)setSipState:(long long)arg1 ;
-(BOOL)didSend200OK;
-(void)setDidSend200OK:(BOOL)arg1 ;
-(NSString *)peerReportingID;
-(void)setPeerReportingID:(NSString *)arg1 ;
-(NSData *)srtpKeyBytes;
-(void)setSrtpKeyBytes:(NSData *)arg1 ;
-(void)vcSecureDataChannel:(id)arg1 messageType:(unsigned)arg2 receivedData:(id)arg3 ;
-(void)sendBasebandCodecMessage;
-(void)avTelephonyInterface:(id)arg1 vocoderInfoChangedToType:(id)arg2 sampleRate:(id)arg3 ;
-(void)didReceiveCaptions:(id)arg1 ;
-(int)handleIncomingWithCallID:(unsigned)arg1 msgIn:(const char*)arg2 msgOut:(char*)arg3 optional:(void*)arg4 confIndex:(int*)arg5 error:(id*)arg6 ;
-(int)setupEncryptionWithKey:(const _CFData*)arg1 confIndex:(int*)arg2 ;
-(BOOL)startMediaQueue:(id*)arg1 ;
-(void)processSIPMessage:(char*)arg1 msgOut:(char*)arg2 optional:(void*)arg3 confIndex:(int*)arg4 ;
-(BOOL)shouldNotifyDelegateDidStartBeforeAudioSetup;
-(void)notifyDelegateSessionStarted;
-(void)enableSessionHealthMonitor;
-(void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char*)arg2 ;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1 ;
-(int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned*)arg2 ;
-(int)sipCallback:(int)arg1 callID:(unsigned)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(SecIdentityRef)retrieveIdentity;
-(void)setupDTLSDefaults;
-(void)setLocalIdentityForKeyExchange;
-(void)setupMessaging;
-(void)logIdentity:(SecIdentityRef)arg1 ;
-(long long)calculateSIPEndAction:(BOOL)arg1 currentState:(long long)arg2 error:(id)arg3 ;
-(void)doSipEndAction:(int)arg1 callID:(unsigned)arg2 error:(id)arg3 ;
-(void)disableSessionHealthMonitor;
-(void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2 ;
-(BOOL)treatAsCellular;
-(void)negotiateMediaMaxBandwidth;
-(BOOL)setupAudioCodecWithPayload:(int)arg1 ;
-(id)negotiatedAudioPayloadTypes;
-(BOOL)setRTPPayloads:(id)arg1 withError:(id*)arg2 ;
-(BOOL)createRTPHandles:(id*)arg1 ;
-(BOOL)prepareSRTPWithError:(id*)arg1 ;
-(BOOL)createMediaQueueHandle:(id*)arg1 ;
-(void)applyNegotiatedSettings;
-(BOOL)applyNegotiatedAudioSettings:(id*)arg1 ;
-(BOOL)applyNegotiatedVideoSettings:(id*)arg1 ;
-(void)applyNegotiatedCaptionsSettings;
-(void)applyNegotiatedMomentsSettings;
-(BOOL)setMediaQueueStreamSettings;
-(BOOL)startRateControl:(id*)arg1 ;
-(BOOL)createAudioTransmitter:(id*)arg1 ;
-(BOOL)negotiatePayloads:(id*)arg1 withError:(id*)arg2 ;
-(BOOL)negotiateMaxBandwidth:(int*)arg1 ;
-(int)getAllCompatibleVideoPayloads:(int*)arg1 forMediaType:(int)arg2 ;
-(id)getCompatibleLocalFeaturesListForPayloads:(int*)arg1 count:(int)arg2 ;
-(BOOL)createSDP:(int*)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int*)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int*)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(imageTag*)arg10 imageSendCount:(int*)arg11 imageSizesRecv:(imageTag*)arg12 imageRecvCount:(int*)arg13 sdp:(char*)arg14 numSDPBytes:(int*)arg15 error:(id*)arg16 ;
-(BOOL)stopMediaQueue:(id*)arg1 ;
-(void)releaseRTPHandles;
-(void)getAllPayloadsForAudio:(int*)arg1 count:(int*)arg2 secondaryPayloads:(int*)arg3 secondaryCount:(int*)arg4 ;
-(void)getAllPayloadsForVideo:(int*)arg1 count:(int*)arg2 ;
-(id)allPayloadsLocalFeaturesString;
-(BOOL)canSendSIPInviteWithError:(id*)arg1 ;
-(id)createInviteSDPWithError:(id*)arg1 ;
-(BOOL)establishSIPDialogWithSDP:(id)arg1 error:(id*)arg2 ;
-(int)fillMediaControlInfo:(void*)arg1 ;
-(int)processMediaControlInfo:(void*)arg1 isAudio:(BOOL)arg2 ;
-(int)mapPacketMultiplexModeToRTPMode:(long long)arg1 ;
-(id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(BOOL)arg3 ;
-(BOOL)setMatchedFeaturesString:(char*)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3 ;
-(BOOL)choosePayload:(id)arg1 ;
-(BOOL)chooseSecondaryPayloads:(id)arg1 ;
-(BOOL)chooseDTXPayloads:(id)arg1 ;
-(void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2 ;
-(BOOL)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1 ;
-(BOOL)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4 ;
-(BOOL)isValidVideoPayloadOverride:(id)arg1 ;
-(BOOL)sendSIPInviteWithError:(id*)arg1 ;
-(BOOL)setupCallerRTPChannelWithError:(id*)arg1 ;
-(BOOL)setupAudioCookies;
-(void)stopAudioIO:(/*^block*/id)arg1 ;
-(int)interfaceForCurrentCall;
-(void)adjustBitrateForConnectionType;
-(BOOL)initializeVideoTransmitter:(id*)arg1 encodeRule:(id)arg2 captureRuleWifi:(id)arg3 captureRuleCellular:(id)arg4 unpausing:(BOOL)arg5 reportingAgent:(opaqueRTCReportingRef)arg6 fecHeaderV1Enabled:(BOOL)arg7 ;
-(BOOL)initializeVideoReceiver:(id*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 fecHeaderV1Enabled:(BOOL)arg3 ;
-(BOOL)startVideoReceive:(id*)arg1 ;
-(BOOL)stopVideoReceive:(id*)arg1 isPausing:(BOOL)arg2 ;
-(BOOL)startAFRC:(id*)arg1 ;
-(BOOL)startVCRC:(id*)arg1 ;
-(void)setupAACELDPayload:(int)arg1 ;
-(unsigned)codecBitmapForPayloads:(id)arg1 ;
-(BOOL)sipConnectWithError:(id*)arg1 ;
-(unsigned)maxBitrateForConnectionType;
-(double)audioReceivingBitrateKbps;
-(double)audioTransmittingBitrateKbps;
-(double)sessionReceivingFramerate;
-(double)sessionTransmittingFramerate;
-(void)reportDashboardEndResult:(BOOL)arg1 ;
-(BOOL)stopRateControl:(id*)arg1 ;
-(void)cleanupMedia;
-(void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3 ;
-(void)remotePauseDidChangeToState:(BOOL)arg1 forVideo:(BOOL)arg2 ;
-(void)addScreenConfigToSDP:(id)arg1 ;
-(void)getAllPayloadsForScreen:(int*)arg1 count:(int*)arg2 ;
-(void)doSipEndProc:(id)arg1 ;
-(const char*)matchedFeaturesStringForPayload:(int)arg1 ;
-(void)setupBitrateNegotiation;
-(void)shouldSendBlackFrame:(BOOL)arg1 ;
-(void)sendSymptomToRemote:(id)arg1 groupID:(id)arg2 ;
-(void)setDuplicationFlag:(BOOL)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 notifyPeer:(BOOL)arg3 ;
-(void)setupVideoPauseMessages;
-(void)setupAudioPauseMessages;
-(void)setupCellTechChangeMessages;
-(void)setupMomentsMessages;
-(void)setupAudioPausedHBMessages;
-(void)setupCallingModeMessages;
-(void)setupHandoverCandidateChangeMessage;
-(void)setupPiPStateChangeMessage;
-(void)setupPreferredInterfaceMessage;
-(void)setupSymptomEnabledMessage;
-(void)setupBasebandCodecInfoMessages;
-(void)setupDisconnectMessage;
-(void)setupAudioOnOffStateMessages;
-(void)controlChannel:(id)arg1 receivedData:(id)arg2 transactionID:(unsigned)arg3 fromParticipant:(id)arg4 ;
-(void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2 ;
-(void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2 ;
-(void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2 ;
-(void)transportSession:(id)arg1 sendRelayResponse:(id)arg2 ;
-(void)packMeters:(char*)arg1 withLength:(char*)arg2 ;
-(void)callAlarmsWithRTPTimeStamp:(SCD_Struct_AV77*)arg1 ;
-(void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3 ;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 audioTS:(unsigned)arg2 audioHT:(double)arg3 videoHT:(SCD_Struct_AV77)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6 ;
-(unsigned)parameterSetForPayload:(int)arg1 ;
-(void)updateStatistics:(SCD_Struct_AV29)arg1 ;
-(void)processBlackFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)updateVideoQualityNotification:(double)arg1 ;
-(void)onPlayVideo:(CVBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(CGSize)computeVisibleAspectRatioWithRemoteScreenAspectRatio:(CGSize)arg1 remoteExpectedAspectRatio:(CGSize)arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4 ;
@end

