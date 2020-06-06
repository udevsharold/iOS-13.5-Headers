/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBehaviorHandler.h>

@class UIAttachmentBehavior, UIDynamicAnimator;

@interface SXSpringyComponentBehaviorHandler : SXComponentBehaviorHandler {

	double _lastYOffset;
	UIAttachmentBehavior* _dynamicBehavior;
	UIDynamicAnimator* _dynamicAnimator;
	double _frequency;
	double _damping;
	double _delta;
	CGPoint _originalCenter;

}

@property (assign,nonatomic) double lastYOffset;                                  //@synthesize lastYOffset=_lastYOffset - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * dynamicBehavior;              //@synthesize dynamicBehavior=_dynamicBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * dynamicAnimator;                 //@synthesize dynamicAnimator=_dynamicAnimator - In the implementation block
@property (assign,nonatomic) CGPoint originalCenter;                              //@synthesize originalCenter=_originalCenter - In the implementation block
@property (nonatomic,readonly) double frequency;                                  //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) double damping;                                    //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double delta;                                      //@synthesize delta=_delta - In the implementation block
-(void)dealloc;
-(double)damping;
-(UIDynamicAnimator *)dynamicAnimator;
-(void)setDynamicAnimator:(UIDynamicAnimator *)arg1 ;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(double)frequency;
-(double)delta;
-(id)initWithComponentView:(id)arg1 withBehavior:(id)arg2 ;
-(void)setupWithBehaviorController:(id)arg1 ;
-(void)updateWithBehaviorController:(id)arg1 ;
-(void)destroyWithBehaviorController:(id)arg1 ;
-(void)setDynamicBehavior:(UIAttachmentBehavior *)arg1 ;
-(double)lastYOffset;
-(void)setLastYOffset:(double)arg1 ;
-(UIAttachmentBehavior *)dynamicBehavior;
@end

