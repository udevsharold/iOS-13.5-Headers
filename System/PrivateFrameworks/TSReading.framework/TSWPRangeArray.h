/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPRangeArray : NSObject <NSCopying> {

	void* _rangeVectorOpaque;

}

@property (nonatomic,readonly) unsigned long long rangeCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long start; 
@property (nonatomic,readonly) unsigned long long finish; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)rangeCount;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)start;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(unsigned long long)finish;
-(void)addRange:(NSRange)arg1 ;
-(id)initWithRangeVector:(const void*)arg1 ;
-(NSRange*)rangeReferenceAtIndex:(unsigned long long)arg1 ;
-(void)removeRange:(NSRange)arg1 ;
-(void)enumerateRangesInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

