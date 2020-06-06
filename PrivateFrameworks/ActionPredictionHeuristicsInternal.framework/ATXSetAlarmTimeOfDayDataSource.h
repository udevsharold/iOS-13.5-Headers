/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
+(id)medianFrom:(id)arg1 ;
+(id)timeOfDayFromDonations:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)alarmTimeOfDay:(/*^block*/id)arg1 ;
-(id)_recentIntentDonationsForBundleId:(id)arg1 limit:(unsigned long long)arg2 ;
@end

