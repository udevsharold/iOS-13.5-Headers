/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOPlaceDailyHours : NSObject {

	NSRange _dayOfWeekRange;
	NSArray* _openIntervals;

}

@property (nonatomic,readonly) NSRange dayOfWeekRange;               //@synthesize dayOfWeekRange=_dayOfWeekRange - In the implementation block
@property (nonatomic,readonly) NSArray * openIntervals;              //@synthesize openIntervals=_openIntervals - In the implementation block
+(id)dailyHours:(id)arg1 forDays:(NSRange)arg2 ;
+(id)getPlaceDailyHoursForWeekday:(long long)arg1 placeDailyHours:(id)arg2 ;
-(id)description;
-(NSRange)dayOfWeekRange;
-(NSArray *)openIntervals;
@end

