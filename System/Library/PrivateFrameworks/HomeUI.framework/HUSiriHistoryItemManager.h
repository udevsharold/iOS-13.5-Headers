/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol OS_dispatch_queue;
@class NSObject, HFStaticItem;

@interface HUSiriHistoryItemManager : HFItemManager {

	NSObject*<OS_dispatch_queue> _queue;
	HFStaticItem* _deleteSiriHistoryItem;

}

@property (nonatomic,retain) HFStaticItem * deleteSiriHistoryItem;              //@synthesize deleteSiriHistoryItem=_deleteSiriHistoryItem - In the implementation block
-(id)didSelectItemAtIndexPath:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setDeleteSiriHistoryItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)deleteSiriHistoryItem;
-(id)initWithDelegate:(id)arg1 groupItem:(id)arg2 ;
-(id)didUpdateItemAtIndexPath:(id)arg1 ;
@end

