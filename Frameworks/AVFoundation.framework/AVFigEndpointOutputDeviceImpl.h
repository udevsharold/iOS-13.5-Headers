/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceImpl.h>

@protocol FigRoutingContextFactory;
@class AVOutputDevice, AVWeakReference, NSString, NSData, NSNumber, NSDictionary, NSArray;

@interface AVFigEndpointOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {

	AVOutputDevice* _parentDevice;
	AVWeakReference* _weakObserver;
	OpaqueFigEndpointRef _figEndpoint;
	OpaqueFigVolumeControllerStateRef _volumeController;
	id<FigRoutingContextFactory> _routingContextFactory;
	BOOL _useRouteConfigUpdatedNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputDevice * parentOutputDevice;                                                           //@synthesize parentDevice=_parentDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) BOOL inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) BOOL requiresAuthorization; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL canAccessRemoteAssets; 
@property (nonatomic,readonly) BOOL canAccessAppleMusic; 
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (nonatomic,readonly) BOOL canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,readonly) BOOL canBeGroupLeader; 
@property (nonatomic,readonly) BOOL isGroupLeader; 
@property (nonatomic,readonly) BOOL participatesInGroupPlayback; 
@property (nonatomic,readonly) BOOL groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) BOOL isLogicalDeviceLeader; 
@property (nonatomic,readonly) BOOL canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel; 
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender; 
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) BOOL supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(long long)deviceType;
-(NSString *)groupID;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(NSNumber *)batteryLevel;
-(NSString *)manufacturer;
-(NSString *)ID;
-(NSString *)modelID;
-(long long)deviceSubType;
-(unsigned long long)deviceFeatures;
-(NSData *)identifyingMACAddress;
-(void)setParentOutputDevice:(AVOutputDevice *)arg1 ;
-(NSNumber *)caseBatteryLevel;
-(NSNumber *)leftBatteryLevel;
-(NSNumber *)rightBatteryLevel;
-(NSNumber *)supportsDataOverACLProtocol;
-(NSNumber *)isInEar;
-(NSDictionary *)airPlayProperties;
-(BOOL)isInUseByPairedDevice;
-(NSArray *)connectedPairedDevices;
-(BOOL)requiresAuthorization;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)canSetVolume;
-(BOOL)canBeGrouped;
-(BOOL)canBeGroupLeader;
-(BOOL)isGroupLeader;
-(BOOL)participatesInGroupPlayback;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBluetoothSharing;
-(long long)HAPConformance;
-(NSArray *)availableBluetoothListeningModes;
-(NSString *)currentBluetoothListeningMode;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentBluetoothListeningMode:(NSString *)arg1 ;
-(AVOutputDevice *)parentOutputDevice;
-(void)_volumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(void)_canSetEndpointVolumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 routingContextFactory:(id)arg3 useRouteConfigUpdatedNotification:(BOOL)arg4 ;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
@end

