/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_REPeriodOfDayProperties.h>

@class NSDate, NSDateInterval;

@interface _REPeriodOfDay : NSObject <_REPeriodOfDayProperties> {

	unsigned long long _periodOfDay;
	NSDateInterval* _interval;

}

@property (nonatomic,readonly) NSDateInterval * interval;                   //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) unsigned long long periodOfDay;              //@synthesize periodOfDay=_periodOfDay - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDateInterval *)interval;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)periodOfDay;
-(id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2 ;
@end

