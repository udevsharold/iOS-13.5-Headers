/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKAxisLabelDimension.h>

@protocol HKHistogramAxisDimensionDataSource;
@interface HKHistogramAxisDimension : NSObject <HKAxisLabelDimension> {

	id<HKHistogramAxisDimensionDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKHistogramAxisDimensionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<HKHistogramAxisDimensionDataSource>)dataSource;
-(void)setDataSource:(id<HKHistogramAxisDimensionDataSource>)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
@end

