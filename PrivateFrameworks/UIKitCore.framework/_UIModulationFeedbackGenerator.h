/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIModulationFeedbackGeneratorConfiguration;

@interface _UIModulationFeedbackGenerator : UIFeedbackGenerator {

	double _currentValue;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_modulationConfiguration,nonatomic,readonly) _UIModulationFeedbackGeneratorConfiguration * modulationConfiguration; 
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;                                                //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(void)deactivate;
-(void)activateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)valueUpdated:(double)arg1 ;
-(id)_stats_key;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)playingContinuousFeedback;
-(id)_modulationConfiguration;
-(void)setPlayingContinuousFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)activateWithInitialValue:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

