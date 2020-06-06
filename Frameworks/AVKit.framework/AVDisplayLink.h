/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface AVDisplayLink : NSObject {

	/*^block*/id _linkFired;
	CADisplayLink* _displayLink;
	id _observer;
	double _startTime;

}

@property (nonatomic,copy) id linkFired;                               //@synthesize linkFired=_linkFired - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic,__weak) id observer;                       //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double runningTime; 
-(void)invalidate;
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)linkFired:(id)arg1 ;
-(double)runningTime;
-(id)linkFired;
-(void)setLinkFired:(id)arg1 ;
@end

