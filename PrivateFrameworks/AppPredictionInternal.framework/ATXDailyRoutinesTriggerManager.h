/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXCachedTransitionPredictorProtocol, ATXTransitionPredictorProtocol, ATXContextStoreWriterProtocol;
@class NSDateFormatter, NSDate;

@interface ATXDailyRoutinesTriggerManager : NSObject {

	NSDateFormatter* _dateFormatter;
	id<ATXCachedTransitionPredictorProtocol> _cachedPredictor;
	id<ATXTransitionPredictorProtocol> _transitionPredictor;
	id<ATXContextStoreWriterProtocol> _contextStoreWriter;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;              //@synthesize now=_now - In the implementation block
+(id)sharedInstance;
+(id)_wakeupDateForExitDate:(id)arg1 fromDate:(id)arg2 ;
+(id)convenienceDateFormatter;
-(id)init;
-(NSDate *)now;
-(void)setNow:(NSDate *)arg1 ;
-(id)initWithCacheBasedPredictor:(id)arg1 transitionPredictor:(id)arg2 contextStoreWriter:(id)arg3 ;
-(void)updateWithActivity:(id)arg1 ;
-(void)_scheduleOneShotJobAfterInterval:(double)arg1 ;
@end

