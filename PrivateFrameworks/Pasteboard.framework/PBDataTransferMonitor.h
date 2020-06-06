/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBItemCollectionDataTransferDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol PBDataTransferMonitorDelegate;
@class NSMutableDictionary, NSMutableSet, NSProgress, NSMutableArray, NSArray, NSString;

@interface PBDataTransferMonitor : NSObject <PBItemCollectionDataTransferDelegate, NSProgressReporting> {

	NSMutableDictionary* _transferQueue_requestsBySourceItemUUID;
	NSMutableSet* _transferQueue_requestsInProgress;
	BOOL _transferQueue_suppressEventsUntilRequested;
	BOOL _transferQueue_shouldSendBeganCallback;
	BOOL _transferQueue_hasSentBeganCallback;
	BOOL _transferQueue_hasSentFinishedCallback;
	BOOL _transferQueue_shouldSendFinishedCallback;
	NSProgress* _transferQueue_masterProgress;
	NSMutableArray* _transferQueue_childProgresses;
	NSMutableSet* _transferQueue_allEncounteredItemUUIDs;
	id<PBDataTransferMonitorDelegate> _delegate;
	NSArray* _outstandingRequests;
	unsigned long long _outstandingItemsCount;

}

@property (assign,nonatomic,__weak) id<PBDataTransferMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outstandingRequests;                           //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingItemsCount;                     //@synthesize outstandingItemsCount=_outstandingItemsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalItemsCount; 
@property (assign,nonatomic) BOOL suppressEventsUntilRequested; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(id)init;
-(void)dealloc;
-(id<PBDataTransferMonitorDelegate>)delegate;
-(void)setDelegate:(id<PBDataTransferMonitorDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)setSuppressEventsUntilRequested:(BOOL)arg1 ;
-(void)sendDelegateEventsIfNeeded;
-(unsigned long long)totalItemsCount;
-(void)cancelOutstandingRequests;
-(void)_transferQueue_sendBeganCallback;
-(void)_transferQueue_scheduleBeganCallback;
-(void)_transferQueue_sendFinishedCallback;
-(void)_transferQueue_recomputeMasterProgress;
-(void)_transferQueue_scheduleFinishedCallback;
-(BOOL)suppressEventsUntilRequested;
-(NSArray *)outstandingRequests;
-(unsigned long long)outstandingItemsCount;
-(void)itemCollection:(id)arg1 item:(id)arg2 representation:(id)arg3 beganDataTransferWithProgress:(id)arg4 ;
-(void)itemCollection:(id)arg1 item:(id)arg2 representationFinishedDataTransfer:(id)arg3 ;
@end

