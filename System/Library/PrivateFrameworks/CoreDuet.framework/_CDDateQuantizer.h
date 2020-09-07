/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar, NSDate, NSDateComponents;

@interface _CDDateQuantizer : NSObject {

	NSCalendar* _calendar;
	long long _dayStartHour;
	NSDate* _currentDay;
	NSDateComponents* _currentQuantizationOffsetComponents;

}

@property (nonatomic,readonly) NSCalendar * calendar;                                           //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) long long dayStartHour;                                          //@synthesize dayStartHour=_dayStartHour - In the implementation block
@property (nonatomic,copy) NSDate * currentDay;                                                 //@synthesize currentDay=_currentDay - In the implementation block
@property (nonatomic,copy) NSDateComponents * currentQuantizationOffsetComponents;              //@synthesize currentQuantizationOffsetComponents=_currentQuantizationOffsetComponents - In the implementation block
-(NSCalendar *)calendar;
-(long long)dayStartHour;
-(NSDate *)currentDay;
-(void)setCurrentDay:(NSDate *)arg1 ;
-(void)setCurrentQuantizationOffsetComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)currentQuantizationOffsetComponents;
-(id)initWithCalendar:(id)arg1 dayStartHour:(long long)arg2 ;
-(id)quantizeDate:(id)arg1 ;
@end
