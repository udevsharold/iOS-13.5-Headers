/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPowerDownView.h>

@interface SBPowerDownView : SBUIPowerDownView

@property (assign,nonatomic,__weak) id<SBPowerDownViewDelegate> powerDownDelegate; 
-(void)_idleTimerFired;
-(void)_cancelButtonTapped;
-(void)_powerDownSliderDidBeginSlide;
-(void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1 ;
-(void)_powerDownSliderDidCompleteSlide;
-(void)_powerDownSliderDidCancelSlide;
-(id<SBPowerDownViewDelegate>)powerDownDelegate;
-(void)setPowerDownDelegate:(id<SBPowerDownViewDelegate>)arg1 ;
@end
