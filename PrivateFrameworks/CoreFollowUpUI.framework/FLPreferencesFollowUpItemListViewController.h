/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/FLSpecifierTapHandlerDelegate.h>

@protocol FLViewModel;
@class FLSpecifierTapHandler, UIViewController, NSString;

@interface FLPreferencesFollowUpItemListViewController : PSListController <FLSpecifierTapHandlerDelegate> {

	id<FLViewModel> _viewModel;
	FLSpecifierTapHandler* _actionHandler;
	UIViewController* _presentationContext;

}

@property (nonatomic,retain) UIViewController * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleURL:(id)arg1 ;
-(UIViewController *)presentationContext;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)setPresentationContext:(UIViewController *)arg1 ;
-(id)_viewModel;
-(void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2 ;
-(id)followUpItemSpecifiers;
-(void)_dismissFlowWithError:(id)arg1 ;
-(id)detailSpecifiersForFollowUpItem:(id)arg1 ;
-(void)actionTapped:(id)arg1 ;
-(void)_showRadarPromptForItem:(id)arg1 action:(id)arg2 ;
@end

