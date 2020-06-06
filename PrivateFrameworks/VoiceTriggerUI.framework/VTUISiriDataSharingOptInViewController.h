/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol VTUISiriDataSharingOptInViewControllerDelegate;
@interface VTUISiriDataSharingOptInViewController : OBTextWelcomeController {

	id<VTUISiriDataSharingOptInViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VTUISiriDataSharingOptInViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VTUISiriDataSharingOptInViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldInlineButtonTray;
-(id)initWithViewStyle:(long long)arg1 ;
@end

