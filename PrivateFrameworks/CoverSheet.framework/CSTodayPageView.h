/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>

@class UIView, UIScrollView;

@interface CSTodayPageView : CSPageViewBase {

	UIView* _todayView;
	UIScrollView* _widgetMajorScrollView;
	double _navigationBarTopInset;

}

@property (nonatomic,retain) UIView * todayView;                                //@synthesize todayView=_todayView - In the implementation block
@property (nonatomic,retain) UIScrollView * widgetMajorScrollView;              //@synthesize widgetMajorScrollView=_widgetMajorScrollView - In the implementation block
@property (assign,nonatomic) double navigationBarTopInset;                      //@synthesize navigationBarTopInset=_navigationBarTopInset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTodayView:(UIView *)arg1 ;
-(UIView *)todayView;
-(void)setWidgetMajorScrollView:(UIScrollView *)arg1 ;
-(void)setNavigationBarTopInset:(double)arg1 ;
-(void)_layoutTodayView;
-(UIScrollView *)widgetMajorScrollView;
-(double)navigationBarTopInset;
@end

