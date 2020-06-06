/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol StockUpdaterDelegate;
@class NSError, NSArray;

@interface StockUpdater : YQLRequest {

	NSError* _lastError;
	BOOL _isComprehensive;
	BOOL _forceUpdate;
	id<StockUpdaterDelegate> _delegate;
	NSArray* _requestStocks;
	NSArray* _pendingStocks;
	/*^block*/id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) id<StockUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isComprehensive;                                //@synthesize isComprehensive=_isComprehensive - In the implementation block
@property (nonatomic,readonly) BOOL forceUpdate;                                    //@synthesize forceUpdate=_forceUpdate - In the implementation block
@property (nonatomic,retain) NSArray * requestStocks;                               //@synthesize requestStocks=_requestStocks - In the implementation block
@property (nonatomic,retain) NSArray * pendingStocks;                               //@synthesize pendingStocks=_pendingStocks - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                              //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
-(id<StockUpdaterDelegate>)delegate;
-(void)setDelegate:(id<StockUpdaterDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(BOOL)forceUpdate;
-(void)setUpdateCompletionHandler:(id)arg1 ;
-(id)updateCompletionHandler;
-(void)didParseData;
-(BOOL)hadError;
-(BOOL)isComprehensive;
-(NSArray *)requestStocks;
-(BOOL)_updateStocks:(id)arg1 comprehensive:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(void)setPendingStocks:(NSArray *)arg1 ;
-(void)setRequestStocks:(NSArray *)arg1 ;
-(void)_parseExchangeDictionaries:(id)arg1 ;
-(void)_parseQuoteDictionaries:(id)arg1 withDataSourceDictionaries:(id)arg2 ;
-(id)aggregateDictionaryDomain;
-(NSArray *)pendingStocks;
@end

