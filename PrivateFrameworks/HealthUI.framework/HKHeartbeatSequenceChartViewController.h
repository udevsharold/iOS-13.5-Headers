/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKScalarGraphViewController.h>

@class NSDate, NSMutableArray, HKAxis;

@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController {

	NSDate* _startDate;
	NSMutableArray* _sequenceDataSources;
	NSMutableArray* _graphSeries;
	HKAxis* _commonVerticalAxis;
	double _initialXAxisOffset;

}

@property (nonatomic,retain) NSMutableArray * sequenceDataSources;              //@synthesize sequenceDataSources=_sequenceDataSources - In the implementation block
@property (nonatomic,retain) NSMutableArray * graphSeries;                      //@synthesize graphSeries=_graphSeries - In the implementation block
@property (nonatomic,retain) HKAxis * commonVerticalAxis;                       //@synthesize commonVerticalAxis=_commonVerticalAxis - In the implementation block
@property (assign,nonatomic) double initialXAxisOffset;                         //@synthesize initialXAxisOffset=_initialXAxisOffset - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
-(NSDate *)startDate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithMinimumHeight:(double)arg1 ;
-(NSMutableArray *)graphSeries;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(long long)stackCountForGraphView:(id)arg1 ;
-(void)graphViewSizeChanged:(id)arg1 ;
-(void)setGraphSeries:(NSMutableArray *)arg1 ;
-(void)setInitialXAxisOffset:(double)arg1 ;
-(id)initWithMinimumHeight:(double)arg1 startDate:(id)arg2 ;
-(id)_verticalNumericalAxis;
-(void)_adjustGraphViewOptions;
-(void)_recomputeAxisRanges;
-(void)_synchronizeVerticalAxes;
-(void)addSequenceData:(id)arg1 color:(id)arg2 lineWidth:(double)arg3 markerRadius:(double)arg4 dashStyle:(long long)arg5 annotate:(BOOL)arg6 ;
-(id)_heartbeatSequenceSeriesForSource:(id)arg1 axis:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 markerRadius:(double)arg5 dashStyle:(long long)arg6 annotate:(BOOL)arg7 ;
-(double)initialXAxisOffset;
-(void)addSequenceData:(id)arg1 ;
-(NSMutableArray *)sequenceDataSources;
-(void)setSequenceDataSources:(NSMutableArray *)arg1 ;
-(HKAxis *)commonVerticalAxis;
-(void)setCommonVerticalAxis:(HKAxis *)arg1 ;
@end

