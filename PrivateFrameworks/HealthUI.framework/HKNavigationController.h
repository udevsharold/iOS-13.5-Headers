/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HKTabBarTapObserver.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class HKProfileBarButtonItem, NSString;

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate> {

	HKProfileBarButtonItem* _commonProfileBarButtonItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)didTapTabBarIcon;
-(void)didChangeToAnotherTab;
-(id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1 ;
-(id)commonProfileBarButtonItem;
@end

