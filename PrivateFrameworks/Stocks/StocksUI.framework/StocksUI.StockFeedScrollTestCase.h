/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestCaseScroll.h>

@class NSString;

@interface StocksUI.StockFeedScrollTestCase : NSObject <SNTestCaseScroll> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 iterations;
	 offset;
	 numberOfScreens;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
-(id)init;
-(long long)offset;
-(NSString *)testName;
-(long long)iterations;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)numberOfScreens;
-(id)scrollViewWithContext:(id)arg1 ;
@end

