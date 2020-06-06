/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNewsAppConfigurationManager.h>
#import <libobjc.A.dylib/FCCoreConfigurationManager.h>

@class NSArray, NSString;

@interface StocksCore.NewsConfigurationManager : NSObject <FCNewsAppConfigurationManager, FCCoreConfigurationManager> {

	 appConfigurationManager;
	 coreConfigObservers;
	 appConfigObservers;
	 lastKnownAppConfig;
	 lastKnownNewsConfig;
	 configLock;

}

@property (readonly,nonatomic) id<FCNewsAppConfiguration> appConfiguration; 
@property (readonly,nonatomic) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration; 
@property (readonly,nonatomic) id<FCCoreConfiguration> configuration; 
@property (readonly,nonatomic) NSArray * treatmentIDs; 
@property (readonly,nonatomic) NSArray * segmentSetIDs; 
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2 ;
-(void)fetchTrendingSearchesIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)addAppConfigObserver:(id)arg1 ;
-(void)removeAppConfigObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(NSArray *)treatmentIDs;
-(NSArray *)segmentSetIDs;
-(void)fetchConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

