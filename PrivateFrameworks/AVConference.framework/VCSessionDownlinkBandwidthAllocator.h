/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VCSessionDownlinkBandwidthAllocator : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _clients;
	NSMutableDictionary* _selectedMediaEntriesForClients;
	NSMutableDictionary* _allocatedMediaEntriesForClients;
	NSMutableSet* _decoderConstrainedClients;
	NSMutableSet* _bandwidthConstrainedClients;
	NSMutableArray* _sortedMediaEntries;
	opaqueRTCReportingRef _reportingAgent;
	unsigned _maxConcurrentVideoClients;

}
-(void)dealloc;
-(void)reset;
-(id)initWithReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)actualNetworkBitrateVideoDidChangeForClient:(id)arg1 ;
-(void)actualNetworkBitrateAudioDidChangeForClient:(id)arg1 ;
-(id)distributeBitrate:(unsigned)arg1 ;
-(void)registerForBandwidthAllocationWithClient:(id)arg1 ;
-(void)deregisterForBandwidthAllocationWithClient:(id)arg1 ;
-(unsigned)requiredAudioBitrate:(unsigned)arg1 highestAudioBitrates:(id)arg2 ;
-(void)sortMediaEntries;
-(unsigned long long)simultaneousTalkers;
-(void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned)arg2 ;
-(void)updateClient:(id)arg1 bandwidthConstrained:(BOOL)arg2 decoderConstrained:(BOOL)arg3 ;
-(void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1 ;
-(void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned)arg2 actualNetworkBitrate:(unsigned)arg3 optedInStreamID:(unsigned short)arg4 actualStreamID:(unsigned short)arg5 ;
@end

