/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBPieChartView : UIView {

	NSArray* _slices;
	double _valueTotal;
	double _radius;
	CGPoint _center;
	double _defaultRotation;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateMetrics;
-(void)setSlices:(id)arg1 ;
-(void)_rotateContext;
-(void)_drawSlice:(id)arg1 atValue:(double)arg2 ;
@end

