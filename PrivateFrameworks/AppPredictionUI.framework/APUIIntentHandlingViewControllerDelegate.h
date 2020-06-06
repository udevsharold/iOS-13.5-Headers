/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APUIIntentHandlingViewControllerDelegate <NSObject>
@required
-(void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(CGSize)arg2;
-(void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
-(void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(/*^block*/id)arg3;
-(void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
-(void)intentHandlingViewController:(id)arg1 didComplete:(BOOL)arg2;

@end

