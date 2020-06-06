/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFQueueingStrategy;
@class NSMutableArray, NSArray;

@interface EFQueue : NSObject {

	NSMutableArray* _buffer;
	id<EFQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<EFQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
+(id)bufferedQueueWithCapacity:(unsigned long long)arg1 batchHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)drain;
-(id)peek;
-(NSMutableArray *)buffer;
-(id<EFQueueingStrategy>)strategy;
-(id)dequeue;
-(id)initWithStrategy:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(void)dequeueObject:(id)arg1 ;
-(void)enqueue:(id)arg1 replaceIfExists:(BOOL)arg2 ;
@end

