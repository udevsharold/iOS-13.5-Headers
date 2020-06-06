/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject {

	NSMutableOrderedSet* _itemsWithExactNameMatch;
	NSMutableOrderedSet* _itemsWithNameMatch;
	NSMutableOrderedSet* _itemsWithCategoryMatch;
	NSMutableOrderedSet* _itemsWithKeywordMatch;

}
-(id)init;
-(id)orderedSetForType:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2 ;
-(id)rankedItems;
@end

