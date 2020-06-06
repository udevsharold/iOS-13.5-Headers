/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoSkipLockObserving.h>

@protocol SVVideoSkipThresholdObserving;
@class SVTimeline, SVTimeBasedAction, NSMutableArray, NSString;

@interface SVVideoSkipLockObserver : NSObject <SVVideoSkipLockObserving> {

	BOOL _locked;
	double _countdown;
	/*^block*/id _unlockBlock;
	/*^block*/id _countdownBlock;
	SVTimeline* _timeline;
	id<SVVideoSkipThresholdObserving> _thresholdObserver;
	SVTimeBasedAction* _unlockAction;
	NSMutableArray* _countdownActions;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                            //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipThresholdObserving> thresholdObserver;              //@synthesize thresholdObserver=_thresholdObserver - In the implementation block
@property (assign,nonatomic) BOOL locked;                                                        //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) double countdown;                                                   //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,retain) SVTimeBasedAction * unlockAction;                                   //@synthesize unlockAction=_unlockAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * countdownActions;                                  //@synthesize countdownActions=_countdownActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onUnlock:,nonatomic,copy) id unlockBlock;                                      //@synthesize unlockBlock=_unlockBlock - In the implementation block
@property (setter=onCountDown:,nonatomic,copy) id countdownBlock;                                //@synthesize countdownBlock=_countdownBlock - In the implementation block
-(void)dealloc;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)locked;
-(double)countdown;
-(void)setCountdown:(double)arg1 ;
-(void)onUnlock:(/*^block*/id)arg1 ;
-(SVTimeline *)timeline;
-(id<SVVideoSkipThresholdObserving>)thresholdObserver;
-(BOOL)lockStateForThresholdObserver:(id)arg1 onTimeline:(id)arg2 ;
-(void)scheduleUnlockActionWithThreshold:(double)arg1 ;
-(void)scheduleCountdownActionsWithThreshold:(double)arg1 ;
-(SVTimeBasedAction *)unlockAction;
-(NSMutableArray *)countdownActions;
-(void)setCountdownActions:(NSMutableArray *)arg1 ;
-(void)setUnlockAction:(SVTimeBasedAction *)arg1 ;
-(id)unlockBlock;
-(id)countdownBlock;
-(void)onCountDown:(/*^block*/id)arg1 ;
-(id)initWithTimeline:(id)arg1 thresholdObserver:(id)arg2 ;
@end

