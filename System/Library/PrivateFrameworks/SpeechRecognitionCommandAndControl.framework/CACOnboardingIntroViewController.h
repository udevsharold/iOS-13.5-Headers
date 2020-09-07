/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBTrayButton, CACOnboardingCommandsTableViewController;

@interface CACOnboardingIntroViewController : OBWelcomeController {

	OBTrayButton* _mainButton;
	CACOnboardingCommandsTableViewController* _onboardingTVC;
	unsigned long long _style;

}

@property (nonatomic,retain) OBTrayButton * mainButton;                                             //@synthesize mainButton=_mainButton - In the implementation block
@property (nonatomic,retain) CACOnboardingCommandsTableViewController * onboardingTVC;              //@synthesize onboardingTVC=_onboardingTVC - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
+(id)defaultControllerWithStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldInlineButtonTray;
-(OBTrayButton *)mainButton;
-(void)setMainButton:(OBTrayButton *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 style:(unsigned long long)arg4 ;
-(void)enableVoiceControlAndMoveToCommandsOverview;
-(void)dismissWelcomeController;
-(CACOnboardingCommandsTableViewController *)onboardingTVC;
-(void)setOnboardingTVC:(CACOnboardingCommandsTableViewController *)arg1 ;
@end
