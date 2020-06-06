/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView {

	BOOL _showsThumb;
	BOOL _showsLine;
	UILabel* _currentTimeLabel;

}

@property (nonatomic,retain) UILabel * currentTimeLabel;              //@synthesize currentTimeLabel=_currentTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL showsThumb;                         //@synthesize showsThumb=_showsThumb - In the implementation block
@property (assign,nonatomic) BOOL showsLine;                          //@synthesize showsLine=_showsLine - In the implementation block
@property (nonatomic,readonly) double markerWidth; 
@property (nonatomic,readonly) double markerMidHeight; 
@property (nonatomic,readonly) CGRect currentTimeFrame; 
+(id)timeMarkerFontForSizeClass:(long long)arg1 ;
+(double)_spacingAdjustmentFontSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateTime;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(void)setShowsThumb:(BOOL)arg1 ;
-(BOOL)showsThumb;
-(CGRect)currentTimeFrame;
-(void)invalidateFonts;
-(double)markerWidth;
-(void)setShowsLine:(BOOL)arg1 ;
-(void)setCurrentTimeLabel:(UILabel *)arg1 ;
-(UILabel *)currentTimeLabel;
-(void)_updateTimeWithForce:(BOOL)arg1 ;
-(void)_updateTimeLabelColor;
-(CGRect)_lineFrame;
-(double)markerMidHeight;
-(BOOL)showsLine;
@end

