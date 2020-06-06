/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface PKWrapperViewController : UIViewController {

	long long _type;
	UIViewController* _wrappedViewController;

}

@property (nonatomic,readonly) UIViewController * wrappedViewController;              //@synthesize wrappedViewController=_wrappedViewController - In the implementation block
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(long long)preferredUserInterfaceStyle;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(UIViewController *)wrappedViewController;
@end

