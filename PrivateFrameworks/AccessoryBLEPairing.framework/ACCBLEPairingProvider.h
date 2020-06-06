/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessoryBLEPairing.framework/AccessoryBLEPairing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCBLEPairingProviderProtocol, ACCBLEPairingXPCServerProtocol;
@class NSString, NSXPCConnection, NSMutableDictionary;

@interface ACCBLEPairingProvider : NSObject {

	int _lastScorpiusDetectType;
	int _accDetectToken;
	id<ACCBLEPairingProviderProtocol> _delegate;
	NSString* _providerUID;
	NSXPCConnection* _serverConnection;
	id<ACCBLEPairingXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;

}

@property (nonatomic,retain) NSString * providerUID;                                         //@synthesize providerUID=_providerUID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                             //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCBLEPairingXPCServerProtocol> remoteObject;                //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                              //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) int accDetectToken;                                             //@synthesize accDetectToken=_accDetectToken - In the implementation block
@property (assign,nonatomic,__weak) id<ACCBLEPairingProviderProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int lastScorpiusDetectType;                                     //@synthesize lastScorpiusDetectType=_lastScorpiusDetectType - In the implementation block
-(void)dealloc;
-(id<ACCBLEPairingProviderProtocol>)delegate;
-(void)setDelegate:(id<ACCBLEPairingProviderProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<ACCBLEPairingXPCServerProtocol>)remoteObject;
-(NSMutableDictionary *)accessories;
-(void)setRemoteObject:(id<ACCBLEPairingXPCServerProtocol>)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)connectToServer;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(int)getAccDetectType:(int)arg1 ;
-(int)lastScorpiusDetectType;
-(void)setLastScorpiusDetectType:(int)arg1 ;
-(void)startBLEUpdates:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 bRadioUpdatesOn:(BOOL)arg4 bPairInfoUpdatesOn:(BOOL)arg5 ;
-(void)deviceStateUpdate:(id)arg1 blePairingUUID:(id)arg2 bRadioOn:(BOOL)arg3 pairState:(int)arg4 bPairModeOn:(BOOL)arg5 ;
-(void)devicePairingData:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairData:(id)arg4 ;
-(void)deviceUpdatePairingInfo:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairInfo:(id)arg4 ;
-(void)stopBLEUpdates:(id)arg1 blePairingUUID:(id)arg2 ;
-(void)accessoryBLEPairingAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4 ;
-(void)accessoryBLEPairingDetached:(id)arg1 blePairingUUID:(id)arg2 ;
-(void)accessoryBLEPairingStateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned)arg3 btRadioOn:(BOOL)arg4 pairingState:(int)arg5 pairingModeOn:(BOOL)arg6 ;
-(void)accessoryBLEPairingInfoUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairInfoList:(id)arg4 ;
-(void)accessoryBLEPairingDataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairData:(id)arg4 ;
-(void)accessoryBLEPairingFinished:(id)arg1 blePairingUUID:(id)arg2 ;
-(int)accDetectToken;
-(void)setAccDetectToken:(int)arg1 ;
@end

