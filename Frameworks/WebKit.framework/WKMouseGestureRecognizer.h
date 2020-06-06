/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface WKMouseGestureRecognizer : UIGestureRecognizer {

	RetainPtr<UIHoverEvent>* _currentHoverEvent;
	RetainPtr<UITouch>* _currentTouch;
	BOOL _touching;
	unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> >* _lastEvent;
	Optional<CGPoint> _lastLocation;
	Optional<long> _pressedButtonMask;

}
-(void)reset;
-(void)setView:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(BOOL)_wantsHoverEvents;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> >*)createMouseEventWithType:(int)arg1 ;
-(NativeWebMouseEvent*)lastMouseEvent;
-(Optional<CGPoint>)lastMouseLocation;
-(id)mouseTouch;
@end

