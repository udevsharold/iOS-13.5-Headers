/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AUSetupController.h>

@protocol OS_dispatch_semaphore;
@class NSMutableSet, EasyConfigDevice, NSDictionary, NSString, NSTimer, NSObject;

@interface AUMFiSetupController : AUSetupController {

	NSMutableSet* _mfiSetupDelegates;
	EasyConfigDevice* _easyConfigDevice;
	NSDictionary* _accessoryResponseDict;
	NSDictionary* _autoGuessRecommendationDict;
	NSDictionary* _setupOptionsDict;
	NSDictionary* _destinationNetworkScanRecord;
	NSDictionary* _targetMFiDeviceScanRecord;
	NSString* _destinationNetworkSSID;
	NSString* _destinationNetworkPassword;
	NSTimer* _linkUpOnDestinationNetworkTimer;
	NSString* _postConfigTargetDeviceFriendlyName;
	NSObject*<OS_dispatch_semaphore> _askUserForPasswordSemaphore;
	NSObject*<OS_dispatch_semaphore> _easyConfigConfigurationCompleteSemaphore;
	NSObject*<OS_dispatch_semaphore> _linkUpOnTargetSWAPSemaphore;
	int _waitingForLinkState;
	BOOL _setupEnded;
	BOOL _successfullyEstablishedLinkOnTargetDeviceSWAP;
	BOOL _successfullyEstablishedLinkOnDestinationAP;
	BOOL _promptedUserForDestinationWiFiPSK;
	BOOL _postediAPAccessoryConfiguredNotification;
	BOOL _destinationNetworkPasswordAccepted;
	long long _lastHeardEasyConfigProgressNotification;
	SCD_Struct_AU17 _easyConfigPreConfigMetrics;
	SCD_Struct_AU18 _easyConfigPostConfigMetrics;
	double _timeSWAPJoinStarted;
	double _timeDestinationAPJoinStarted;

}

@property (nonatomic,readonly) NSMutableSet * setupDelegates;              //@synthesize mfiSetupDelegates=_mfiSetupDelegates - In the implementation block
@property (retain) NSTimer * linkUpOnDestinationNetworkTimer;              //@synthesize linkUpOnDestinationNetworkTimer=_linkUpOnDestinationNetworkTimer - In the implementation block
@property (copy) NSString * destinationNetworkPassword;                    //@synthesize destinationNetworkPassword=_destinationNetworkPassword - In the implementation block
+(id)setupController;
-(id)init;
-(void)dealloc;
-(void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3 ;
-(void)callbackAskUserForUncertifiedResult:(int)arg1 ;
-(void)callbackAskUserForSetupCodeResult:(int)arg1 password:(id)arg2 ;
-(NSMutableSet *)setupDelegates;
-(int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2 ;
-(int)updateSettingsAsync;
-(int)cancelSetup;
-(id)targetBaseInfoDict;
-(void)invalidateLinkUpOnDestinationNetworkTimer;
-(void)stopListeningToAllNotifications;
-(void)linkChangeNotification:(id)arg1 ;
-(int)joinTargetSWAP;
-(int)sendProgressToUI:(int)arg1 withParamDict:(id)arg2 ;
-(void)startEasyConfigWhenReady;
-(int)endSetup:(int)arg1 ;
-(void)linkUpOnSWAP:(id)arg1 ;
-(void)linkUpOnDestinationAP:(id)arg1 ;
-(void)joinSWAPDone:(id)arg1 ;
-(void)setLinkUpOnDestinationNetworkTimer:(NSTimer *)arg1 ;
-(void)setDestinationNetworkPassword:(NSString *)arg1 ;
-(void)askUserForNetworkPassword:(id)arg1 ;
-(void)handleEasyConfigProgress:(id)arg1 ;
-(void)handleEasyConfigStopped:(id)arg1 ;
-(void)handleEasyConfigProgressAppliedConfigurationToDevice:(id)arg1 ;
-(void)handleEasyConfigProgressSearchingForPostConfigDevice:(id)arg1 ;
-(void)joinDestinationAPDone:(id)arg1 ;
-(void)joinDestinationNetworkTimeoutFired:(id)arg1 ;
-(void)askUserForSetupCodeWithRetryStatus:(BOOL)arg1 ;
-(void)acquireDestinationNetworkPassword;
-(void)askUserForUncertified;
-(void)_startEasyConfigWhenReady;
-(void)createEasyConfigDeviceConfiguration;
-(void)startListeningForEasyConfigDeviceStatusNotifications;
-(int)sendSetupCompleteToUIWithResult:(int)arg1 ;
-(int)sendiAPOverWiFiDeviceConfiguredXPCMessage;
-(void)logCompletionStatus:(int)arg1 ;
-(void)stopListeningToEasyConfigDeviceStatusNotifications;
-(NSTimer *)linkUpOnDestinationNetworkTimer;
-(NSString *)destinationNetworkPassword;
@end

