/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VCHardwareSettings : NSObject {

	int _supportHEVC;
	BOOL _supportVCPEncoderInitialized;
	BOOL _supportVCPEncoder;
	NSMutableDictionary* _hardwareUsageModeSettings;

}

@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
+(long long)deviceClass;
-(id)init;
-(void)dealloc;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(unsigned)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1 ;
-(BOOL)isHEVCEncodeSupported:(int)arg1 ;
-(unsigned)tilesPerVideoFrame:(int)arg1 ;
-(id)featureListStringForH264:(int)arg1 ;
-(id)featureListStringForHEVC:(int)arg1 ;
-(BOOL)isHEVCDecodeSupported:(int)arg1 ;
-(BOOL)storeHardwareSettingsForAllOperatingModes;
-(unsigned)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1 ;
@end

