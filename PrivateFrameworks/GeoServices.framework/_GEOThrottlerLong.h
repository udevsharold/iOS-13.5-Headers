/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEOThrottler.h>

@class NSString;

@interface _GEOThrottlerLong : NSObject <_GEOThrottler> {

	NSString* _keyPath;
	unsigned _maxRequestCount;
	double _timeWindow;
	unsigned _currentRequestCount;
	double _lastResetTime;
	double _lastUseTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * keyPath;                  //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) double timeWindow;                   //@synthesize timeWindow=_timeWindow - In the implementation block
+(BOOL)stateIsExpired:(id)arg1 ;
-(NSString *)description;
-(NSString *)keyPath;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(unsigned)maxReqCount;
-(double)timeWindow;
-(double)timeUntilReset;
-(id)userInfoForError;
-(BOOL)addRequestTimestamp;
-(id)captureState;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4 ;
-(void)loadState:(id)arg1 ;
-(double)expiresAt;
@end

