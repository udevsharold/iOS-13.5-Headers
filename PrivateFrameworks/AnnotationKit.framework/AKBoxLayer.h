/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface AKBoxLayer : CAShapeLayer {

	double _borderWidthScale;
	double _boxCornerRadius;
	double _nominalBorderWidth;

}

@property (assign) double boxCornerRadius;                         //@synthesize boxCornerRadius=_boxCornerRadius - In the implementation block
@property (assign) double nominalBorderWidth;                      //@synthesize nominalBorderWidth=_nominalBorderWidth - In the implementation block
@property (assign,nonatomic) double borderWidthScale; 
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2 ;
-(void)setBorderWidthScale:(double)arg1 ;
-(void)_updateBoxPath;
-(double)nominalBorderWidth;
-(double)borderWidthScale;
-(double)boxCornerRadius;
-(void)setBoxCornerRadius:(double)arg1 ;
-(void)setNominalBorderWidth:(double)arg1 ;
@end

