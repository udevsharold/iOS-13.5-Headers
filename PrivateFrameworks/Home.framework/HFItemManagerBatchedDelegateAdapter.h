/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicReadPolicy;
@class HFItemManager, NSMutableSet, NAFuture;

@interface HFItemManagerBatchedDelegateAdapter : NSObject {

	HFItemManager* _itemManager;
	id<HFCharacteristicReadPolicy> _readPolicy;
	NSMutableSet* _uncommittedBatchingReasons;
	NSMutableSet* _batchedItemsToUpdate;
	NSMutableSet* _batchedItemProviderInvalidationReasons;
	SEL _batchedSenderSelector;
	NAFuture* _startExecutingBatchFuture;
	NAFuture* _finishExecutingBatchFuture;

}

@property (nonatomic,retain) NSMutableSet * uncommittedBatchingReasons;                          //@synthesize uncommittedBatchingReasons=_uncommittedBatchingReasons - In the implementation block
@property (nonatomic,retain) NSMutableSet * batchedItemsToUpdate;                                //@synthesize batchedItemsToUpdate=_batchedItemsToUpdate - In the implementation block
@property (nonatomic,retain) NSMutableSet * batchedItemProviderInvalidationReasons;              //@synthesize batchedItemProviderInvalidationReasons=_batchedItemProviderInvalidationReasons - In the implementation block
@property (assign,nonatomic) SEL batchedSenderSelector;                                          //@synthesize batchedSenderSelector=_batchedSenderSelector - In the implementation block
@property (nonatomic,retain) NAFuture * startExecutingBatchFuture;                               //@synthesize startExecutingBatchFuture=_startExecutingBatchFuture - In the implementation block
@property (nonatomic,retain) NAFuture * finishExecutingBatchFuture;                              //@synthesize finishExecutingBatchFuture=_finishExecutingBatchFuture - In the implementation block
@property (nonatomic,__weak,readonly) HFItemManager * itemManager;                               //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicReadPolicy> readPolicy;                          //@synthesize readPolicy=_readPolicy - In the implementation block
-(void)_reset;
-(HFItemManager *)itemManager;
-(id<HFCharacteristicReadPolicy>)readPolicy;
-(void)beginBatchWithReason:(id)arg1 ;
-(id)commitBatchWithReason:(id)arg1 senderSelector:(SEL)arg2 ;
-(id)requestUpdateForItems:(id)arg1 itemProviderInvalidationReasons:(id)arg2 modifiedHome:(id)arg3 senderSelector:(SEL)arg4 ;
-(void)setReadPolicy:(id<HFCharacteristicReadPolicy>)arg1 ;
-(id)initWithItemManager:(id)arg1 readPolicy:(id)arg2 ;
-(NSMutableSet *)uncommittedBatchingReasons;
-(NAFuture *)startExecutingBatchFuture;
-(NAFuture *)finishExecutingBatchFuture;
-(void)setBatchedSenderSelector:(SEL)arg1 ;
-(void)_executeBatch;
-(NSMutableSet *)batchedItemsToUpdate;
-(NSMutableSet *)batchedItemProviderInvalidationReasons;
-(SEL)batchedSenderSelector;
-(id)_itemProvidersToReloadForInvalidationReasons:(id)arg1 ;
-(void)setStartExecutingBatchFuture:(NAFuture *)arg1 ;
-(void)setFinishExecutingBatchFuture:(NAFuture *)arg1 ;
-(void)setUncommittedBatchingReasons:(NSMutableSet *)arg1 ;
-(void)setBatchedItemsToUpdate:(NSMutableSet *)arg1 ;
-(void)setBatchedItemProviderInvalidationReasons:(NSMutableSet *)arg1 ;
@end

