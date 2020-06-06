/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFContinuityScannerClient.h>

@class NSMutableSet, NSHashTable, NSString;

@interface SFContinuityScanManager : SFXPCClient <SFContinuityScannerClient> {

	NSMutableSet* _foundDevices;
	NSHashTable* _observers;
	unsigned long long _scanTypes;

}

@property (retain) NSMutableSet * foundDevices;                     //@synthesize foundDevices=_foundDevices - In the implementation block
@property (retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (assign) unsigned long long scanTypes;                    //@synthesize scanTypes=_scanTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(void)setScanTypes:(unsigned long long)arg1 ;
-(void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)scanTypes;
-(void)lostDeviceWithDevice:(id)arg1 ;
-(void)receivedAdvertisement:(id)arg1 ;
-(void)foundDeviceWithDevice:(id)arg1 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(NSMutableSet *)foundDevices;
-(void)setFoundDevices:(NSMutableSet *)arg1 ;
@end

