/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <TVRemoteCore/_TVRXVoiceRecorderDelegate.h>
#import <TVRemoteCore/_TVRCMROriginDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class _TVRXDevice, _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, NSSet, _TVRCMediaRemoteEventTranslator, _TVRXVoiceRecorder, NSMutableArray, _TVRXKeyboardController, _TVRCMediaRemoteKeyboardImplManager, NSString;

@interface _TVRCMediaRemoteDeviceImpl : NSObject <_TVRXVoiceRecorderDelegate, _TVRCMROriginDelegate, _TVRCDeviceImpl> {

	unsigned _voiceDeviceID;
	_TVRXDevice* _device;
	_TVRCMRTelevisionWrapper* _television;
	_TVRCMROriginWrapper* _origin;
	NSSet* _mediaButtons;
	NSSet* _volumeButtons;
	unsigned long long _touchDeviceID;
	unsigned long long _gameControllerID;
	long long _gameControllerState;
	_TVRCMediaRemoteEventTranslator* _eventTranslator;
	_TVRXVoiceRecorder* _voiceRecorder;
	NSMutableArray* _queuedAudioBuffers;
	_TVRXKeyboardController* _keyboardController;
	_TVRCMediaRemoteKeyboardImplManager* _keyboardImplManager;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                                  //@synthesize television=_television - In the implementation block
@property (nonatomic,retain) _TVRCMROriginWrapper * origin;                                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) NSSet * mediaButtons;                                                     //@synthesize mediaButtons=_mediaButtons - In the implementation block
@property (nonatomic,copy) NSSet * volumeButtons;                                                    //@synthesize volumeButtons=_volumeButtons - In the implementation block
@property (assign,nonatomic) unsigned long long touchDeviceID;                                       //@synthesize touchDeviceID=_touchDeviceID - In the implementation block
@property (assign,nonatomic) unsigned voiceDeviceID;                                                 //@synthesize voiceDeviceID=_voiceDeviceID - In the implementation block
@property (assign,nonatomic) unsigned long long gameControllerID;                                    //@synthesize gameControllerID=_gameControllerID - In the implementation block
@property (assign,nonatomic) long long gameControllerState;                                          //@synthesize gameControllerState=_gameControllerState - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteEventTranslator * eventTranslator;                      //@synthesize eventTranslator=_eventTranslator - In the implementation block
@property (nonatomic,retain) _TVRXVoiceRecorder * voiceRecorder;                                     //@synthesize voiceRecorder=_voiceRecorder - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedAudioBuffers;                                    //@synthesize queuedAudioBuffers=_queuedAudioBuffers - In the implementation block
@property (nonatomic,retain) _TVRXKeyboardController * keyboardController;                           //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardImplManager * keyboardImplManager;              //@synthesize keyboardImplManager=_keyboardImplManager - In the implementation block
@property (assign,nonatomic,__weak) _TVRXDevice * device;                                            //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithTelevision:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)identifier;
-(void)disconnect;
-(long long)connectionType;
-(id)model;
-(_TVRXDevice *)device;
-(_TVRCMROriginWrapper *)origin;
-(void)connect;
-(void)setOrigin:(_TVRCMROriginWrapper *)arg1 ;
-(_TVRXKeyboardController *)keyboardController;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(id)initWithTelevision:(id)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)supportedButtons;
-(BOOL)supportsTouchEvents;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendTouchEvent:(id)arg1 ;
-(_TVRXVoiceRecorder *)voiceRecorder;
-(void)_setupKeyboardController;
-(id)alternateIdentifiers;
-(NSSet *)mediaButtons;
-(void)setMediaButtons:(NSSet *)arg1 ;
-(unsigned long long)pairingCapability;
-(void)setAuthenticationSupported:(BOOL)arg1 ;
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2 ;
-(void)voidRecorderDidStop:(id)arg1 ;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2 ;
-(void)_nameChanged:(id)arg1 ;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)_connectionRequestedPairing:(SCD_Struct_TV9)arg1 continuation:(/*^block*/id)arg2 ;
-(void)_addConnectionStateHandler;
-(void)_becameDisconnected:(id)arg1 ;
-(void)_removeConnectionStateHandler;
-(void)_resetAllState;
-(void)_sendEquivalentGameButton:(id)arg1 ;
-(void)_connectionStateChanged:(unsigned)arg1 error:(id)arg2 ;
-(void)_becameConnected;
-(void)_registerTouchDevice;
-(void)_setupVoiceRecorder;
-(void)_beginObservingNowPlaying;
-(void)_setupVolumeControls;
-(void)_registerGameControllerInputModeHandler;
-(void)_removePairingRecords;
-(void)_unregisterGameControllerInputModeHandler;
-(void)_teardownVolumeControls;
-(void)_registerVoiceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_voiceRecorderStateChanged:(unsigned)arg1 ;
-(void)_drainAndClearAudioBufferQueue;
-(void)_setupOriginIfNeeded;
-(void)_volumeControlsDidUpdate:(id)arg1 ;
-(void)_reloadVolumeControlAvailability;
-(void)setVolumeButtons:(NSSet *)arg1 ;
-(void)_enableVolumeButtons:(BOOL)arg1 ;
-(BOOL)_isSystemVersionSupported;
-(void)_gameControllerInputModeChanged:(unsigned)arg1 ;
-(void)_registerGameControllerID;
-(void)_unregisterGameControllerID;
-(void)origin:(id)arg1 updatedSupportedCommands:(id)arg2 ;
-(NSSet *)volumeButtons;
-(unsigned long long)touchDeviceID;
-(void)setTouchDeviceID:(unsigned long long)arg1 ;
-(unsigned)voiceDeviceID;
-(void)setVoiceDeviceID:(unsigned)arg1 ;
-(unsigned long long)gameControllerID;
-(void)setGameControllerID:(unsigned long long)arg1 ;
-(long long)gameControllerState;
-(void)setGameControllerState:(long long)arg1 ;
-(_TVRCMediaRemoteEventTranslator *)eventTranslator;
-(void)setEventTranslator:(_TVRCMediaRemoteEventTranslator *)arg1 ;
-(void)setVoiceRecorder:(_TVRXVoiceRecorder *)arg1 ;
-(NSMutableArray *)queuedAudioBuffers;
-(void)setQueuedAudioBuffers:(NSMutableArray *)arg1 ;
-(_TVRCMediaRemoteKeyboardImplManager *)keyboardImplManager;
-(void)setKeyboardImplManager:(_TVRCMediaRemoteKeyboardImplManager *)arg1 ;
@end

