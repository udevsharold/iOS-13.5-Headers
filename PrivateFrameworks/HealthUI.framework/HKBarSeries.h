/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, HKFillStyle;

@interface HKBarSeries : HKGraphSeries {

	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	HKFillStyle* _unselectedFillStyle;
	HKFillStyle* _selectedFillStyle;
	HKStrokeStyle* _tiledStrokeStyle;
	CGSize _cornerRadii;

}

@property (nonatomic,retain) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * unselectedFillStyle;                  //@synthesize unselectedFillStyle=_unselectedFillStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * selectedFillStyle;                    //@synthesize selectedFillStyle=_selectedFillStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * tiledStrokeStyle;                   //@synthesize tiledStrokeStyle=_tiledStrokeStyle - In the implementation block
@property (assign,nonatomic) CGSize cornerRadii;                                 //@synthesize cornerRadii=_cornerRadii - In the implementation block
-(void)setCornerRadii:(CGSize)arg1 ;
-(CGSize)cornerRadii;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedStrokeStyle;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setTiledStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)tiledStrokeStyle;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1 ;
-(void)setUnselectedFillStyle:(HKFillStyle *)arg1 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(void)setSelectedFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)selectedFillStyle;
-(HKFillStyle *)unselectedFillStyle;
-(void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
@end

