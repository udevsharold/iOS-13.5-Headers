/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBProximityBacklightPolicy.h>

@class SBBacklightController, NSString;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy> {

	SBBacklightController* _backlightController;
	BOOL _scheduled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithBacklightController:(id)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
-(void)_restoreBacklightFactor;
-(void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(void)_backlightWillUndim:(id)arg1 ;
-(void)_cancelScheduledBacklightFactorToZero;
-(void)_doBacklightFactorChange;
@end

