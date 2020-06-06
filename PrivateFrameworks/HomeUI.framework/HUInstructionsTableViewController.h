/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController {

	HUInstructionsItem* _instructionsItem;
	UIViewController* _contentViewController;

}

@property (nonatomic,readonly) HUInstructionsItem * instructionsItem;                 //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)viewDidLoad;
-(UIViewController *)contentViewController;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(HUInstructionsItem *)instructionsItem;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)childViewControllersToPreload;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 instructionsItem:(id)arg2 contentViewController:(id)arg3 ;
@end

