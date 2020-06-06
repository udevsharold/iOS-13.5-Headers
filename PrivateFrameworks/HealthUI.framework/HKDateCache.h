/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSHashTable, NSSet, NSCalendar;

@interface HKDateCache : NSObject {

	NSDate* _startOfYesterdayMidnight;
	NSDate* _endOfYesterdayMidnight;
	NSDate* _startOfDayMidnight;
	NSDate* _endOfDayMidnight;
	NSDate* _oneMinuteBeforeEndOfDayMidnight;
	NSDate* _oneSecondBeforeEndOfDayMidnight;
	NSDate* _startOfTomorrowMidnight;
	NSDate* _endOfTomorrowMidnight;
	NSDate* _startOfRollingWeekMidnight;
	NSDate* _endOfRollingWeekMidnight;
	NSDate* _startOfRollingMonthMidnight;
	NSDate* _endOfRollingMonthMidnight;
	NSDate* _startOfRollingYear;
	NSDate* _endOfRollingYear;
	NSDate* _currentDate;
	NSHashTable* _observers;
	NSSet* _weekendDays;
	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * startOfYesterdayMidnight; 
@property (nonatomic,readonly) NSDate * endOfYesterdayMidnight;                       //@synthesize endOfYesterdayMidnight=_endOfYesterdayMidnight - In the implementation block
@property (nonatomic,readonly) NSDate * startOfDayMidnight; 
@property (nonatomic,readonly) NSDate * endOfDayMidnight; 
@property (nonatomic,readonly) NSDate * oneMinuteBeforeEndOfDayMidnight; 
@property (nonatomic,readonly) NSDate * oneSecondBeforeEndOfDayMidnight; 
@property (nonatomic,readonly) NSDate * startOfTomorrowMidnight; 
@property (nonatomic,readonly) NSDate * endOfTomorrowMidnight; 
@property (nonatomic,readonly) NSDate * startOfRollingWeekMidnight; 
@property (nonatomic,readonly) NSDate * endOfRollingWeekMidnight; 
@property (nonatomic,readonly) NSDate * startOfRollingMonthMidnight; 
@property (nonatomic,readonly) NSDate * endOfRollingMonthMidnight; 
@property (nonatomic,readonly) NSDate * startOfRollingYearMidnight; 
@property (nonatomic,readonly) NSDate * endOfRollingYearMidnight; 
-(id)init;
-(void)dealloc;
-(BOOL)isDateInToday:(id)arg1 ;
-(BOOL)isDateInTomorrow:(id)arg1 ;
-(BOOL)isDateInYesterday:(id)arg1 ;
-(NSCalendar *)calendar;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(void)flushCache;
-(id)_currentDate;
-(id)weekendDays;
-(BOOL)isDayOfWeekNumberOnWeekend:(id)arg1 ;
-(id)startOfRollingDay:(/*^block*/id)arg1 ;
-(id)endOfRollingDay:(/*^block*/id)arg1 ;
-(void)_setCurrentDate:(id)arg1 ;
-(void)_flushCacheAndNotifyObservers:(id)arg1 ;
-(NSDate *)startOfDayMidnight;
-(NSDate *)endOfDayMidnight;
-(NSDate *)startOfTomorrowMidnight;
-(NSDate *)startOfRollingWeekMidnight;
-(NSDate *)startOfRollingMonthMidnight;
-(NSDate *)startOfRollingYearMidnight;
-(NSDate *)endOfRollingWeekMidnight;
-(NSDate *)endOfRollingMonthMidnight;
-(NSDate *)endOfRollingYearMidnight;
-(NSDate *)startOfYesterdayMidnight;
-(NSDate *)endOfTomorrowMidnight;
-(void)_notifyObserversDidUpdateOnNotification:(id)arg1 ;
-(NSDate *)oneMinuteBeforeEndOfDayMidnight;
-(NSDate *)oneSecondBeforeEndOfDayMidnight;
-(id)startOfRollingWeek:(/*^block*/id)arg1 ;
-(id)endOfRollingWeek:(/*^block*/id)arg1 ;
-(id)startOfRollingMonth:(/*^block*/id)arg1 ;
-(id)endOfRollingMonth:(/*^block*/id)arg1 ;
-(id)startOfRollingYear:(/*^block*/id)arg1 ;
-(id)endOfRollingYear:(/*^block*/id)arg1 ;
-(BOOL)isDateInThisCalendarMonth:(id)arg1 ;
-(BOOL)isDateInThisCalendarYear:(id)arg1 ;
-(BOOL)isDateWithinLastRollingMonth:(id)arg1 ;
-(BOOL)isDateWithinLastRollingYear:(id)arg1 ;
-(NSDate *)endOfYesterdayMidnight;
@end

