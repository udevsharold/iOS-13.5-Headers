/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REObservableSingleton.h>

@class NSDateInterval;

@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (nonatomic,readonly) unsigned long long currentPeriodOfDay; 
@property (nonatomic,readonly) NSDateInterval * intervalForCurrentPeriodOfDay; 
-(unsigned long long)currentPeriodOfDay;
-(NSDateInterval *)intervalForCurrentPeriodOfDay;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 ;
@end

