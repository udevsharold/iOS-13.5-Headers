/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFCancelable, SBFObservable, SBFScheduler;
@interface _SBFThrottledObservable : SBFObservable {

	double _interval;
	id<SBFCancelable> _delayToken;
	id<SBFObservable> _observable;
	id<SBFScheduler> _scheduler;
	id _result;
	BOOL _hasResult;
	unsigned long long _resultCounter;

}
-(void)dealloc;
-(void)_cancel;
-(id)subscribe:(id)arg1 ;
-(void)_clearResult;
-(void)_setDelayToken:(id)arg1 ;
-(unsigned long long)_setResult:(id)arg1 ;
-(void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2 ;
-(void)_sendCompletionToObsever:(id)arg1 ;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3 ;
@end

