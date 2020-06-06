/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, NSMutableDictionary, NSCalendar;

@interface SBUIPreciseClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _minuteUpdateHandlers;
	unsigned long long _nextToken;
	NSCalendar* _calendar;
	long long _lastHour;
	long long _lastMinute;

}
+(id)sharedInstance;
+(id)now;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_handleTimePassed;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopMinuteUpdatesForToken:(id)arg1 ;
@end

