/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _GEOThrottler <NSObject>
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) double timeWindow; 
@required
+(BOOL)stateIsExpired:(id)arg1;
-(NSString *)keyPath;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(unsigned)maxReqCount;
-(double)timeWindow;
-(double)timeUntilReset;
-(id)userInfoForError;
-(BOOL)addRequestTimestamp;
-(id)captureState;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;

@end

