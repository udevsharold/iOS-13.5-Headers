/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBNavigationController.h>

@interface OBPrivacyModalNavigationController : OBNavigationController {

	BOOL _darkMode;
	/*^block*/id _dismissButtonPressedHandler;

}

@property (copy) id dismissButtonPressedHandler;                           //@synthesize dismissButtonPressedHandler=_dismissButtonPressedHandler - In the implementation block
@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;              //@synthesize darkMode=_darkMode - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredUserInterfaceStyle;
-(void)_doneButtonPressed;
-(void)setDismissButtonPressedHandler:(id)arg1 ;
-(id)dismissButtonPressedHandler;
-(void)addDismissButtonWithPressedHandler:(/*^block*/id)arg1 ;
-(void)setDarkMode:(BOOL)arg1 ;
-(BOOL)isDarkMode;
@end

