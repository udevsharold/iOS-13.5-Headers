/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMutableOrderedSet, NSMutableDictionary, NSObject;

@interface _UICollectionViewPrefetchingContext : NSObject {

	NSArray* _remainingIndexPaths;
	NSMutableOrderedSet* _items;
	NSMutableDictionary* _itemsDict;
	NSObject*<OS_dispatch_queue> _dataAccessQueue;

}

@property (nonatomic,retain) NSArray * remainingIndexPaths;                             //@synthesize remainingIndexPaths=_remainingIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsDict;                           //@synthesize itemsDict=_itemsDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataAccessQueue;              //@synthesize dataAccessQueue=_dataAccessQueue - In the implementation block
+(id)prefetchingContextWithItems:(id)arg1 ;
-(NSMutableOrderedSet *)items;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(id)_items;
-(void)prefetchCompleteForItemAtIndexPath:(id)arg1 ;
-(BOOL)hasRemainingItems;
-(id)popNextItem;
-(NSArray *)remainingIndexPaths;
-(id)peekNextItem;
-(id)initWithPrefetchItems:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataAccessQueue;
-(void)_invalidateRemainingIndexPaths;
-(NSMutableDictionary *)itemsDict;
-(void)setRemainingIndexPaths:(NSArray *)arg1 ;
-(void)setItemsDict:(NSMutableDictionary *)arg1 ;
-(void)setDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
