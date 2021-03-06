/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WPDStat : NSObject {

	double _currentTime;
	NSDate* _lastTime;

}

@property (assign) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (retain) NSDate * lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
-(id)init;
-(void)startTime;
-(double)currentTime;
-(NSDate *)lastTime;
-(void)stopTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setLastTime:(NSDate *)arg1 ;
-(void)calculateTimeUpdate;
@end

