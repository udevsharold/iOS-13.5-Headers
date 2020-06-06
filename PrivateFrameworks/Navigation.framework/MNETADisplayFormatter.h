/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNETADisplayFormatterDelegate;
@class NSTimeZone, MNWeakTimer, NSDate;

@interface MNETADisplayFormatter : NSObject {

	id<MNETADisplayFormatterDelegate> _delegate;
	double _remainingTime;
	NSTimeZone* _timeZone;
	MNWeakTimer* _updateTimer;
	double _displayRemainingTime;
	NSDate* _displayETA;

}

@property (assign,nonatomic,__weak) id<MNETADisplayFormatterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double remainingTime;                                           //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) double displayRemainingTime;                                  //@synthesize displayRemainingTime=_displayRemainingTime - In the implementation block
@property (nonatomic,readonly) NSDate * displayETA;                                          //@synthesize displayETA=_displayETA - In the implementation block
-(void)dealloc;
-(id<MNETADisplayFormatterDelegate>)delegate;
-(void)setDelegate:(id<MNETADisplayFormatterDelegate>)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)_updateTimerFired;
-(NSDate *)displayETA;
-(void)_updateDisplayETA;
-(double)_displayTimeIntervalForTimeInterval:(double)arg1 ;
-(id)_displayDateWithRemainingTime:(double)arg1 ;
-(void)_scheduleUpdateTimer;
-(id)initWithTimeZone:(id)arg1 ;
-(double)displayRemainingTime;
@end

