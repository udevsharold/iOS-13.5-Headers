/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKSConnectivitySettings : NSObject
+(void)setServerAddresses:(id)arg1 ;
+(tagIPPORT*)getIPPortForService:(id)arg1 ;
+(id)getClientOption:(id)arg1 ;
+(id)getAddressForService:(id)arg1 ;
+(int)getNATTypeFromCarrierBundle;
+(int)getKeepAliveTimeoutFromCarrierBundle;
+(id)getAllSettings;
+(void)setAddress:(id)arg1 forService:(id)arg2 ;
+(void)setClientOptions:(id)arg1 ;
+(tagIPPORT*)getCachedIPPort;
+(void)clearAllSettingsWithRefreshIntervalInSeconds:(int)arg1 ;
+(BOOL)supportsHEVCEncoding;
+(BOOL)supportsEVSCodec;
+(BOOL)supportsRedAudio;
+(BOOL)supportiRATRecommendation;
+(int)getRateControllerType;
+(int)getDecryptionTimeoutInterval;
+(int)getNewSessionJoiningInterval;
+(int)getAdaptiveLearningState;
+(int)getShortTermHistoryLength;
+(int)getLongTermHistoryLength;
+(double)getAdaptiveLearningA;
+(double)getAdjustmentFactorA;
+(double)getShortTermValueWeightA;
+(double)getLongTermValueWeightA;
+(double)getAdaptiveLearningB;
+(double)getAdjustmentFactorB;
+(double)getShortTermValueWeightB;
+(double)getLongTermValueWeightB;
+(double)getAdjustmentFactorC;
+(double)getShortTermValueWeightC;
+(double)getLongTermValueWeightC;
+(double)getThresholdForSwitch:(unsigned)arg1 ;
+(unsigned)getAbTestMasterLocalSwitches;
+(unsigned char)getAbTestingState;
+(id)getTestGroupPermutations:(unsigned char)arg1 ;
+(double)getRemoteMediaStallTimeout;
+(double)getNoRemoteDuplicationThresholdFast;
-(id)init;
-(void)dealloc;
@end

