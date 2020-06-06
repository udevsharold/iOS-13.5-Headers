/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class UIViewController, NSString;

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate> {

	UIViewController* _previousViewController;

}

@property (assign,nonatomic,__weak) UIViewController * previousViewController;              //@synthesize previousViewController=_previousViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(UIViewController *)previousViewController;
-(void)setPreviousViewController:(UIViewController *)arg1 ;
-(void)setTabBarControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

