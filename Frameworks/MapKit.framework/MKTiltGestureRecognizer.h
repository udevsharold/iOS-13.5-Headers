/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UITouch;

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {

	UITouch* _touch1;
	UITouch* _touch2;
	CGPoint _initialTouch1Point;
	CGPoint _initialTouch2Point;
	double _initialDistance;

}
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(double)_distanceFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
@end

