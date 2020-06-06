/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate {

	CLKDateTextProvider* _weekdayTextProvider;
	CLKDateTextProvider* _dayTextProvider;
	unsigned long long _highlightMode;

}

@property (nonatomic,copy) CLKDateTextProvider * weekdayTextProvider;              //@synthesize weekdayTextProvider=_weekdayTextProvider - In the implementation block
@property (nonatomic,copy) CLKDateTextProvider * dayTextProvider;                  //@synthesize dayTextProvider=_dayTextProvider - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;                     //@synthesize highlightMode=_highlightMode - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(unsigned long long)highlightMode;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
-(CLKDateTextProvider *)weekdayTextProvider;
-(void)setWeekdayTextProvider:(CLKDateTextProvider *)arg1 ;
-(CLKDateTextProvider *)dayTextProvider;
-(void)setDayTextProvider:(CLKDateTextProvider *)arg1 ;
@end

