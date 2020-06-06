/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PKMapContainer, NSTimer;

@interface PKPeerPaymentRecipientCache : NSObject {

	NSObject*<OS_dispatch_queue> _mapAccessQueue;
	PKMapContainer* _mapContainer;
	NSTimer* _mapNeedsWriteTimer;

}
+(id)sharedCache;
+(id)_instanceName;
-(id)init;
-(void)dealloc;
-(BOOL)purgeCache;
-(id)__init;
-(void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1 ;
-(BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1 ;
-(id)recipientForRecipientAddress:(id)arg1 ;
-(void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2 ;
-(void)purgeRecipientWithRecipientAddress:(id)arg1 ;
-(void)_updateMapsFromDisk;
-(void)_handlePurgedNotification:(id)arg1 ;
-(void)_handleDiskMapChangedNotification:(id)arg1 ;
-(id)_keyForRecipientAddress:(id)arg1 ;
-(void)_setMapNeedsWrite;
-(BOOL)_writeMapToDisk;
-(BOOL)_canReadMap;
-(BOOL)_canWriteMap;
@end

