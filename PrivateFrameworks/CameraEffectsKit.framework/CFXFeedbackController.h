/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIButtonFeedbackGenerator, NSMutableSet, CUShutterButton;

@interface CFXFeedbackController : NSObject {

	_UIButtonFeedbackGenerator* __shutterButtonLatchingOnFeedbackGenerator;
	_UIButtonFeedbackGenerator* __shutterButtonLatchingOffFeedbackGenerator;
	_UIButtonFeedbackGenerator* __shutterButtonMomentaryFeedbackGenerator;
	NSMutableSet* __activePairedFeedbackGenerators;
	CUShutterButton* _shutterButton;
	unsigned long long _feedbackToPerform;

}

@property (nonatomic,readonly) _UIButtonFeedbackGenerator * _shutterButtonLatchingOnFeedbackGenerator;               //@synthesize _shutterButtonLatchingOnFeedbackGenerator=__shutterButtonLatchingOnFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) _UIButtonFeedbackGenerator * _shutterButtonLatchingOffFeedbackGenerator;              //@synthesize _shutterButtonLatchingOffFeedbackGenerator=__shutterButtonLatchingOffFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) _UIButtonFeedbackGenerator * _shutterButtonMomentaryFeedbackGenerator;                //@synthesize _shutterButtonMomentaryFeedbackGenerator=__shutterButtonMomentaryFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _activePairedFeedbackGenerators;                                       //@synthesize _activePairedFeedbackGenerators=__activePairedFeedbackGenerators - In the implementation block
@property (nonatomic,readonly) CUShutterButton * shutterButton;                                                      //@synthesize shutterButton=_shutterButton - In the implementation block
@property (assign,nonatomic) unsigned long long feedbackToPerform;                                                   //@synthesize feedbackToPerform=_feedbackToPerform - In the implementation block
-(id)init;
-(CUShutterButton *)shutterButton;
-(id)_feedbackGeneratorForPairedFeedback:(unsigned long long)arg1 ;
-(NSMutableSet *)_activePairedFeedbackGenerators;
-(id)_debugStringForPairedFeedback:(unsigned long long)arg1 ;
-(_UIButtonFeedbackGenerator *)_shutterButtonMomentaryFeedbackGenerator;
-(_UIButtonFeedbackGenerator *)_shutterButtonLatchingOnFeedbackGenerator;
-(_UIButtonFeedbackGenerator *)_shutterButtonLatchingOffFeedbackGenerator;
-(void)prepareButtonFeedback:(unsigned long long)arg1 ;
-(void)performPressButtonFeedback:(unsigned long long)arg1 ;
-(void)performReleaseButtonFeedback:(unsigned long long)arg1 ;
-(id)initWithShutterButton:(id)arg1 ;
-(void)shutterButtonDown:(id)arg1 ;
-(void)shutterButtonUp:(id)arg1 ;
-(unsigned long long)shutterButtonFeedbackForCurrentConfiguration;
-(void)setFeedbackToPerform:(unsigned long long)arg1 ;
-(unsigned long long)feedbackToPerform;
@end

