/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class UIButton, UIActivityIndicatorView;

@interface WLRetryViewController : WLWelcomeGroupViewController {

	UIButton* _continueView;
	UIActivityIndicatorView* _spinner;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;              //@synthesize continueHandler=_continueHandler - In the implementation block
-(void)loadView;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(void)_continueTapped:(id)arg1 ;
-(void)connectivityEnablingWillStart;
-(void)connectivityEnablingDidEnd;
@end

