/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase {

	BOOL _bouncing;
	UIView* _navigationView;
	UIView* _todayView;

}

@property (assign,nonatomic,__weak) UIView * navigationView;               //@synthesize navigationView=_navigationView - In the implementation block
@property (assign,nonatomic,__weak) UIView * todayView;                    //@synthesize todayView=_todayView - In the implementation block
@property (assign,getter=isBouncing,nonatomic) BOOL bouncing;              //@synthesize bouncing=_bouncing - In the implementation block
-(void)layoutSubviews;
-(void)setTodayView:(UIView *)arg1 ;
-(UIView *)todayView;
-(BOOL)isBouncing;
-(void)setBouncing:(BOOL)arg1 ;
-(void)_adjustContentForEdgeBounce;
-(void)_resetContentAfterEdgeBounce;
-(UIView *)navigationView;
-(void)setNavigationView:(UIView *)arg1 ;
@end

