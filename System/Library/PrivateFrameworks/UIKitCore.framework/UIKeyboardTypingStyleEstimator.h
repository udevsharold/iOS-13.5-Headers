/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardTypingStyleEstimatorDelegate;
@class NSTimer;

@interface UIKeyboardTypingStyleEstimator : NSObject {

	NSTimer* _tapTypingFlipTimer;
	double _lastContinuousPathEvent;
	unsigned long long _currentTypingStyle;
	id<UIKeyboardTypingStyleEstimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UIKeyboardTypingStyleEstimatorDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardTypingStyleEstimatorDelegate>)arg1 ;
-(void)tapTypedKey;
-(void)beganContinuousPath;
-(void)endedContinuousPath;
-(unsigned long long)currentTypingStyleEstimation;
-(void)_setTypingStyleEstimation:(unsigned long long)arg1 ;
@end

