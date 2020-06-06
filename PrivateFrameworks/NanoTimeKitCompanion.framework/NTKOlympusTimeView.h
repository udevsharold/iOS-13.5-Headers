/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKOlympusContentViewDelegate.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@protocol NTKOlympusViewDelegate;
@class NSDate, CLKDevice, NTKOlympusTimeContentView, NSString;

@interface NTKOlympusTimeView : UIView <NTKOlympusContentViewDelegate, NTKTimeView> {

	BOOL frozen;
	BOOL _maskingPathStartsFromHourHand;
	id<NTKOlympusViewDelegate> _delegate;
	NSDate* _date;
	double _hourHandAngle;
	double _minuteHandAngle;
	unsigned long long _currentStyle;
	unsigned long long _currentDial;
	unsigned long long _currentColor;
	CLKDevice* _device;
	NTKOlympusTimeContentView* _contentView;
	NTKOlympusTimeContentView* _overlayContentView;
	CGSize _maskingSize;

}

@property (nonatomic,retain) CLKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NTKOlympusTimeContentView * contentView;                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NTKOlympusTimeContentView * overlayContentView;              //@synthesize overlayContentView=_overlayContentView - In the implementation block
@property (assign,nonatomic) BOOL maskingPathStartsFromHourHand;                          //@synthesize maskingPathStartsFromHourHand=_maskingPathStartsFromHourHand - In the implementation block
@property (assign,nonatomic) CGSize maskingSize;                                          //@synthesize maskingSize=_maskingSize - In the implementation block
@property (assign,nonatomic) double hourHandAngle;                                        //@synthesize hourHandAngle=_hourHandAngle - In the implementation block
@property (assign,nonatomic) double minuteHandAngle;                                      //@synthesize minuteHandAngle=_minuteHandAngle - In the implementation block
@property (assign,nonatomic,__weak) id<NTKOlympusViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long currentStyle;                             //@synthesize currentStyle=_currentStyle - In the implementation block
@property (assign,nonatomic) unsigned long long currentDial;                              //@synthesize currentDial=_currentDial - In the implementation block
@property (assign,nonatomic) unsigned long long currentColor;                             //@synthesize currentColor=_currentColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
-(id<NTKOlympusViewDelegate>)delegate;
-(void)setDelegate:(id<NTKOlympusViewDelegate>)arg1 ;
-(NSDate *)date;
-(CLKDevice *)device;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isFrozen;
-(NTKOlympusTimeContentView *)contentView;
-(void)setContentView:(NTKOlympusTimeContentView *)arg1 ;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setCurrentStyle:(unsigned long long)arg1 ;
-(unsigned long long)currentStyle;
-(NTKOlympusTimeContentView *)overlayContentView;
-(void)setDevice:(CLKDevice *)arg1 ;
-(unsigned long long)currentColor;
-(void)setCurrentColor:(unsigned long long)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(BOOL)_maskingPathStartsFromHourHandForDate:(id)arg1 ;
-(void)createAndRemoveViewsForCurrentStateIfNeeded;
-(void)applyWindrunnerMaskWithDate:(id)arg1 ;
-(void)_createContentViewIfNeeded;
-(void)_createOverlayViewIfNeeded;
-(void)prepareForEditing;
-(void)cleanupAfterEditing;
-(BOOL)_hasWindrunnerWedge;
-(void)applyWindrunnerMaskWithDate:(id)arg1 force:(BOOL)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(BOOL)arg4 ;
-(void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3 ;
-(BOOL)canUpdateWindrunnerMask;
-(void)applyWindrunnerMaskWithHourAngle:(double)arg1 minuteAngle:(double)arg2 ;
-(double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2 ;
-(void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2 ;
-(void)openVictoryAppFromRect:(CGRect)arg1 ;
-(void)olympusContentViewDidHandleLogoHighlighted:(id)arg1 ;
-(void)olympusContentViewDidHandleLogoResetHighlight:(id)arg1 ;
-(void)olympusContentView:(id)arg1 didHandleLogoTouchUpInsideFromRect:(CGRect)arg2 ;
-(id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 date:(id)arg5 ;
-(void)setCurrentDial:(unsigned long long)arg1 ;
-(void)configureViewsForEditing;
-(void)setupViewsForCurrentState:(BOOL)arg1 ;
-(void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3 ;
-(double)shortestPathBetweenStartAngle:(double)arg1 targetAngle:(double)arg2 ;
-(void)updateMaskingPathStartPointWithNewHourAngle:(double)arg1 newMinuteAngle:(double)arg2 ;
-(double)hourHandAngle;
-(void)setHourHandAngle:(double)arg1 ;
-(double)minuteHandAngle;
-(void)setMinuteHandAngle:(double)arg1 ;
-(unsigned long long)currentDial;
-(void)setOverlayContentView:(NTKOlympusTimeContentView *)arg1 ;
-(BOOL)maskingPathStartsFromHourHand;
-(void)setMaskingPathStartsFromHourHand:(BOOL)arg1 ;
-(CGSize)maskingSize;
-(void)setMaskingSize:(CGSize)arg1 ;
@end

