/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIFocusAnimationConfiguration, NSMutableArray, UIFocusUpdateContext;

@interface UIFocusAnimationCoordinator : NSObject {

	BOOL _locked;
	_UIFocusAnimationConfiguration* _focusingConfiguration;
	_UIFocusAnimationConfiguration* _unfocusingConfiguration;
	NSMutableArray* _focusingAnimations;
	NSMutableArray* _legacyFocusingAnimations;
	NSMutableArray* _unfocusingAnimations;
	NSMutableArray* _legacyUnfocusingAnimations;
	NSMutableArray* _focusingCompletions;
	NSMutableArray* _unfocusingCompletions;
	UIFocusUpdateContext* _focusUpdateContext;
	long long _activeFocusAnimation;

}

@property (nonatomic,retain) _UIFocusAnimationConfiguration * focusingConfiguration;                                                    //@synthesize focusingConfiguration=_focusingConfiguration - In the implementation block
@property (nonatomic,retain) _UIFocusAnimationConfiguration * unfocusingConfiguration;                                                  //@synthesize unfocusingConfiguration=_unfocusingConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableArray * focusingAnimations;                                                                     //@synthesize focusingAnimations=_focusingAnimations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * legacyFocusingAnimations;                                                               //@synthesize legacyFocusingAnimations=_legacyFocusingAnimations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * unfocusingAnimations;                                                                   //@synthesize unfocusingAnimations=_unfocusingAnimations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * legacyUnfocusingAnimations;                                                             //@synthesize legacyUnfocusingAnimations=_legacyUnfocusingAnimations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * focusingCompletions;                                                                    //@synthesize focusingCompletions=_focusingCompletions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * unfocusingCompletions;                                                                  //@synthesize unfocusingCompletions=_unfocusingCompletions - In the implementation block
@property (getter=_focusUpdateContext,nonatomic,readonly) UIFocusUpdateContext * focusUpdateContext;                                    //@synthesize focusUpdateContext=_focusUpdateContext - In the implementation block
@property (getter=_activeConfiguration,nonatomic,copy,readonly) _UIFocusAnimationConfiguration * activeConfiguration; 
@property (getter=_isLocked,nonatomic,readonly) BOOL locked;                                                                            //@synthesize locked=_locked - In the implementation block
@property (getter=_unfocusingRepositionAnimationDuration,nonatomic,readonly) double unfocusingRepositionAnimationDuration; 
@property (nonatomic,readonly) long long activeFocusAnimation;                                                                          //@synthesize activeFocusAnimation=_activeFocusAnimation - In the implementation block
@property (getter=_animationOptions,nonatomic,readonly) unsigned long long animationOptions; 
@property (getter=_animationDelay,nonatomic,readonly) double animationDelay; 
@property (getter=_activeAnimationDuration,nonatomic,readonly) double activeAnimationDuration; 
@property (getter=_focusingAnimationDuration,nonatomic,readonly) double focusingAnimationDuration; 
@property (getter=_unfocusingAnimationDuration,nonatomic,readonly) double unfocusingAnimationDuration; 
+(id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2 ;
+(id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2 ;
+(id)_focusAnimationCoordinatorForAnimationType:(long long)arg1 withConfiguration:(id)arg2 inContext:(id)arg3 ;
-(id)init;
-(BOOL)_isLocked;
-(void)_animate;
-(long long)activeFocusAnimation;
-(id)_activeConfiguration;
-(void)addCoordinatedAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithFocusUpdateContext:(id)arg1 ;
-(void)_setConfiguration:(id)arg1 forFocusAnimation:(long long)arg2 ;
-(void)_prepareForFocusAnimation:(long long)arg1 ;
-(void)_configureWithFocusUpdateContext:(id)arg1 ;
-(double)_focusingAnimationDuration;
-(double)_unfocusingAnimationDuration;
-(id)_focusUpdateContext;
-(void)setFocusingConfiguration:(_UIFocusAnimationConfiguration *)arg1 ;
-(void)setUnfocusingConfiguration:(_UIFocusAnimationConfiguration *)arg1 ;
-(id)_configurationForFocusAnimation:(long long)arg1 ;
-(void)addCoordinatedAnimationsForAnimation:(long long)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animateFocusAnimation:(long long)arg1 ;
-(void)_consumeBlocks:(id)arg1 ;
-(void)_consumeBlocks:(id)arg1 withAnimationContext:(id)arg2 ;
-(unsigned long long)_animationOptions;
-(double)_animationDelay;
-(double)_activeAnimationDuration;
-(double)_unfocusingRepositionAnimationDuration;
-(void)addCoordinatedFocusingAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addCoordinatedUnfocusingAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelFocusAnimation:(long long)arg1 ;
-(_UIFocusAnimationConfiguration *)focusingConfiguration;
-(_UIFocusAnimationConfiguration *)unfocusingConfiguration;
-(NSMutableArray *)focusingAnimations;
-(NSMutableArray *)legacyFocusingAnimations;
-(NSMutableArray *)unfocusingAnimations;
-(NSMutableArray *)legacyUnfocusingAnimations;
-(NSMutableArray *)focusingCompletions;
-(NSMutableArray *)unfocusingCompletions;
@end

