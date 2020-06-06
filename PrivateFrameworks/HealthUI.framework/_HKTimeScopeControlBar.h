/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKTimeScopeControl.h>

@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl {

	UISegmentedControl* _segments;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(long long)selectedTimeScope;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(void)_segmentValueChanged:(id)arg1 ;
@end

