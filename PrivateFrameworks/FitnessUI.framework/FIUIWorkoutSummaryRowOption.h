/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIUIWorkoutSummaryRowOption : NSObject {

	unsigned long long _rowType;
	/*^block*/id _condition;

}

@property (nonatomic,readonly) unsigned long long rowType;              //@synthesize rowType=_rowType - In the implementation block
@property (nonatomic,readonly) id condition;                            //@synthesize condition=_condition - In the implementation block
-(id)condition;
-(unsigned long long)rowType;
-(id)initWithRowType:(unsigned long long)arg1 condition:(/*^block*/id)arg2 ;
-(BOOL)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2 ;
@end

