/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface SCWatchlistDiff : NSObject {

	NSArray* _addedStocks;
	NSDictionary* _indexesOfAddedStocks;
	NSArray* _removedStocks;
	NSArray* _reorderedStocks;
	NSDictionary* _indexesOfReorderedStocks;
	NSArray* _stocksPreDiff;
	NSArray* _stocksPostDiff;

}

@property (nonatomic,copy,readonly) NSArray * addedStocks;                                //@synthesize addedStocks=_addedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexesOfAddedStocks;                  //@synthesize indexesOfAddedStocks=_indexesOfAddedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * removedStocks;                              //@synthesize removedStocks=_removedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reorderedStocks;                            //@synthesize reorderedStocks=_reorderedStocks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexesOfReorderedStocks;              //@synthesize indexesOfReorderedStocks=_indexesOfReorderedStocks - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSArray * stocksPreDiff;                              //@synthesize stocksPreDiff=_stocksPreDiff - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stocksPostDiff;                             //@synthesize stocksPostDiff=_stocksPostDiff - In the implementation block
+(id)reorderedStocksFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)isEmpty;
-(id)initWithOldStocks:(id)arg1 newStocks:(id)arg2 ;
-(NSArray *)addedStocks;
-(NSArray *)removedStocks;
-(NSArray *)reorderedStocks;
-(NSDictionary *)indexesOfAddedStocks;
-(NSDictionary *)indexesOfReorderedStocks;
-(NSArray *)stocksPreDiff;
-(NSArray *)stocksPostDiff;
@end

