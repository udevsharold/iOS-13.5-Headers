/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BMPatternMiner.h>

@class NSMutableArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner> {

	NSMutableArray* _indexBaskets;
	NSMutableArray* _items;

}

@property (nonatomic,copy) NSMutableArray * indexBaskets;              //@synthesize indexBaskets=_indexBaskets - In the implementation block
@property (nonatomic,copy) NSMutableArray * items;                     //@synthesize items=_items - In the implementation block
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithBaskets:(id)arg1 ;
-(id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2 ;
-(NSMutableArray *)indexBaskets;
-(id)supportOfItemIndexSet:(id)arg1 ;
-(id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2 ;
-(void)setIndexBaskets:(NSMutableArray *)arg1 ;
@end

