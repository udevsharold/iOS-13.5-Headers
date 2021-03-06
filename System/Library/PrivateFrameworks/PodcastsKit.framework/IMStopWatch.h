/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _descriptionString;

}
+(void)initialize;
+(id)stopwatchWithDescription:(id)arg1 ;
+(id)stopwatch;
-(id)init;
-(id)description;
-(void)start;
-(void)reset;
-(double)time;
-(void)report;
-(void)setDescription:(id)arg1 ;
-(void)reportWithMarker:(id)arg1 ;
@end

