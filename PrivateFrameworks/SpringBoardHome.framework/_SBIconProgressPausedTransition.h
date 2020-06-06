/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	BOOL _toPaused;
	double _fraction;

}
+(id)newTransitionToPaused:(BOOL)arg1 ;
-(void)_updateView:(id)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToPaused:(BOOL)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initToPaused:(BOOL)arg1 ;
-(void)_updateTimingFunction;
-(void)_updateElapsedTimeFromFraction;
@end

