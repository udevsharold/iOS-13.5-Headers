/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSCalendar;

@interface _HKDateCalendarUnitKey : NSObject <NSCopying> {

	NSDate* _date;
	NSCalendar* _calendar;
	unsigned long long _calendarUnit;

}

@property (nonatomic,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(unsigned long long)calendarUnit;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3 ;
@end
