/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHStrokeGroupBaselineVisualization : CHStrokeGroupBasedVisualization
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(CGRect)dirtyRectForStrokeGroup:(id)arg1 ;
-(long long)layeringPriority;
-(CGRect)_labelBoundsForAnchorPoint:(CGPoint)arg1 ;
-(CGPathRef)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(CGPoint*)arg2 strokeProvider:(id)arg3 ;
-(void)_getOrientedBounds:(CGRect*)arg1 length:(double*)arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5 ;
-(CGAffineTransform)_orientationTransformForStrokeBounds:(CGRect)arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3 ;
@end

