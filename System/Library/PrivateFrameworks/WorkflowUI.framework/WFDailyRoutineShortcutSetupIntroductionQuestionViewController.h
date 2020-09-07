/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionChildViewController.h>

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;
@class WFDailyRoutineShortcutSetupIntroductionQuestion, NSString;

@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController> {

	id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupIntroductionQuestion* _question;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupIntroductionQuestion * question;                                    //@synthesize question=_question - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL parentShouldShowSkipButton; 
-(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)arg1 ;
-(WFDailyRoutineShortcutSetupIntroductionQuestion *)question;
-(BOOL)parentShouldShowSkipButton;
-(id)initWithQuestion:(id)arg1 ;
-(void)didSelectContinueButton;
@end
