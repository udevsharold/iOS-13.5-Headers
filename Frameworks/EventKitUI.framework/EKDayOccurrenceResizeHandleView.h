/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView {

	EKDayOccurrenceView* _occurrenceView;
	UIColor* _baseColor;
	double _radius;

}

@property (nonatomic,retain) UIColor * baseColor;                                        //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,__weak,readonly) EKDayOccurrenceView * occurrenceView;              //@synthesize occurrenceView=_occurrenceView - In the implementation block
@property (assign,nonatomic) double radius;                                              //@synthesize radius=_radius - In the implementation block
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(EKDayOccurrenceView *)occurrenceView;
-(id)initWithFrame:(CGRect)arg1 occurrenceView:(id)arg2 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(CGRect)_circleRect;
-(UIColor *)baseColor;
@end

