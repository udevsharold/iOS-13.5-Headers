/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKCalendarWeekView.h>

@class CALayer, NSArray;

@interface HKMonthWeekView : HKCalendarWeekView {

	BOOL _displaysMonthTitle;
	BOOL _displaysTopBorderLine;
	BOOL _isRTL;
	CALayer* _topBorderLine;
	BOOL _accessoryContentsFetched;
	NSArray* _accessoryViews;

}

@property (nonatomic,readonly) NSArray * accessoryViews;                 //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (assign,nonatomic) BOOL accessoryContentsFetched;              //@synthesize accessoryContentsFetched=_accessoryContentsFetched - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(NSArray *)accessoryViews;
-(Class)cellClass;
-(BOOL)supportsRTL;
-(void)setAccessoryContentsFetched:(BOOL)arg1 ;
-(BOOL)containsMonthTitle;
-(void)setMonthWeekStart:(id)arg1 ;
-(void)clearAccessoryViews;
-(CGRect)_frameForTopBorderLine;
-(id)initWithDateCache:(id)arg1 displaysMonthTitle:(BOOL)arg2 displaysTopBorderLine:(BOOL)arg3 ;
-(Class)monthTitleClass;
-(void)selectedCalendarDay:(id)arg1 ;
-(id)cellMatchingDate:(id)arg1 ;
-(void)setTitleHighlighted:(BOOL)arg1 ;
-(BOOL)accessoryContentsFetched;
@end
