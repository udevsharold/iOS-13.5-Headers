/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, CAShapeLayer;

@interface _HKShapeView : UIView

@property (nonatomic,retain) UIBezierPath * path; 
@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CAShapeLayer *)shapeLayer;
@end

