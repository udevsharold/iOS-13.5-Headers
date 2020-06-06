/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VCBitrateArbiter : NSObject {

	unsigned _maxAllowedBitrate;
	unsigned _maxAllowedBitrate2G;
	unsigned _maxAllowedBitrate3G;
	unsigned _maxAllowedBitrateLTE;
	unsigned _maxAllowedBitrateWifi;
	unsigned _maxAllowedScreenShareBitrate2G;
	unsigned _maxAllowedScreenShareBitrate3G;
	unsigned _maxAllowedScreenShareBitrateLTE;
	unsigned _maxAllowedScreenShareBitrateWifi;
	unsigned _maxAllowedAudioOnlyBitrate2G;
	unsigned _maxAllowedAudioOnlyBitrate3G;
	unsigned _maxAllowedAudioOnlyBitrateLTE;
	unsigned _maxAllowedAudioOnlyBitrateWifi;
	unsigned _maxiBitrateIPadCompanionP2P;
	unsigned _maxAllowedBitrateIPadCompanionUSB;
	NSMutableArray* supportedBitrateRules;
	unsigned _maxAllowedBitrateP2P;
	unsigned _maxAllowedBitrateUSB;

}

@property (readonly) unsigned maxAllowedBitrate;                  //@synthesize maxAllowedBitrate=_maxAllowedBitrate - In the implementation block
@property (readonly) unsigned maxAllowedBitrate2G;                //@synthesize maxAllowedBitrate2G=_maxAllowedBitrate2G - In the implementation block
@property (readonly) unsigned maxAllowedBitrate3G;                //@synthesize maxAllowedBitrate3G=_maxAllowedBitrate3G - In the implementation block
@property (readonly) unsigned maxAllowedBitrateLTE;               //@synthesize maxAllowedBitrateLTE=_maxAllowedBitrateLTE - In the implementation block
@property (readonly) unsigned maxAllowedBitrateWifi;              //@synthesize maxAllowedBitrateWifi=_maxAllowedBitrateWifi - In the implementation block
@property (readonly) unsigned maxAllowedBitrateP2P;               //@synthesize maxAllowedBitrateP2P=_maxAllowedBitrateP2P - In the implementation block
@property (readonly) unsigned maxAllowedBitrateUSB;               //@synthesize maxAllowedBitrateUSB=_maxAllowedBitrateUSB - In the implementation block
-(void)dealloc;
-(unsigned)maxAllowedBitrateForConnection:(int)arg1 operatingMode:(int)arg2 ;
-(unsigned)maxAllowedAudioOnlyBitrateForConnection:(int)arg1 ;
-(unsigned)maxAllowedScreenShareCellularBitrate;
-(id)maxAllowedBitrateRuleForConnection:(int)arg1 ;
-(id)initWithDeviceRole:(int)arg1 callLogFile:(void*)arg2 ;
-(unsigned)maxAllowedCellularBitrate;
-(unsigned)maxAllowedBitrate;
-(void)readHardwareValues;
-(void)readStoreBagValues:(void*)arg1 ;
-(void)readCarrierBundleValues;
-(void)createSupportedBitrateRuleSets;
-(unsigned)maxAllowedScreenShareBitrateForConnection:(int)arg1 ;
-(unsigned)maxAllowedBitrateForConnection:(int)arg1 ;
-(unsigned)maxAllowedBitrate2G;
-(unsigned)maxAllowedBitrate3G;
-(unsigned)maxAllowedBitrateLTE;
-(unsigned)maxAllowedBitrateWifi;
-(unsigned)maxAllowedBitrateP2P;
-(unsigned)maxAllowedBitrateUSB;
@end

