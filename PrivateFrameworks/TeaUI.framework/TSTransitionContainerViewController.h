/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class UITabBarItem, NSArray, UIViewController, NSString;

@interface TSTransitionContainerViewController : UIViewController <TSTabBarSplitViewAutoObserver> {

	 identifier;
	 disableSidebarBarButtonItem;
	 rootViewController;
	 backBarButtonItem;
	 sidebarBarButtonItem;
	 doneBarButtonItem;
	 transition;

}

@property (assign,nonatomic) BOOL hidesBottomBarWhenPushed; 
@property (retain,nonatomic) UITabBarItem * tabBarItem; 
@property (readonly,nonatomic) NSArray * leftBarButtonItems; 
@property (readonly,nonatomic) NSArray * rightBarButtonItems; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
@property (readonly,nonatomic) NSString * description; 
-(void)handleSidebarWithSender:(id)arg1 ;
-(void)handleDismiss;
-(void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)arg1 ;
-(UITabBarItem *)tabBarItem;
-(BOOL)hidesBottomBarWhenPushed;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
-(void)setHidesBottomBarWhenPushed:(BOOL)arg1 ;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithRootViewController:(id)arg1 identifier:(id)arg2 ;
@end

