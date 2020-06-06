/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPBTLECentralManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUBLEAdvertiser, HMFTimer, HMDHAPAccessory, HAPBTLECentralManager, HMDAccessoryQueues, HMFUnfairLock, NSString, NSArray;

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	CUBLEAdvertiser* leAdvertiser;
	HMFTimer* advertisementTimer;
	HMDHAPAccessory* accessory;
	HAPBTLECentralManager* centralManager;
	HMDAccessoryQueues* powerOnQueues;
	HMFUnfairLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) HMFUnfairLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) CUBLEAdvertiser * leAdvertiser; 
@property (nonatomic,retain) HMFTimer * advertisementTimer; 
@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) HAPBTLECentralManager * centralManager; 
@property (nonatomic,retain) HMDAccessoryQueues * powerOnQueues; 
@property (getter=isReady,readonly) BOOL isReady; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedAdvertiser;
+(id)initializeAdvertiser;
-(id)init;
-(HMFUnfairLock *)lock;
-(BOOL)isReady;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)setCentralManager:(HAPBTLECentralManager *)arg1 ;
-(HAPBTLECentralManager *)centralManager;
-(void)didUpdateBTLEState:(long long)arg1 ;
-(HMDAccessoryQueues *)powerOnQueues;
-(void)_completePendingPowerOnRequest:(id)arg1 ;
-(void)_flushQueue:(id)arg1 ;
-(void)stopAdvertisement:(id)arg1 ;
-(void)_flushQueues;
-(CUBLEAdvertiser *)leAdvertiser;
-(void)setLeAdvertiser:(CUBLEAdvertiser *)arg1 ;
-(void)_clearAdvertiser;
-(void)_stopAdvertisement:(id)arg1 ;
-(HMFTimer *)advertisementTimer;
-(void)setAdvertisementTimer:(HMFTimer *)arg1 ;
-(void)_startAdvertising;
-(void)_cancelOn:(id)arg1 ;
-(void)_advertisementTimeout;
-(void)cancelOn:(id)arg1 ;
-(void)powerOn:(id)arg1 ;
-(BOOL)isAdvertisingForAccessory:(id)arg1 ;
-(void)setPowerOnQueues:(HMDAccessoryQueues *)arg1 ;
@end

