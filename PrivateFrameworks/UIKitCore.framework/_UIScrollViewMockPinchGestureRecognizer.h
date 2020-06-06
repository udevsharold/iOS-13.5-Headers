/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {

	double _scale;
	double _velocity;
	long long _state;
	UIScrollViewPinchGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UIScrollViewPinchGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) long long state; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)state;
-(double)scale;
-(void)setState:(long long)arg1 ;
-(double)velocity;
-(CGPoint)anchorPoint;
-(void)setGestureRecognizer:(UIScrollViewPinchGestureRecognizer *)arg1 ;
-(UIScrollViewPinchGestureRecognizer *)gestureRecognizer;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(void)simulateScale:(double)arg1 velocity:(double)arg2 ;
@end
