/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iAd/iAd-Structs.h>
@interface ADMediaAnalyticsEventInfo : NSObject {

	double _totalDuration;
	double _currentPlaybackTime;
	double _visiblePercentage;
	double _volume;

}

@property (assign,nonatomic) double totalDuration;                    //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime;              //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (assign,nonatomic) double volume;                           //@synthesize volume=_volume - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(double)totalDuration;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
@end
