/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface AXUISettingsSetupCapableListController : PSListController {

	BOOL _inSetup;

}

@property (assign,nonatomic) BOOL inSetup;              //@synthesize inSetup=_inSetup - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setInSetup:(BOOL)arg1 ;
-(BOOL)inSetup;
-(id)createWelcomeControllerWithAXSettingsController:(id)arg1 title:(id)arg2 ;
-(void)filterBuddy:(id)arg1 ;
-(void)setAllSpecifiersUnsearchable:(id)arg1 ;
@end

