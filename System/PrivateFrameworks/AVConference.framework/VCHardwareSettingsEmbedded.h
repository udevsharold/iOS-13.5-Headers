/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsEmbeddedProtocol.h>

@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {

	NSString* _deviceName;
	int _screenWidth;
	int _screenHeight;
	int _deviceClass;
	long long _chipId;
	long long _videoEncoderType;
	BOOL _hasBasebandInitialized;
	BOOL _hasBaseband;
	BOOL _hasAppleNeuralEngine;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) BOOL hasBaseband; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) BOOL hasAppleNeuralEngine; 
@property (nonatomic,readonly) unsigned audioPacketLossConcealmentAlgorithmAACELD; 
@property (nonatomic,readonly) BOOL isSecondDisplaySupportEnabled; 
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
+(id)sharedInstance;
+(long long)deviceClass;
-(id)init;
-(void)dealloc;
-(NSString *)deviceName;
-(long long)deviceClass;
-(int)screenHeight;
-(int)screenWidth;
-(long long)chipId;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxActiveVideoEncoders;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)isDeviceLargeScreen;
-(BOOL)supportsHEIFEncoding;
-(BOOL)hasBaseband;
-(void)_initializeScreenDimension;
-(long long)videoEncoderType;
-(BOOL)hasAppleNeuralEngine;
-(BOOL)isSecondDisplaySupportEnabled;
-(unsigned)audioPacketLossConcealmentAlgorithmAACELD;
@end
