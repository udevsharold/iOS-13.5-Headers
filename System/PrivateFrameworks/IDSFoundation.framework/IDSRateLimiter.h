/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMultiReadUniWriteLock;

@interface IDSRateLimiter : NSObject {

	NSMutableDictionary* _cacheMap;
	NSMultiReadUniWriteLock* _readWriteLock;
	double _timeLimit;
	long long _limit;

}

@property (assign,nonatomic) long long limit;                                      //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double timeLimit;                                     //@synthesize timeLimit=_timeLimit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheMap;                       //@synthesize cacheMap=_cacheMap - In the implementation block
@property (nonatomic,retain) NSMultiReadUniWriteLock * readWriteLock;              //@synthesize readWriteLock=_readWriteLock - In the implementation block
-(id)description;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(id)initWithLimit:(long long)arg1 timeLimit:(double)arg2 ;
-(void)noteItem:(id)arg1 ;
-(double)timeToUnderLimit:(id)arg1 ;
-(BOOL)underLimitForItem:(id)arg1 ;
-(void)cleanupExpiredItems;
-(NSMutableDictionary *)cacheMap;
-(id)_unlockedDescription;
-(double)timeLimit;
-(void)clearItem:(id)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(void)setCacheMap:(NSMutableDictionary *)arg1 ;
-(NSMultiReadUniWriteLock *)readWriteLock;
-(void)setReadWriteLock:(NSMultiReadUniWriteLock *)arg1 ;
@end

