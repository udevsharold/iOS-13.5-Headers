/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUAccessorySceneListContentViewController, HUAccessorySceneListItemManager;

@interface HUAccessorySceneListViewController : HUItemTableViewController {

	HUAccessorySceneListContentViewController* _existingSceneListContentViewController;
	HUAccessorySceneListContentViewController* _suggestedSceneListContentViewController;

}

@property (nonatomic,retain) HUAccessorySceneListContentViewController * existingSceneListContentViewController;               //@synthesize existingSceneListContentViewController=_existingSceneListContentViewController - In the implementation block
@property (nonatomic,retain) HUAccessorySceneListContentViewController * suggestedSceneListContentViewController;              //@synthesize suggestedSceneListContentViewController=_suggestedSceneListContentViewController - In the implementation block
@property (nonatomic,readonly) HUAccessorySceneListItemManager * itemManager; 
-(void)viewDidLoad;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithServiceLikeItem:(id)arg1 ;
-(id)childViewControllersToPreload;
-(HUAccessorySceneListContentViewController *)existingSceneListContentViewController;
-(HUAccessorySceneListContentViewController *)suggestedSceneListContentViewController;
-(void)setExistingSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
-(void)setSuggestedSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
@end

