/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@class NSMutableArray;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource> {

	NSMutableArray* _sortedEvents;

}

@property (nonatomic,retain) NSMutableArray * sortedEvents;              //@synthesize sortedEvents=_sortedEvents - In the implementation block
-(void)cancel;
-(id)initWithEvents:(id)arg1 ;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)sortedEvents;
-(void)setSortedEvents:(NSMutableArray *)arg1 ;
@end

