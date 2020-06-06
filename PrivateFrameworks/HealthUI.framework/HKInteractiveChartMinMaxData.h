/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKUnit, NSString;

@interface HKInteractiveChartMinMaxData : NSObject <HKGraphSeriesChartData> {

	double _minValue;
	double _maxValue;
	HKUnit* _unit;

}

@property (assign,nonatomic) double minValue;                       //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                       //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                         //@synthesize unit=_unit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUnit *)unit;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
@end

