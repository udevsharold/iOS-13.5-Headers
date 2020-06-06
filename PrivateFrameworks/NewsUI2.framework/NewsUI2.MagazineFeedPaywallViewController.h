/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/TUPluggable.h>

@interface NewsUI2.MagazineFeedPaywallViewController : UIViewController <UIScrollViewDelegate, TUPluggable> {

	 configurationManager;
	 styler;
	 eventHandler;
	??? config;
	 blueprintLayoutOptionsProvider;
	 paywallLayoutAttributesFactory;
	 paywallRenderer;
	 paywallView;
	 imageCache;
	 assetManager;
	 applicationStateManager;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_spinnerViewController;
	 purchasePresenter;
	 lastRenderedVerticalContentOffset;
	 imageResult;
	??? videoFilePath;

}

@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
@end

