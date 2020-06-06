/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CADisplayLink;

@interface UIScrollTestToBottomParameters : NSObject {

	int _iterations;
	int _delta;
	int _scrollLength;
	float _startOffset;
	NSString* _currentTest;
	unsigned long long _axis;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) int iterations;                           //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) int delta;                                //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) int scrollLength;                         //@synthesize scrollLength=_scrollLength - In the implementation block
@property (assign,nonatomic) float startOffset;                        //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) float endOffset; 
@property (assign,nonatomic) unsigned long long axis;                  //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSString * currentTest;                   //@synthesize currentTest=_currentTest - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)dealloc;
-(unsigned long long)axis;
-(float)startOffset;
-(float)endOffset;
-(void)setAxis:(unsigned long long)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(NSString *)currentTest;
-(int)iterations;
-(void)setIterations:(int)arg1 ;
-(int)delta;
-(void)setDelta:(int)arg1 ;
-(void)setStartOffset:(float)arg1 ;
-(void)setCurrentTest:(NSString *)arg1 ;
-(int)scrollLength;
-(id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(unsigned long long)arg6 ;
-(void)setScrollLength:(int)arg1 ;
@end

