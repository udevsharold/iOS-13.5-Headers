/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXAnchorModelEventFeaturizer : NSObject
+(void)setLocationAndLocationTypeOnDate:(id)arg1 anchorMetadata:(id)arg2 ;
+(void)setMonthAndDayOfMonthFromDate:(id)arg1 anchorMetadata:(id)arg2 ;
+(void)setHourofDayAndDayOfWeekFromDate:(id)arg1 anchorMetadata:(id)arg2 ;
+(unsigned long long)getMinTemporalDistanceFromAnchorDate:(id)arg1 toTimeRange:(NSRange)arg2 ;
+(id)locationOfInterestForAnchorOccurrenceDate:(id)arg1 ;
-(id)featurizeAnchorEvent:(id)arg1 anchor:(id)arg2 ;
-(id)historyForAppLaunchDuetEvent:(id)arg1 ;
-(id)featurizeAppLaunchEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 ;
-(id)featurizeActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 ;
-(id)featurizeAppLaunchForActionEvent:(id)arg1 anchorOccurrenceDate:(id)arg2 ;
-(id)featurizeActionKeyForActionEvent:(id)arg1 ;
-(id)featurizeActionUUIDForActionEvent:(id)arg1 ;
@end

