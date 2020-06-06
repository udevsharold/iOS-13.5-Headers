/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface SSCircularBuffer : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentIndex;
	NSMutableArray* _buffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                       //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffer;                               //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long maxSize; 
+(id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)allObjects;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buffer;
-(id)flush;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(unsigned long long)maxSize;
-(id)_flush;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
@end

