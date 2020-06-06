/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTBulletinSendQueuePassthrough.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSNumber, PCPersistentTimer, NSDate, PBCodable, BLTBulletinSendQueueAttachmentSender, BLTSendQueueSerializer;

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _queuedBlockHandlers;
	NSNumber* _timeout;
	PCPersistentTimer* _timeoutTimer;
	NSDate* _lastItemDate;
	PBCodable* _firstRequest;
	unsigned short _firstRequestType;
	NSDate* _lastQueueSendDate;
	BLTBulletinSendQueueAttachmentSender* _attachmentSender;
	BLTSendQueueSerializer* _queueSerializer;

}
-(id)init;
-(void)sendNow;
-(void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(BOOL)arg3 didSend:(/*^block*/id)arg4 ;
-(BOOL)handleFileURL:(id)arg1 ;
-(void)queuePending;
-(void)_queue_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(BOOL)arg4 didSend:(/*^block*/id)arg5 didQueue:(/*^block*/id)arg6 ;
-(void)_queue_queuePending;
-(void)_queue_performSend;
-(void)_queue_startTimerWithFireDate:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 didQueue:(/*^block*/id)arg4 ;
@end

