/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, UIImage;

@interface HKMinMaxSeries : HKGraphSeries {

	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	UIImage* _unselectedPointMarkerImage;
	UIImage* _selectedPointMarkerImage;

}

@property (nonatomic,retain) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,retain) UIImage * unselectedPointMarkerImage;               //@synthesize unselectedPointMarkerImage=_unselectedPointMarkerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedPointMarkerImage;                 //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
-(void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 axisRect:(CGRect)arg4 ;
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
-(UIImage *)selectedPointMarkerImage;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 ;
-(UIImage *)unselectedPointMarkerImage;
-(void)setUnselectedPointMarkerImage:(UIImage *)arg1 ;
@end

