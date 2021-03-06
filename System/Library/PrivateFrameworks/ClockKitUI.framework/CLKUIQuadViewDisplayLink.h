/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKUIQuadView, CADisplayLink;

@interface CLKUIQuadViewDisplayLink : NSObject {

	CLKUIQuadView* _quadView;
	CADisplayLink* _displayLink;

}
-(void)invalidate;
-(id)initWithTarget:(id)arg1 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(unsigned long long)preferredFramesPerSecond;
@end

