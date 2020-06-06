/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class NSMutableSet;

@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer {

	NSMutableSet* _activeTouches;

}
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

